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


int main()
{
	int n;
	cin >> n;
	vector<int>v[100005];
	int ck=0;
	int ab[n];
	map<int,int>cnt;
	for (int i = 0; i < n-2; ++i)
	{
		int a,b,c;
		cin >> a >> b >> c;
		v[a].push_back(b);
		v[a].push_back(c);
		v[b].push_back(a);
		v[b].push_back(c);
		v[c].push_back(a);
		v[c].push_back(b);
		cnt[a]++;
		cnt[b]++;
		cnt[c]++;

	}
	int start=0,end=0;
	for (auto i : cnt)
	{
		if(i.second==1)
		{
			start=i.first;
			break;
		}
	}
	ab[0]=start;
	if(cnt[v[start][0]]==2)
		ab[1]=v[start][0];
	else
		ab[1]=v[start][1];
	end=ab[1];
	int visited[100005]={0};
	visited[ab[0]]=visited[ab[1]]=1;
	int xd=2;
	for (int i = 0; i < n-2; ++i)
	{
		int ans;
		for (int j = 0; j <v[start].size(); ++j)
		{
			if(!visited[v[start][j]])
			{
				ans=v[start][j];
				break;
			}
		}
		ab[xd++]=ans;
		visited[ans]=1;
		start=end;
		end=ans;
	}
	for (int i = 0; i <n; ++i)
	{
		cout << ab[i] << " " ;
	}
	cout << endl;
}