#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll powe(ll a, ll n) 
{
ll ret = 1;
while(n) 
{
if(n%2 == 1) ret *= a;
a *= a; n /= 2;
}
return ret;
}

int main()
{

    #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
    #endif
      ll n,m;
      cin >> n >> m;
      
      if(n>=63)
      	{
      		cout << m;
      		return 0;
      	}
      else
      {
      	cout << m%(powe(2,n));
      }


    return 0;
}