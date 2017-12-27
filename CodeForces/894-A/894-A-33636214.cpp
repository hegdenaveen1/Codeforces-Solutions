#include<bits/stdc++.h>
using namespace std;



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
    int count=0;

    for(int i=0;i<l;i++)
    {
      if(s[i]=='Q')
      {
        for(int j=i+1;j<l;j++)
        {
          if(s[j]=='A')
          {
            for(int k=j+1;k<l;k++)
            {
              if(s[k]=='Q')
                count++;
            }
          }
        }
      }
    }
    cout << count;
    return 0;
}