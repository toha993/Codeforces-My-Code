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
	string s,p;
	cin >> s;
	if(s.size()>=2)
		p +=s[s.size()-2];
	p +=s[s.size()-1];
	stringstream ss(p);
	int x=0;
	ss >> x;
	int ans=0;
	if(x==0)
	{
		cout << 4 << endl;
	}
	else
	{
		int xd=x%4;
		if(xd==0)
			xd=4;
		cout << (1+(int)pow(2,xd)+(int)pow(3,xd)+(int)pow(4,xd))%5 << endl;
	}

}