#include<bits/stdc++.h>

using namespace std;

int main(){

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif

long long int n,x,y,count=0;
cin >> n;
while(n--)
{
    cin >> x >> y;
    if(y-x>=2)
    {
        count++;
    }
}
cout << count;

return 0;
}