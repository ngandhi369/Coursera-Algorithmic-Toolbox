#include<iostream>
using namespace std;

long long int maxfun(long long int *,int);

int main()
{
    int n;
    cin>>n;
    long long int A[n];
    for(int i=0;i<n;++i)
        cin>>A[i];
    cout<<maxfun(A,n);
return 0;
}

long long int maxfun(long long int *a,int n)
{
    int k=0;
    long long int temp=0;
    for(int i=1;i<n;++i)
    {
        if(a[i]>a[k])
        {
            k=i;
        }
    }

    temp=a[k];
    a[k]=a[n-1];
    a[n-1]=temp;

    k=0;
    for(int i=1;i<n-1;++i)
    {
        if(a[i]>a[k])
            k=i;
    }

    temp=a[k];
    a[k]=a[n-2];
    a[n-2]=temp;

    return a[n-2]*a[n-1];
}
