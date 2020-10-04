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
	int n;
	cin >> n;
	while(n--)
	{
		int k;
		cin >> k;
		int a[k+1];
		for (int i = 0; i < k; ++i)
		{
			cin >> a[i];
		}
		sort(a,a+k);
		 if(a[k-2]>k-2)
			cout << k-2 << endl;
		else
			cout << min(a[k-2]-1,k-3) << endl;
	}
}