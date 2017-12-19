#include<bits/stdc++.h>

using namespace std;


int main(){

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif


int n,count=0;
cin >> n;
int x,y;
cin >> x;
y=x;
n--;
while(n--)
{
    cin >> x;
    if(x!=y)
        count++;
    y=x;
}
cout << count + 1;
return 0;
}