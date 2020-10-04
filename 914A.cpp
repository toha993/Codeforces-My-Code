#include<bits/stdc++.h>
using namespace std;
int ara[10005];
int main()
{
	int a;
	cin >> a;
	for(int i=0;i<a;i++)
		cin >> ara[i];
	sort(ara,ara+a);
	for(int i=a-1;i>=0;i--)
	{
		float p;
		if(ara[i]<0)
		    {
		        cout << ara[i] << endl;
		        break;
		      }
		 p=sqrt(ara[i]);
		p *=1000000;
		if((int)p%1000000==0)
			continue;
		else
		{
			cout << ara[i] << endl;
			break;
		}





	}












}