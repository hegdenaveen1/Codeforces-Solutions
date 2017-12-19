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
int flag=1;
for(int i=1;i<l&&flag;i++)
{
    if(islower(s[i]))
        {flag=0;}        
}


if(flag)
{
    for(int i=0;i<l;i++)
    {
        if(isupper(s[i]))
            s[i]=tolower(s[i]);
        else
            s[i]=toupper(s[i]);
    }
    cout << s;
}
else
{
    cout << s;
}

return 0;
}