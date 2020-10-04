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

int arr[21][21];
int main()
{
	int n;
	cin >> n;
	// int bijor=0;
	// if(n&1)
	// {
	// 	bijor=1;
	// }
	map<int,int>mp;
	vector<int>v;
	int x;
	for (int i = 0; i < n*n; ++i)
	{
		
		cin >> x;
		mp[x]++;
	}
	if(n==1)
	{
		cout << "YES" << endl;
		cout << x << endl;
		exit(0);
	}
	for (auto i : mp)
	{
		v.push_back(i.first);
	}
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	cout << v[i]  << " " << mp[v[i]]<< endl;
	// }
	//sort(v.begin(),v,end());
	for (int i = 0; i <(n+1)/2; ++i)
	{
		for (int j = 0; j <n/2; ++j)
		{
			
			int p=n-1-i;
			int q=n-1-j;
			//cout << i << " " << j << " " << p << " " << q << " " << v[k] << endl;
			for (int k = 0; k <v.size() ; ++k)
			{
			//	cout << i << " " << j << " " << p << " " << q << " " << v[k] << endl;
				if(i !=p && q !=j)
				{
					if(mp[v[k]]<4 && k !=v.size()-1)
					{
						continue;
					}
					else if(mp[v[k]]>=4)
					{
						//cout << i << " " << j << " " << p << " " << q << " " << v[k] << endl;
						arr[i][j]=v[k];
						arr[i][q]=v[k];
						arr[p][j]=v[k];
						arr[p][q]=v[k];
						mp[v[k]] -=4;
						break;
					}
					else
					{
						//cout << v[k] << " " << mp[v[k]] << endl;
						cout << "NO" << endl;
						exit(0);
					}

				}
				else if(i==p && i !=j)
				{
					if(mp[v[k]]<2 && k !=v.size()-1)
					{
						continue;
					}
					else if(mp[v[k]]>=2)
					{
						arr[i][j]=v[k];
						arr[i][q]=v[k];
						mp[v[k]] -=2;
						break;
					}
					else
					{
						//cout << v[k] << " " << mp[v[k]] << endl;
						cout << "NO" << endl;
						exit(0);
					}

				}
				else if(j==q && i !=j)
				{
					if(mp[v[k]]<2 && k !=v.size()-1)
					{
						continue;
					}
					else if(mp[v[k]]>=2)
					{
						arr[i][j]=v[k];
						arr[p][q]=v[k];
						mp[v[k]] -=2;
						break;
					}
					else
					{
						//cout << v[k] << " " << mp[v[k]] << endl;
						cout << "NO" << endl;
						exit(0);
					}

				}
				else if(i==j && p==q)
				{
					if(mp[v[k]]<1 && k !=v.size()-1)
					{
						continue;
					}
					else if(mp[v[k]]>=1)
					{
						arr[i][j]=v[k];
						//arr[p][q]=v[k];
						mp[v[k]] -=1;
						break;
					}
					else
					{
						//cout << v[k] << " " << mp[v[k]] << endl;
						cout << "NO" << endl;
						exit(0);
					}
				}
			}
			
		}
	}
	if(n&1)
	for (int i=0;i<(n+1)/2;i++)
	{
		for (int j=((n+1)/2)-1;;)
		{
			for (int k = 0; k <v.size() ; ++k)
			{
				int p=n-1-i;
				int q=n-1-j;
				if(i==p && i !=j)
				{
					if(mp[v[k]]<2 && k !=v.size()-1)
					{
						continue;
					}
					else if(mp[v[k]]>=2)
					{
						arr[i][j]=v[k];
						arr[i][q]=v[k];
						mp[v[k]] -=2;
						break;
					}
					else
					{
						//cout << v[k] << " " << mp[v[k]] << endl;
						cout << "NO" << endl;
						exit(0);
					}

				}
				else if(j==q && i !=j)
				{
					if(mp[v[k]]<2 && k !=v.size()-1)
					{
						continue;
					}
					else if(mp[v[k]]>=2)
					{
						arr[i][j]=v[k];
						arr[p][q]=v[k];
						mp[v[k]] -=2;
						break;
					}
					else
					{
						//cout << v[k] << " " << mp[v[k]] << endl;
						cout << "NO" << endl;
						exit(0);
					}

				}
				else if(i==j && p==q)
				{
					if(mp[v[k]]<1 && k !=v.size()-1)
					{
						continue;
					}
					else if(mp[v[k]]>=1)
					{
						arr[i][j]=v[k];
						//arr[p][q]=v[k];
						mp[v[k]] -=1;
						break;
					}
					else
					{
						//cout << v[k] << " " << mp[v[k]] << endl;
						cout << "NO" << endl;
						exit(0);
					}
				}
			}
			break;

		}
	}
	cout << "YES" << endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}