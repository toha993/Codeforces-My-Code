#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int a[7],b[7],c[7];
int main()
{
	int n;
	cin >> n;
	map<int,int>mp;
	for (int i = 0; i < 6; ++i)
	{
		cin >>a[i];
		mp[a[i]]=1;
	}
	if(n>=2)
	for (int i = 0; i < 6; ++i)
	{
		cin >> b[i];
		mp[b[i]]=1;
	}
	if(n==3)
	for (int i = 0; i < 6; ++i)
	{
		cin >> c[i];
		mp[c[i]]=1;
	}
	if(n==2)
	{
		for (int i = 0; i < 6; ++i)
		{
			if(a[i] !=0)
			{	
				for(int j=0;j<6;j++)
				{
					int mx;
					mx=a[i]*10+b[j];
					mp[mx]=1;
				}
			}

		}
		for (int i = 0; i < 6; ++i)
		{
			if(b[i]!=0)
			{
				for(int j=0;j<6;j++)
				{
					int mx;
					mx=b[i]*10+a[j];
					mp[mx]=1;
				}
			}
		}
	}
	if(n==3)
	{
		for (int i = 0; i < 6; ++i)
		{
			if(a[i] !=0)
			{	
				for(int j=0;j<6;j++)
				{
					int mx;
					mx=a[i]*10+b[j];
					mp[mx]=1;
					mx=a[i]*10+c[j];
					mp[mx]=1;
				}
			}

		}
		for (int i = 0; i < 6; ++i)
		{
			if(b[i]!=0)
			{
				for(int j=0;j<6;j++)
				{
					int mx;
					mx=b[i]*10+a[j];
					mp[mx]=1;
					mx=b[i]*10+c[j];
					mp[mx]=1;

				}
			}
		}

		for (int i = 0; i < 6; ++i)
		{
			if(c[i]!=0)
			{
				for(int j=0;j<6;j++)
				{
					int mx;
					mx=c[i]*10+a[j];
					mp[mx]=1;
					mx=c[i]*10+b[j];
					mp[mx]=1;
				}
			}
		}
		for (int i = 0; i < 6; ++i)
		{
			if(c[i]!=0)
			{
				for(int j=0;j<6;j++)
				{
					for (int k = 0; k < 6; ++k)
					{
						int mx;
						mx=c[i]*100+a[j]*10+b[k];
						mp[mx]=1;
						mx=c[i]*100+b[j]*10+a[k];
						mp[mx]=1;
					}
				}
			}
		}
		for (int i = 0; i < 6; ++i)
		{
			if(a[i]!=0)
			{
				for(int j=0;j<6;j++)
				{
					for (int k = 0; k < 6; ++k)
					{
						int mx;
						mx=a[i]*100+c[j]*10+b[k];
						mp[mx]=1;
						mx=a[i]*100+b[j]*10+c[k];
						mp[mx]=1;
					}
				}
			}
		}
		for (int i = 0; i < 6; ++i)
		{
			if(b[i]!=0)
			{
				for(int j=0;j<6;j++)
				{
					for (int k = 0; k < 6; ++k)
					{
						int mx;
						mx=b[i]*100+a[j]*10+c[k];
						mp[mx]=1;
						mx=b[i]*100+c[j]*10+a[k];
						mp[mx]=1;
					}
				}
			}
		}

	}
	for (int i = 1; i <=999 ; ++i)
	{
		if(mp[i]==0)
		{
			cout << i-1 << endl;
			break;
		}
	}

}