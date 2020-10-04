#include<bits/stdc++.h> 
using namespace std;
int bal[200005],mew[200005];
int main()
{
  int a,d,p,ck=0,cn=0;
  cin >> a;
  for(int i=1;i<=a;i++)
  {
    cin >> d;
    bal[d]=i;

  }
  for(int j=1;j<=a;j++)
  {
    cin >>p;
    if(bal[p]<ck)
      mew[j]=0;
    else
    {
      bal[p] -=ck;
      mew[j]=bal[p];
      //cn=mew[j];
      ck +=mew[j];



    }



  }
  for(int j=1;j<=a;j++)
  {
    cout << mew[j] << " " ;
  }
  cout << endl;













}