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


int a[1000005];
int main()
{
	string s,p;
	cin >> s >> p;
	a[0]=0;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='1')
		{
			a[i+1]=a[i]+1;
		}
		else
			a[i+1]=a[i];
	}
	int ck=0;
	for (int i = 0; i < p.length(); ++i)
	{
		if(p[i]=='1')
			ck++;
	}
	int ans=0;
	int l=p.length();
	for (int i = 0; i <=s.length()-p.length(); ++i)
	{
		int gg=a[i+l]-a[i]+ck;
		if(gg%2==0)
			ans++;	
	}
	cout << ans << endl;


}