#include<bits/stdc++.h>
using namespace std;
char bal[100005];
int main()
{
  int a,cp=0,ck=0,cn=0,total=0,ans=0;
  cin >> a;
  for(int i=0;i<a;i++)
  {
    cin >> bal[i];
  if(bal[i]== 'G')
      {
        ck++;
        total++;
      }
   else
      {
        
        cp=ck;
        ck=0;
       } 

       ans=max(ans,ck+cp+1);
  }
  //cout << ans << " " << total << endl;
  cout << min (ans,total) << endl;










}