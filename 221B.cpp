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
vector<int>v;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void pathao(int n){
	for (int i = 1; i*i<=n ; ++i)
	{
		if(n%i==0)
		{
			v.push_back(i);
			if(n/i !=i)
			{
				v.push_back(n/i);
			}
		}
	}
}
int main()
{
	int n;
	cin >> n;
	pathao(n);
	string s;
	s=to_string(n);
	map<char,int>mp;
	for (int i = 0; i < s.length(); ++i)
	{
		mp[s[i]]=1;
	}
	int ck=0;
	for (int i = 0; i < v.size(); ++i)
	{
		s=to_string(v[i]);
		for (int i = 0; i <s.size(); ++i)
		{
			if(mp[s[i]]==1)
			{
				ck++;
				break;
			}
		}
	}
	cout << ck << endl;
}