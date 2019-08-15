/*----------------------|
/ Author : Ashraf Tasin |
/ Date   :   22.04.19   |
/----------------------*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define all v.begin(),v.end()
#define flash ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define db double
#define endl "\n"
#define mnm pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>
#define show for(int i=0;i<v.size();i++) cout << v[i] << " ";
#define eps 1e-6
#define mx  2000002
using namespace std;


/*King  Moves

int dx[]={-1,1,-1,0,1,-1,0,1};
int dy[]={0,0,-1,-1,-1,1,1,1};    */

/*Knight Moves

int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; */

/*Normal Moves

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};*/



int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	flash

	map<char,char> m;
	m['A']='2';
	m['B']='2';
	m['C']='2';
	m['D']='3';
	m['E']='3';
	m['F']='3';
	m['G']='4';
	m['H']='4';
	m['I']='4';
	m['J']='5';
	m['K']='5';
	m['L']='5';
	m['M']='6';
	m['N']='6';
	m['O']='6';
	m['P']='7';
	m['Q']='7';
	m['R']='7';
	m['S']='7';
	m['T']='8';
	m['U']='8';
	m['V']='8';
	m['W']='9';
	m['X']='9';
	m['Y']='9';
	m['Z']='9';

	
	string s;

	while(getline(cin,s))
	{
		int sz=s.size();
		string ans="";

		for(int i=0;i<sz;++i)
		{
			if(s[i]>='A' and s[i]<='Z') ans+=m[s[i]];
			else ans+=s[i];
		}

		cout << ans << endl;
	}


	return 0;
}