#include<bits/stdc++.h>
using namespace std;
long int bal[100005];
int main()
{
  long int a,b,i,j,p,cp=0,sum=0;
  cin >> a >> b;
  for(long int i=0;i<a;i++)
  {
    cin >> bal[i];
  }
  sort(bal,bal+a);
  for(j=0;j<a;j++)
  {
    if(bal[j] > 0)
    {
      p=bal[j];
      break;
    }
    if(bal[a-1]==0)
        {
            cp=1;
            break;
        }
  }
  while(b--)
  {
      sum +=p;
    //   //cout << sum << endl << endl;
      if(cp==1)
        {
            cout << "0" << endl;
            continue;
        }
      else
         cout << p << endl;
      i=j+1;
      if(i >=a)
        i=a-1;
      for(;i<a;i++)
        {
            if(bal[a-1]-sum<=0)
                {
                    cp=1;
                    break;
                }
            else if(bal[i]-sum >0)
            {
                //cout << i << " " << bal[i] << endl;
                bal[i] =bal[i]-sum;
                //cout << i << " " << bal[i] << endl;
                p=bal[i];
                j=i;
                break;
            }
        }
      
  }
  

}