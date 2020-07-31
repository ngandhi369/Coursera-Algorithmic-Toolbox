#include<iostream>
using namespace std;
int main()
{
    long int n,k,c=0;
    //cout<<"enter n:"<<endl;
    cin>>n;
    long int a[n],b[n];
    //cout<<"enter:"<<endl;
    for(long int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    //cout<<"Enter k:"<<endl;
    cin>>k;
    //cout<<"Enter:"<<endl;
    for(long int i=0;i<k;++i)
    {
        cin>>b[i];
    }
    /*print
    cout<<"A:"<<endl;
    for(long int i=0;i<n;++i)
    {
        cout<<a[i]<<endl;
    }
    cout<<"B:"<<endl;
    for(long int j=0;j<k;++j)
    {
        cout<<b[j]<<endl;
    }*/

    //cout<<endl<<endl<<"o/p"<<endl;
    //logic:

    for(long int j=0;j<k;++j)//b
    {
        c=0;
        for(long int i=0;i<n;++i)//a
        {
            if(b[j]==a[i])
            {
                //cout<<"i:"<<i<<" ";
                cout<<i<<" ";
                ++c;
                break;
            }
        }
        if(c==0)
        {
            cout<<"-1 ";
        }
    }
    return 0;
}
