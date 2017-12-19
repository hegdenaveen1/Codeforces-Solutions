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


int k,l,m,n,d;
cin >> k >> l >> m >> n >> d;
int count=0;
for(int i=1;i<=d;i++)
{
    if(isdivisible(k,l,m,n,i))
        count++;
}
cout << count;

return 0;
}