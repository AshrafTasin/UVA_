#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    map<char,int> m;
    multimap<int,char,greater<int>> mm;
    vector<string>v;

    cin >> n;
    for(int i=0;i<=n;i++)
    {
        string a;
        getline(cin,a);
        v.push_back(a);
    }

    for(int i=0;i<v.size();i++)
    {
        stringstream s(v[i]);
        string word;

        while(s >> word)
        {
            for(int i=0;i<word.length();i++)
            {
                if(word[i]>='a' && word[i]<='z') word[i]=toupper(word[i]);
            }

            for(int i=0;i<word.length();i++)
            {
                if(word[i]>='A' && word[i]<='Z') m[word[i]]++;
            }

        }
    }

    map<char,int> :: iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
      mm.insert({it->second,it->first});
    }

    for(auto x:mm) cout << x.second << " " << x.first << endl;

    return 0;
}
