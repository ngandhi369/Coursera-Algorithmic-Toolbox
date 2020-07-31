//6 max no. of prize
#include<iostream>
using namespace std;
int main()
{
    long long n,coun=0;
    cin>>n;
    long long a[n],i;
    for(i=1;i<=n;i++)
    {
        if(n-i>i)
        {
            n=n-i;
            a[coun]=i;
            coun++;
        }
        else
        {
            a[coun]=n;
            coun++;
            break;
        }
    }

    cout<<coun<<endl;

    for(i=0;i<coun;i++)
        cout<<a[i]<<" ";
return 0;
}
