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
 	
 	int n,k;
 	cin >> n >> k;
 	vector<int> v(n);
 	for(int i=0;i<n;i++)
 	{
 		cin >> v[i];
 	}
 	sort(v.rbegin(),v.rend());
 	for(int i=0;i<n;i++)
 	{
 		if(k%v[i]==0)
 		{
 			cout << k/v[i];
 			return 0;
 		}
 	}
 	
	return 0;
}