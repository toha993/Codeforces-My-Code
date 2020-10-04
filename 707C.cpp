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
 	long long n;
 	cin >> n;
 	if(n==1 || n==2)
 	{
 		cout << -1 << endl;
 		exit(0);
 	}
 	if(n&1)
 	{
 		n /=2;
 		cout << 2*n*n+2*n << " " << 2*n*n+2*n+1 << endl;
 	}
 	else
 	{
 		n /=2;
 		cout << n*n-1 << " " << n*n+1 << endl;
 	}
}