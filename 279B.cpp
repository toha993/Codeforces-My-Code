#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
//	cout << n << " " << k << endl;
	//int p=k; 
	int cp=0,mx=0,ans=0;
	vector<int>v;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		if(ans+x<=k)
			{
				v.push_back(x);
				ans +=x;
			}
		else
		{
			int gg=v.size();
			mx=max(gg,mx);
			while(ans+x>k && v.size() > 0)
			{
					ans -=v[0];
					v.erase(v.begin());
			}
			if(x<=k)
			v.push_back(x),ans +=x;
		}
	}
	int gg=v.size();
	mx=max(gg,mx);
	cout << mx << endl;
}