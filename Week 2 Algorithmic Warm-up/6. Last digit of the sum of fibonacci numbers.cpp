//6.last digit of sum of fibonacci
#include<iostream>
using namespace std;
int main()
{
    long long n,sum=1;
    cin>>n;
    if(n==0 || n==1)
    {
        n==0?cout<<0:cout<<1<<endl;
        return 0;
    }
    long long f[n];
    f[0]=0;
    f[1]=1;
    for(long long i=2;i<=n;++i)
    {
        f[i]=f[i-1]+f[i-2];
        sum=sum+f[i];
    }
    cout<<sum%10<<endl;
return 0;
}
