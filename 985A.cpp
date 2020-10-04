#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a;
   cin >> a;
   int ase[150];
   int p=0;
   for(int i=0;i<(a+1)/2;i++)
   {
       cin >> ase[i];
   }
    sort(ase,ase+a/2);
   for(int i=0;i<(a+1)/2;i++)
   {
      if(ase[i] == 2*i+1 )
        continue;
      else
      {
          p+=abs((2*i+1)-ase[i]);
      }
      //cout << p << endl;
   }
   int m=0;
   for(int i=0;i<(a+1)/2;i++)
   {
       //cout << ase[i] << " ";
      if(ase[i] == 2*i+2 )
        continue;
      else
      {
          m+=abs((2*i+2)-ase[i]);
          //cout << m << endl;
      }
      //cout << m << endl;
   }
   if(p<m)
   cout << p << endl;
   else
    cout << m << endl;

}