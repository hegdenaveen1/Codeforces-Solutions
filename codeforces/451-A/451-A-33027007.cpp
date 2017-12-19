#include<bits/stdc++.h>

using namespace std;


int main(){

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif

int n,m;
cin >> n >> m;
int x=min(n,m);
if(x%2==0)
    cout << "Malvika";
else
    cout << "Akshat";



return 0;
}