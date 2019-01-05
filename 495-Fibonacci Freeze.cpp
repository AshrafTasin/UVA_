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
#define lim 5005
#define len 1050
using namespace std;

int fib[lim][len];


void fibonacci()
{
    int i,j,k,sum;
    fib[0][0]=0;
    fib[1][0]=1;
    fib[2][0]=1;
    for(i=3; i<lim; i++)
    {
        for(j=0; j<len; j++)
        {
            fib[i][j]+=fib[i-2][j]+fib[i-1][j];
            if(fib[i][j]>=10)
            {
                fib[i][j+1]+=fib[i][j]/10;
                fib[i][j]%=10;
            }
        }
    }
}

int main()
{
    fibonacci();
    int n,i,j,k;
    while(scanf("%d",&n)==1)
    {
        for(i=len-1; i>0; i--)
        {
            if(fib[n][i]!=0)
                break;
        }
        printf("The Fibonacci number for %d is ",n);
        for(; i>=0; i--)
            printf("%d",fib[n][i]);
        printf("\n");
    }
    return 0;
}
