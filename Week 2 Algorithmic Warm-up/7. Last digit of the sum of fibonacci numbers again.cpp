//7
#include<iostream>
using namespace std;
int main()
{
    long long n1,n2,ans,sum1,sum2;
    cin>>n1>>n2;
    long long f[n2+2];
    f[0]=0;
    f[1]=1;
    for(long long i=2;i<=n2+2;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    sum1=f[n2+2]-1;
    sum2=f[n1+1]-1;
    ans=sum1-sum2;
    cout<<ans%10<<endl;
return 0;
}
