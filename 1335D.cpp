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
string s[10];
void func(int i,int j)
{
	if(s[i][j]!='9')
		{
			s[i][j]=(s[i][j]-48+49);
			//cout << (s[i][j]-48+1) << endl;
		}
		else
		{
			s[i][j]=(char)(s[i][j]-48+40);
			//cout << s[i][j]-48 << endl;
		}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		
		for (int i = 0; i < 9; ++i)
		{
			cin >> s[i];
		}
		func(0,0);
		func(1,3);
		func(2,6);
		func(3,1);
		func(4,4);
		func(5,7);
		func(6,2);
		func(7,5);
		func(8,8);


		for (int i = 0; i < 9; ++i)
		{
			cout << s[i] << endl;
		}
	}
}