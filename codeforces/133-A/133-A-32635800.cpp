#include<bits/stdc++.h>

using namespace std;

int main(){

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif


string s;
cin >> s;
int l=s.length();

for(int i=0;i<l;i++)
{
    if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {cout << "YES";return 0;}
}
cout << "NO";


return 0;
}