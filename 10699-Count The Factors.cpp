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
#define mx 1000010
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;

bool prime[mx+100];
vector<ll> v;
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


int main()
{
    seive();

    ll x;

    while(cin >> x)
    {
        if(x==0) return 0;
        ll p=x;
        ll cnt=0;

        for(ll i=0; i<sz &&(v[i]*v[i])<=x; i++)
        {
            if(x%v[i]==0)
            {
                cnt++;
                while(x%v[i]==0) x/=v[i];
            }
        }

        if(x!=1) cnt++;

        printf("%lld : %lld\n",p,cnt);

    }

    return 0;
}
