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


int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	while(n--)
	{
		long long p;
		cin >> p;
		int ck=0,flag=0;
		if(p==1)
		{
			cout << 0 << endl;
			continue;
		}
		if(p%2==1 && p%3!=0 && p%5 != 0)
		{
			cout << -1 << endl;
			continue;
		}
		while(p !=1)
		{
			while(p%2==0)
			{
				p /=2;
				ck++;
			}
			while(p%3==0)
			{
				p=(2*p)/3;
				ck++;
			}
			while(p%2==0)
			{
				p /=2;
				ck++;
			}
			while(p%5==0)
			{
				p=(4*p)/5;
				ck++;
			}
			while(p%2==0)
			{
				p /=2;
				ck++;
			}
			if(p==1)
				break;
			if(p%2!=0 && p%3!=0 && p%5!=0)
			{
				cout << -1 << endl;
				flag=1;
				break;
			}
		}
		if(!flag)
		cout << ck << endl;



	}
	return 0;
}