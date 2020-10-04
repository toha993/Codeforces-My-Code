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
//fahim

int main()
{
	long long s,x,a;
	cin >> s >> x;
	a=(s-x)/2;
	if(a<0 || (s-x)%2 !=0)
	{
		cout << 0 << endl;
		exit(0);
	}
	int ck=0;
	long long ans=0,minus=1;
	for (int i = 0; i <60 ; ++i)
	{
		if(a&1 && x&1)
			cout << 0 << endl,exit(0);
		if(x&1 && !(a&1)) 
			ck++;
		if(a&1 && !(x&1))
			 minus=0;
		a /=2;
		x /=2;
	}
	if(minus)
		ans -=2;
	//cout << ck << endl;
	cout << (1ll<<ck)+ans << endl;

}