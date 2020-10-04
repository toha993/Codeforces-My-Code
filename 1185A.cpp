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
	ll a,b,c,d;
	cin >> a >> b >> c >> d;
	ll ans=0;
	if(a>b)
		swap(a,b);
	if(b>c)
		swap(b,c);
	if(a>b)
		swap(a,b);
	//cout << a << b << c << endl;
	if(b-a<d)
		ans +=d-(b-a);
	if(c-b<d)
		ans +=d-(c-b);
	cout << ans << endl;
}