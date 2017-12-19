#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define vi vector<int>
#define vlli vector<long long int>

int main() 
{
    #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
  #endif
    
long long a,b,c,quo;
cin >> a >> b >> c;
for(int i=0;i<=100000;i++)
{
	a=a*10;
	quo=a/b;
	if(quo==c)
	{
		cout << i+1;return 0;
	}
	a=a%b;
}

cout << "-1";
    return 0;

}