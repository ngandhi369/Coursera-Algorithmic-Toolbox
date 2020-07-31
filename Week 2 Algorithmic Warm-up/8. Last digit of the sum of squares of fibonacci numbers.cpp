//8.
#include<iostream>
using namespace std;
int main()
{
    long long n,ans;
    cin>>n;
    long long f[n+2];
    f[0]=0;
    f[1]=1;
    for(long long i=2;i<=n+2;i++)
    {
        f[i]=f[i-2]+f[i-1];
    }
    ans=f[n]*f[n+1];
    cout<<ans%10;
return 0;
}
