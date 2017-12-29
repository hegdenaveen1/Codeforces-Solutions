#include<bits/stdc++.h>
using namespace std;





int main()
{
  #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
  #endif
      
long long n,k;
cin >> n >> k;
if(n%2==0)
{
  if(k<=n/2)
    cout << 2*k-1;
  else
    cout << 2*(k)-n;
}
else
{
  if(k<=n/2+1)
    cout << 2*k-1;
  else
    cout << (2*k-1)-n;
}


return 0;
}