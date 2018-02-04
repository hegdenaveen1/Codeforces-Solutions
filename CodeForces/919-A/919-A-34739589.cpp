#include <bits/stdc++.h>
using namespace std;

#define int long long




int32_t main()
{

        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);
        #endif

int n,m;
cin >> n >> m;

long double a,b,ans=numeric_limits<long double>::max();
while(n--)
{
	cin >> a >> b;
	ans = min(ans,a/b);
}
cout << fixed << setprecision(10) << ans*m;

return 0;
}