#include<bits/stdc++.h>

using namespace std;


int main(){

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif


string s1,s2;
cin >> s1 >> s2;
int l=s1.length();
int x,y,z;
for(int i=0;i<l;i++)
{
    x = (int)(s1[i]-'0');

    y = (int)(s2[i]-'0');


    z=x^y;
    cout << z;
}

return 0;
}