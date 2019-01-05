#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    string a,b;
    vector<char>v,v1;
    getline(cin,a);

    if(a=="DONE") return 0;

    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=tolower(a[i]);
            v.pb(a[i]);
        }

        else if(a[i]>='a' && a[i]<='z') v.pb(a[i]);

    }

    v1=v;
    reverse(v1.begin(),v1.end());

   if(v1==v) cout << "You won't be eaten!" << endl;
   else cout << "Uh oh.." << endl;

    main();
}
