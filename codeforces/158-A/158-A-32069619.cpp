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
vector<int> v(n);
for(int i=0;i<n;i++)
{
    cin >> v[i];
}
int key;
key=v[k-1];
int count=0;
for(int i=0;i<n;i++)
{
    if(v[i]>=key&&v[i]>0)
        count++;
}
cout<<count;
return 0;
}