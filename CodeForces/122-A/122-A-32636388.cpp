#include<bits/stdc++.h>

using namespace std;

int main(){

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif

int arr[13]={4,7,44,47,77,444,447,474,744,477,747,774,777} ;
int x;
cin >> x;
for(int i=0;i<13;i++)
{
    if(x%arr[i]==0)
    {
        cout << "YES";
        return 0;
    }
}
cout << "NO";
return 0;
}