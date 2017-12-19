#include <bits/stdc++.h>
using namespace std;

int mini(int x, int y, int z)
{
    if(x<=y)
    {
        if(x<=z)
            return x;
        else
            return z;
    }
    else
    {
        if(y<=z)
            return y;
        else
            return z;
    }
}


int main() {

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
        #endif

int  n, k, l, c, d, p, nl, np;
cin >> n >> k >> l >> c >> d >> p >> nl >> np;
cout << mini(   k*l/nl/n , c*d/n , p/np/n     );


    return 0;
}