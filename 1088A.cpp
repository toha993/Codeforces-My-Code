#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,cp=0;
  cin >> a;
  if(a==1)
    cout << "-1" << endl;
  else if(a==2)
    cout << a << " " << a << endl;
  else if(a%2==0)
  {
   cout << a-1 << " " << a-1 << endl;
  }
  else if(a%2 !=0)
  {
    cout << a-1 << " " << "2" << endl;
  }
}