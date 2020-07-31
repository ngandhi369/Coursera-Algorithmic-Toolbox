//4.LCM MUCH FASTER
#include<iostream>
using namespace std;
long long int GCD(long long int,long long int);
int main()
{
    long long int a,b,ans;
    cin>>a>>b;
    ans=a>b ? GCD(a,b): GCD(b,a);
    cout<<(a*b)/ans;
return 0;
}
long long int GCD(long long int a/*bigger*/,long long int b)
{
    long long int c;
    if(b==0)
        return a;
    c=a%b;
    return GCD(b,c);//because denominator is always bigger than reminder
}
