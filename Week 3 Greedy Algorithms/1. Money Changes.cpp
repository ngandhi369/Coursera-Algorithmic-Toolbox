//1.Money Change
#include<iostream>
using namespace std;
int main()
{
    long long n,rem,count=0;
    cin>>n;
    count=n/10;
    rem=n%10;
    count=count+rem/5;
    rem=n%5;
    count=count+rem;
    cout<<count;
return 0;
}
