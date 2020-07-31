//1.fibbo MUCH FASTER
#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n==0 || n==1)
    {
        n==0?cout<<0:cout<<1<<endl;
        return 0;
    }
    long long int f[n];
    f[0]=0;
    f[1]=1;
    long long int i;
    for(i=2;i<=n;++i)
    {
        f[i]=(f[i-1]+f[i-2]);
    }
    --i;
    cout<<f[i];
return 0;
}
