#include<bits/stdc++.h>


using namespace std;

#define ll long long


int main() {

   #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
  #endif

string s;
cin >> s;
if(s[0]>='b'&&s[0]<='g'&&s[1]>='2'&&s[1]<='7')
{
  cout << "8";
  return 0;
}
else if(s=="a1"||s=="a8"||s=="h1"||s=="h8")
{
  cout << "3";
  return 0;
}
else
{
  cout << "5";
  return 0;
}


return 0;
}