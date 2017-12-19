#include<bits/stdc++.h>

using namespace std;


int main(){

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif

long long int n,k,max,min,count=0;
cin >> n;
cin >> k;
max=k;
min=k;
n--;
while(n--)
{
    cin >> k;
    if(k>max)
        {count++;max=k;}
    if(k<min)
        {count++;min=k;}
}
cout << count;
return 0;
}