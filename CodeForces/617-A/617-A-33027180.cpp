#include<bits/stdc++.h>

using namespace std;


int main(){

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif

int n,sum=0,rem;
cin >> n;
sum+=n/5;
n=n%5;
sum+=n/4;
n=n%4;
sum+=n/3;
n=n%3;
sum+=n/2;
n=n%2;
sum+=n/1;

cout << sum;


return 0;
}