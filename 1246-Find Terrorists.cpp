/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   17.09.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define mx 10005
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;

bool prime[mx+100];
vector<ll> v,facts;
ll sz;

void seive()
{
    for(ll i=4;i<=mx;i+=2) prime[i]=1;

    ll s=sqrt(mx);

    for(ll i=3;i<=s;i+=2)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i;j<=mx;j+=i*2) prime[j]=1;
        }
    }

    prime[1]=1;
    prime[0]=1;

    for(ll i=2;i<mx;i++)
    {
        if(prime[i]==0) v.pb(i);
    }

    sz=v.size();

}

void fact(int n)
{
    int ans=0;

    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n) ans++;
        else if(n%i==0) ans+=2;

    }

    if(prime[ans]==0) facts.pb(n);
}



int main()
{
    seive();

    int tc;
    scanf("%d",&tc);

    for(ll j=1;j<=tc;j++)
    {
       int a,b;
       scanf("%d%d",&a,&b);

       for(int i=a;i<=b;i++) fact(i);

       if(facts.size()==0) cout << "-1" << endl;

       else
       {
          for(int i=0;i<facts.size()-1;i++) cout << facts[i] << " ";

          cout << facts[facts.size()-1] << endl;
       }

       facts.clear();

    }

    return 0;
}
