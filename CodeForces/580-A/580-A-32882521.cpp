#include<bits/stdc++.h>

using namespace std;

bool isdivisible(int k,int l,int m, int n, int d)
{
    if(d%k==0||d%l==0||d%m==0||d%n==0)
        return true;
    else
        return false;
}

int main(){

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif

long long int x,y,n,count=1,max=1;
cin >> n;
cin >> y;
n--;
while(n--)
{
    cin >> x;
    if(x<y)
        count=1;
    else
        count++;
    max = max>count?max:count;
    y=x;
}
cout << max;
return 0;
}