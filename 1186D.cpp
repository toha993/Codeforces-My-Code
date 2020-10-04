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

float a[100005];
int main()
{
	int t;
	cin >> t;
	int neg=0,pos=0;
	for (int i = 0; i < t; ++i)
	{
		cin >> a[i];
		if(a[i]<0)
			neg +=abs((int)a[i]);
		else
			pos +=abs((int)a[i]);
	}
	//cout << neg << " " << pos << endl;
	if(neg==pos)
	{
		for (int i = 0; i < t; ++i)
		{
			cout << (int)a[i] << endl;
		}
		//cout << endl;
	}
	else if(neg>pos)
	{
		int dif=neg-pos;
		for (int i = 0; i < t; ++i)
		{
			if(a[i]>=0 && a[i]-(int)a[i]>0.00000 && dif>0)
			{
				//cout << a[i]-(int)a[i] << endl;
				cout << (int)a[i]+1 << endl;
				dif--;
			}
			else if(dif==0 && a[i]>=0)
			{
				cout << (int)a[i] << endl;
			}
			else
				cout << (int)a[i] << endl;
		}
	}
	else
	{
		int dif=pos-neg;
		for (int i = 0; i < t; ++i)
		{
			if(a[i]<=0 && abs(a[i])-abs((int)a[i])>0 && dif>0)
			{
				cout  << (int)a[i]-1 << endl;
				dif--;
			}
			else if(dif==0 && a[i]<0)
			{
				cout << (int)a[i] << endl;
			}
			else
				cout << (int)a[i] << endl;
		}
	}
}