#include <bits/stdc++.h>
using namespace std;


int main() {

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
        #endif

double n;
cin >> n;
double sum=0,x;
for(int i=0;i<n;i++)
{
    cin >> x;
    sum+=x;
}
cout << setprecision(6) << fixed << sum/n;

    return 0;
}