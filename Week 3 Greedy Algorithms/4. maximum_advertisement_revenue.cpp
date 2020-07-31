//4 maximum advertise revenue
#include<iostream>
using namespace std;

void sorting(int *a,int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    sorting(a,n);
    sorting(b,n);
    for(int i=0;i<n;i++)
    {
        sum=sum+(a[i]*b[i]);
    }
    cout<<sum<<endl;
return 0;
}
