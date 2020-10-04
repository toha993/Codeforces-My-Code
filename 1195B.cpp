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
	ll a,z;
	cin >> a >> z;
	ll c=(a*(a+1))-(2*z);
	ll b=-(a+a+1+2);
	ll ans1,ans2;
	ans1=(-b+sqrt(b*b-4*c))/2;
	ans2=(-b-sqrt(b*b-4*c))/2;
	if(ans1<a)
	{
		cout << ans1 << endl;
	}
	else
	{
		cout << ans2 <<endl;
	}

}