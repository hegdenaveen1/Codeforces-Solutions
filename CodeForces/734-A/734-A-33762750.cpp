#include <bits/stdc++.h>
using namespace std;


int main()
{

      #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
  #endif
  
   int n;
   cin >> n;
   string s;
   cin >> s;
   int Acount=0,Dcount=0;
   for(int i=0;i<n;i++)
   {
    if(s[i]=='A')
      Acount++;
    else
      Dcount++;
   }
  if(Acount>Dcount)
    cout << "Anton";
  else if(Dcount>Acount)
    cout << "Danik";
  else
    cout << "Friendship";


   return 0;
}