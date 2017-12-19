#include<bits/stdc++.h>

using namespace std;

bool isdistinct(int n)
{
    int a,b,c,d;
    a=n%10;
    n=n/10;
    b=n%10;n=n/10;
    c=n%10;n=n/10;
    d=n%10;n=n/10;
    if(a==b||a==c||a==d||b==c||b==d||c==d)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main(){

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif


int n;
cin >> n;
n++;
while(!isdistinct(n))
{
    n++;
}
cout << n;

return 0;
}