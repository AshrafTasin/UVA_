/*------------------------|
/ Author :   Ashraf Tasin |
/ Date   :   20.09.18     |
/------------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define mx 1000010
#define md 1000000007
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;


int main()
{

    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        ll a,cnt=0,res=0;
        cin >> a;
        map<ll,ll> m;
        set<ll> s;

        for(int j=1;j<=a;j++)
        {
            ll p,q;
            cin >> p >> q;

            m[q]+=p;
            cnt+=p;
            s.insert(q);
        }

        for(auto it=s.begin();it!=s.end();it++)
        {
            res=max(res,((*it)*cnt));
            cnt-=m[*it];
        }

        cout << "Case " << i << ": " << res << endl;

    }

    return 0;
}
