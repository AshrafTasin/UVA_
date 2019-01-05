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
    cin >> n;

    while(n--)
    {
        int a,b;
        cin >> a >> b;

        if(b%a==0) cout << a << " " << b << endl;
        else cout << -1 << endl;

    }


    return 0;
}
