#include <bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
#endif
    
int n,k;
cin >> n >> k;
int sum=n-1;
int x;
for(int i=0;i<n;i++)
{
  cin >>x;
  sum = sum +x;
}
if(sum==k)
  cout << "YES";
else
  cout << "NO";
return 0;
}