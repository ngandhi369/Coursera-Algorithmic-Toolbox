//collecting signature
#include<iostream>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    long int a[n],b[n];

    for(long int i=0;i<n;i++)
        cin>>a[i]>>b[i];

    long int temp;
    for(long int i=0;i<n-1;i++)
    {
        for(long int j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }

    for(long int i=0;i<n;i++)
        cout<<"a[i]:"<<a[i]<<"\t"<<"b[i]:"<<b[i]<<endl;

    long long index=0;

    while(index<n)
    {

    }

return 0;
}
