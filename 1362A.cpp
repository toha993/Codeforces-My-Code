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
map<long long,int>visited;
long long a,b;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{

		cin >> a >> b;
		int ck=0;
		if(a>b)
		{
			if(a%b)
			{
				cout << -1 << endl;
			}
			else
			{
				long long x=a/b;
				while(x%8==0)
				{
					x /=8;
					ck++;
				}
				while(x%4==0)
				{
					x /=4;
					ck++;
				}
				while(x%2==0)
				{
					x /=2;
					ck++;
				}
				if(x!=1)
				{
					cout << -1 << endl;
				}
				else
					cout << ck << endl;
			}
		}
		else if(a<b)
		{
			if(b%a)
			{
				cout << -1 << endl;
			}
			else
			{
				long long x=b/a;
				while(x%8==0)
				{
					x /=8;
					ck++;
				}
				while(x%4==0)
				{
					x /=4;
					ck++;
				}
				while(x%2==0)
				{
					x /=2;
					ck++;
				}
				if(x!=1)
				{
					cout << -1 << endl;
				}
				else
					cout << ck << endl;
			}
			
		
		}
		else
			cout << 0 << endl;

		

	}
}