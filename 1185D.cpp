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
#define f first
#define sc second
using namespace std;
//solven
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int n;
int a[200005];
vector<pair<int,int>>v;
void chck(int p)
{
	//cout << p << endl;
	vector<int>vt;
	for (int i = 0; i < n; ++i)
	{
		if(i!=p)
			vt.push_back(v[i].f);
	}
	sort(vt.begin(),vt.end());
	for (int i = 1; i <vt.size(); ++i)
	{
		if(vt[i]-vt[i-1] != vt[1]-vt[0])
			return;
	}
	//cout << p << " " << v[p].sc << endl;
	cout << v[p].sc+1 << endl;
	exit(0);
}
int main()
{
	//int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		v.push_back({a[i],i});
	}
	if(n<=3)
		cout << 1 << endl,exit(0);
	sort(v.begin(),v.end());
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << v[i].f << " ";
	// }
	int d=v[1].f-v[0].f;
	for (int i = 1; i < n; ++i)
	{
		if(v[i].f-v[i-1].f !=d)
		{
			chck(i);
			break;
		}
	}
	chck(0);
	chck(1);
	//chck(n-1);
	cout << -1 << endl;

}