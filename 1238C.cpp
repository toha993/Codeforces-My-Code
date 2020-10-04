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
	int q;
	cin >> q;
	while(q--)
	{
		int n,m;
		cin >> n >> m;
		int a[m+5];
		for (int i = 1; i <= m; ++i)
		{
			cin >> a[i];
		}
		a[m+1]=0;
		int cp=0;
		for (int i=2; i <= m; ++i)
		{
			if(a[i]-1==a[i+1])
				i++;
			else
				cp++;
		}
		cout << cp << endl;
	}
}