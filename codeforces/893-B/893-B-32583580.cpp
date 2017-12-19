#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define vi vector<int>
#define vlli vector<long long int>

int main() 
{
    #ifndef ONLINE_JUDGE
      // for getting input from input.txt
      freopen("input.txt", "r", stdin);
      // for writing output to output.txt
      freopen("output.txt", "w", stdout);
  #endif
    
int arr[10] = {1,6,28,120,496,2016,8128,32640,130816,523776};
int n;
cin >> n;
int flag=1;
for(int i=9;i>=0&&flag;i--)
{
   if(n%arr[i]==0)
   {
    cout << arr[i];
    flag=0;
   } 
}

    return 0;


}