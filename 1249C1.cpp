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
//solve
using namespace std;
vector<int>v,st;
//set<int>st;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int main()
{
	//pre();
	int t;
	cin >> t;
	while(t--)
	{
		int x;
		cin >> x;
		int pq=x;
		while(1)
		{
			int flag=0;
			//int pq=xd;
			pq=x;
			while(pq>0)
			{
				if(flag==0 && pq%3==2)
				{
					flag=1;
				}
				pq /=3;
			}
			if(!flag)
				break;
			x++;
		}
		cout << x << endl;
	}
	//cin >> n;

}