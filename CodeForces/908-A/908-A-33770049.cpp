#include <bits/stdc++.h>

using namespace std;

#define ll long long

void scanvector(vector<int> &vec,int reqdsiz)
{
  for(int i=0;i<reqdsiz;i++)
  {
    cin >> vec[i];
  }
}

void printvector(vector<int> &v)
{
  int l=v.size();
  for(int i=0;i<l;i++)
  {
    cout << v[i] << " ";
  } 
}

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
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9')
      count++;
  }
  cout << count;
  return 0;
}