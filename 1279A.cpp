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
		int a,b,c;
		cin >> a >> b >> c;
		if(a>=b && a>=c)
		{
			if(b+c>=a-1)
			{
				cout << "Yes" << endl;
			}
			else
				cout << "No" << endl; 
		}
		else if(a<=b && b>=c)
		{
			if(a+c>=b-1)
			{
				cout << "Yes" << endl;
			}
			else
				cout << "No" << endl; 
		}
		else if(a<=c && b<=c)
		{
			if(a+b>=c-1)
			{
				cout << "Yes" << endl;
			}
			else
				cout << "No" << endl; 
		}
	}
}