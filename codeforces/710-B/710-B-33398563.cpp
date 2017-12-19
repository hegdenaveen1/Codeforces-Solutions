#include<bits/stdc++.h>


using namespace std;

#define ll long long


int main() {

   #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
  #endif

ll n;
cin >> n;
vector < ll > v(n);
for(int i=0;i<n;i++)
{
  cin >> v[i];
}

sort(v.begin(),v.end());
ll p;
if(n&1)
  p=n/2;
else
  p=n/2-1;
cout << v[p];

return 0;
}