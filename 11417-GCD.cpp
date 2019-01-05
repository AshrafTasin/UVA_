/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   17.08.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
using namespace std;

int GCD(int i,int j)
{
    while(j)
    {
        i=i%j;
        swap(i,j);
    }

    return i;
}

int main()
{
    int n;

    while(cin >> n)
    {
        if(n==0) break;
        ll sum=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++) sum+=GCD(i,j);
        }

        cout << sum << endl;
    }


    return 0;
}
