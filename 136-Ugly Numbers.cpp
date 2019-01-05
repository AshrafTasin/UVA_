/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   10.09.18   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define M it=m.begin(),it!=m.end(),it++
#define db double
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
using namespace std;

int main()
{

    ll i;
    int counter=1;

    for(i=2;;i++)
    {
        ll p=i;

        if(p%2==0) while(p%2==0) p/=2;
        if(p%3==0) while(p%3==0) p/=3;
        if(p%5==0) while(p%5==0) p/=5;

        if(p==1) counter++;
        if(counter==1500) break;
    }

   // cout << "The 1500'th ugly number is 859963392." << endl;
    cout << i << endl;

    return 0;
}
