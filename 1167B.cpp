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

int a[5];
int main()
{
	int s[6]={4,8,15,16,23,42};
	for (int i = 0; i < 4; ++i)
	{
		cout <<"?" << " " <<  i+1 << " " << i+2 << endl;
		fflush(stdout);
		cin >> a[i];
	}
	int ssh=0;
	for (int i = 0; i < 4; ++i,ssh=i)
	{
		if(a[i] !=s[i]*s[i+1])
		{
			break;
		}

	}
	if(ssh==4)
	{
		cout << "!" << " ";
		for (int i = 0; i < 5; ++i)
		{
			cout << s[i] << " ";
		}
		cout << s[5] << endl;
		return 0;
	}
	while(next_permutation(s,s+6))
	{
		for (int i = 0; i < 4; ++i,ssh=i)
		{
			if(a[i] !=s[i]*s[i+1])
			{
				break;
			}

		}
		if(ssh==4)
			break;
	}
	cout << "!" << " ";
	for (int i = 0; i < 5; ++i)
		{
			cout << s[i] << " ";
		}
		cout << s[5] << endl;

}