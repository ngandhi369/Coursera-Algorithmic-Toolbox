//2 Maximum Value of the Loot
#include<iostream>
using namespace std;

void swapping(long long *w,long long *v,long long *A,long long n);
int main()
{
    long long n,W;
    cin>>n>>W;
    long long v[n],w[n],A[n];
    for(long long i=0;i<n;i++)
    {
        cin>>v[i]>>w[i];
        A[i]=v[i]/w[i];
    }

    swapping(w,v,A,n);

    long long i=0;
    long double V=0,a;
    while(i<=n)
    {
        if(W==0)
        {
            cout<<V;
            break;
        }
        a = w[i]<W ? w[i] : W;//min
        V = V + a*v[i]/w[i];//don't write A[i] instead of v[i]/w[i] Bcau's we have to take floating value
        W=W-a;
        i++;
    }
return 0;
}

void swapping(long long* w,long long *v,long long *A,long long n)
{
    long long temp,temp1,temp2;
    for(long long i=0;i<n-1;i++)
    {
        for(long long j=i;j<n;j++)
        {
            if(A[i]<A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
                    temp1=w[i];
                    w[i]=w[j];
                    w[j]=temp1;
                temp2=v[i];
                v[i]=v[j];
                v[j]=temp2;
            }
        }
    }
}
