#include <bits/stdc++.h>
using namespace std;

//////////////////
// Naveen Hegde //
//    BITS H    //
//////////////////

#define int long long
#define uint unsigned long long
#define real long double

#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ss second
#define ff first
#define pb push_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

//#define mod 1000000007

#define trace(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl





int32_t main()
{

	    FastIO;
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif

int n;
cin >> n;
int arr[n];
int cumz[n];
int cumo[n];

cin >> arr[0];

if(arr[0]==0)
{
			cumz[0]=1;
			cumo[0]=0;
}
else
{
		cumo[0]=1;
		cumz[0]=0;
}

for(int i=1;i<n;i++)
{
	cin >> arr[i];
	if(arr[i]==0)
		{
			cumz[i]=1+cumz[i-1];
			cumo[i]=cumo[i-1];
		}
	else
	{
		cumo[i]=1+cumo[i-1];
		cumz[i]=cumz[i-1];
	}
}


int ans=0;
int x;

for(int i=0;i<n;i++)
{
	for(int j=i;j<n;j++)
	{
		ans=max(ans,cumo[n-1]-(cumo[j]-cumo[i]+arr[i])+(cumz[j]-cumz[i]+1-arr[i]));
	}
}

cout << ans;

return 0;
}