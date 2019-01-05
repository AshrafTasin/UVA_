#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    long long int n,m,ax,in,res,y;

    cin >> n >> m;
    if(m==1) cout << (n*(n-1))/2 << " " << (n*(n-1))/2 << endl;
    else if(n==m) cout << 0 << " " << 0 << endl;
    else
    {
        ax=n-m;
        ax=(ax*(ax+1))/2;
        in=n/m;
        y=n%m;

        if(y==0)
        {
            res=m*((in*(in-1))/2);
            cout << res << " " << ax << endl;
        }

        else
        {
            res=(m-y)*((in*(in-1))/2)+y*((in*(in+1))/2);
            cout << res << " " << ax << endl;
        }
    }

    return 0;
}
