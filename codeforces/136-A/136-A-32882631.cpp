#include<bits/stdc++.h>

using namespace std;


int main(){

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif

long long int n,x;
cin >> n;
std::vector<int> v(n);
for(int i=1;i<=n;i++)
{
    cin >> x;
    v[x-1]=i;
}
for(int i=0;i<n;i++)
{
   cout << v[i] << " ";
}

return 0;
}