//maximum salary
#include<iostream>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    long int a[n],b[n];
    for(long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(long int i=0;i<n;i++)
    {
        b[i]=a[i]/10==0 ? a[i]%10 : (a[i]/100==0 ? a[i]/10 : a[i]/100 );
    }

        long int temp;
    for(long int i=0;i<n-1;i++)
    {
        for(long int j=i;j<n;j++)
        {
            if(b[j]>=b[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(long int i=0;i<n;i++)
        cout<<a[i];


return 0;
}
