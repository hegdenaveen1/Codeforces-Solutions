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
    
int n,k;
cin >> k >> n;
vi v(n);
for (int i = 0; i < n; i++)
{
  cin >> v[i];
}
sort(v.begin(),v.end());
int mini=v[n-1]-v[0];
for(int i=0;i+k-1<n;i++)
{
  mini = min(mini,v[i+k-1]-v[i]);
}
cout << mini;

    return 0;


}