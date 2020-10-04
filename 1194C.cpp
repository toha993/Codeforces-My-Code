#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string a,final,xtra;
		cin >> a >> final >> xtra;
		map<char,int>mp,x,y;
		if(a==final)
		{
			cout << "YES" << endl;
			continue;
		}
		if(a.size()>final.size())
		{
			cout << "NO" << endl;
			continue;
		}
		if(a.size()==final.size() && a !=final)
		{
			cout << "NO" << endl;
			continue;
		}
		for (int i = 0; i <a.size() ; ++i)
		{
			x[a[i]]++;
		}
		for (int i = 0; i < final.size(); ++i)
		{
			y[final[i]]++;
		}
		if(x.size()>y.size())
		{
			cout << "NO" << endl;
			continue;
		}
		for (int i = 0; i <xtra.size(); ++i)
		{
			mp[xtra[i]]++;
		}
		int flag=0;
		int ck=0,cp=0;
		for (int i = 0; i <final.size(); ++i)
		{
			if(y[a[ck]]==0 && ck<a.size())
			{
				//cout << ck << endl;
				//cout << a[ck] << endl;
				flag=1;
				cout << "NO" << endl;
					break;
			}
			if(a[ck] != final[i])
			{
				if(mp[final[i]]==0)
				{
					flag=1;
					cout << "NO" << endl;
					break;
				}
				else
					mp[final[i]]--,cp++;
			}
			else
				ck++;
		}
		if(cp+a.size()>final.size())
		{
			cout << "NO" << endl;
			continue;
		}
		if(!flag)
		{
			cout << "YES" << endl;
		}

	}
}