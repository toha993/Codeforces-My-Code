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
	int n,p;
	cin >> n >> p;
	map<int,int>mp;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		mp[x]++;
	}
	int k=p*8/n;
	int x=mp.size();
	//cout << mp.size() << endl;
	if((log2(x))<=k)
	{
		cout << 0 << endl;
		exit(0);
	}
	int ck=0;
	int arr[mp.size()+1];
	for(auto i : mp)
	{
		if(ck !=0)
			arr[ck]=arr[ck-1]+i.second;
		else
			arr[ck]=i.second;
		//cout << arr[ck] << " ";
		ck++;
	}
	int xd=(int)pow(2,k);
	int mx=1e9+5;
	for (int i = 0; i <ck-xd; ++i)
	{
		mx=min(mx,n-(arr[i+xd]-arr[i]));
	}
	cout << mx << endl;
}