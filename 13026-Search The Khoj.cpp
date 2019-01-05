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
	int t;
	cin >> t;

	for(int i=0;i<t;i++)
	{
		int n;
		cin >> n;
		string a,b;
		vector<string>v;

		for(int ii=0;ii<n;ii++)
		{
			cin >> a;
			v.pb(a);
		}

		cin >> a;
		cout << "Case " << i+1 << ":" << endl;

		for(int k=0;k<v.size();k++)
		{
			int count=0;
			b=v[k];

			for(int j=0;j<b.size();j++)
			{
				if(b[j]!=a[j])
				count++;
				if(count>1) break;
			}

			if(count==0 || count==1)
			{
				cout<<b<<endl;
			}
		}
	}

	return 0;
}
