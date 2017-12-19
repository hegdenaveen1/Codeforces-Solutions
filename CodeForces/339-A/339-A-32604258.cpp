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
vector<int> v;
int x;
for(int i=0;i<l;i++)
{
    if(s[i]!='+')
    {   
        x=(int)(s[i]-'0');
        v.push_back(x);
    }
}
sort(v.begin(),v.end());
int lv=v.size();
for(int i=0;i<lv-1;i++)
{
    cout << v[i] << "+";
}
cout << v[lv-1];
    return 0;

}