#include<bits/stdc++.h>

using namespace std;

int main(){

        #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
int l;
cin >> l;
string s;
cin >> s;
int count=0;
for(int i=0;i<l-1;i++)
{
    if(s[i]==s[i+1])
        count++;
}
cout << count;
return 0;
}