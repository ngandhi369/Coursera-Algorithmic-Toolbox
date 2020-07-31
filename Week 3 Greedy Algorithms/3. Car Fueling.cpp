//3 Car Fueling
#include<iostream>
using namespace std;
int main()
{
    long int d,m,n;//d : total distance//m : running prediction of car//n : pumping station
    cin>>d>>m>>n;
    long int x[302];
    x[0]=0;

    for(long int i=1;i<=n;i++)
    {
        //cout<<"enter x["<<i<<"]:";
        cin>>x[i];
    }

    x[n+1]=d;

    /*for(long int i=0;i<=n+1;i++)
        cout<<"x["<<i<<"]:"<<x[i]<<endl;

    cout<<"x[n]:"<<x[n]<<endl;
    cout<<"n:"<<n<<endl<<endl;*/

    long int current=0,last=0,ans=0;

    while(current<=n)
    {
        last=current;
        while(current<=n && x[current+1]-x[last]<=m)
        {
            //cout<<"bapu:"<<endl;
            ++current;
        }
        if(current==last)
        {
            cout<<-1<<endl;
            return 0;
        }
        if(current <= n)
            ++ans;
    }
cout<<ans<<endl;
return 0;
}
