#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{


   #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
  #endif

      string s;
      cin >> s;
      int l=s.length();
      if((int)(s[l-1]-'0')<=5)
      {
        for(int i=0;i<l-1;i++)
          {cout << s[i]; }
          cout << "0";
          return 0;
      }
      else
      {
        stringstream ss(s);
        ll x;
        ss >> x;
        x=x/10;
        x++;
        cout << x << "0";
          return 0;
      }

    return 0;
}