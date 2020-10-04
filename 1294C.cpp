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
//map<long long,int>mp;
//bool isprime[1000005];
long long p;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int fctr(int n)
{
	int ck=0;
	for(int i=2;i<=100005 && n>i;i++)
	{
		if(n%i==0 && n/i !=i)
		{
			if(ck==0)
			{
				ck++;
				v.push_back(i);
			}
			else
			{
				if(n/i<i)
				{
					break;
				}
				else
				{
					v.push_back(i);
					v.push_back(n/i);
					ck=3;
					break;
				}

			}
			n /=i;
		}
	}
	if(ck==3)
	{
		return 1;
	}
	else
		return -1;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(fctr(n)==-1)
		{
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
			for (int i = 0; i < v.size(); ++i)
			{
				cout << v[i] <<  " ";
			}
			cout << endl;
		}
		v.clear();

	}
}