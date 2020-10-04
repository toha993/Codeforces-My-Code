#include<bits/stdc++.h>
using namespace std;
int ab[105];
int main()
{
  int a,ck=0;
  cin >> a;
  for(int i=0;i<a;i++)
  {
      cin >> ab[i];
  }
  for(int i=1;i<a;)
  {
  if(ab[i-1]==1 && ab[i] ==0 && ab[i+1] ==1)
      {

          ck++;
          i=i+3;
      }
      else
      i++;
  }
  cout << ck << endl;

}