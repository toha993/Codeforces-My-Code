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
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int ck=0;
		vector<int>v;
		if(n/10000)
		{
			v.push_back((n/10000)*10000);
			n %=10000;
		}
		if(n/1000)
		{
			v.push_back((n/1000)*1000);
			n %=1000;
		}
		if(n/100)
		{
			v.push_back((n/100)*100);
			n %=100;
		}
		if(n/10)
		{
			v.push_back((n/10)*10);
			n %=10;
		}
		if(n%10)
		{
			v.push_back(n%10);
		}
		cout << v.size() << endl;
		for (int i = 0; i < v.size(); ++i)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
}