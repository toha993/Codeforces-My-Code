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
#define ll long long 
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	ll ans=0;
	int n;
	cin >> n;
	int p;
	for (int i = 1;p<n;i +=2,p++)
	{
		ans +=i;
	}
	p=0;
	for (int i =(2*n-3);p<n-1;i -=2,p++)
	{
		ans +=i;
	}
	cout << ans << endl;

}