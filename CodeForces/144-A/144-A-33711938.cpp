#include <bits/stdc++.h>
using namespace std;



int main()
{
  #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
  #endif
      
int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++)
{
  cin >> arr[i];
}

int mini=std::numeric_limits<int>::max(),maxi=std::numeric_limits<int>::min(),miniindex,maxiindex,swap;

for(int i=0;i<n;i++)
{
  if(arr[i]<=mini)
  {
    mini=arr[i];
    miniindex=i;
  }
  if(arr[i]>maxi)
  {
    maxi=arr[i];
    maxiindex=i;
  }
}
if(maxiindex<miniindex)
{
  cout << maxiindex + (n-1-miniindex);
}
else
{
  cout << maxiindex + (n-1-miniindex)-1;
}

return 0;
}