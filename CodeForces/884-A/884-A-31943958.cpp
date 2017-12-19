#include <bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
#endif
    
int n,t;
cin >> n >> t;
int sum=0;
int x;
int count = 0;
int flag = 1;
for(int i=0;i<n&&flag;i++)
{
  cin >> x;
  count++;
  sum = sum +(86400-x);
  if(sum>=t)
    flag=0;
}
cout << count;

return 0;
}