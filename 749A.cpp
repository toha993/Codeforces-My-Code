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
	if(n%2==0)
	{
		cout << n/2 << endl;
		for (int i = 0; i <(n/2)-1; ++i)
		{
			cout << "2" << " ";
		}
		cout << 2 << endl;
	}
	else
	{
		cout << (n/2) << endl;
		for (int i = 0; i <(n/2)-1; ++i)
		{
			cout << "2" << " ";
		}
		cout << 3 << endl;
	}
}