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

//char a[50005][50005];
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int p,q;
		cin >> p >> q;
		int cntc[q+1]={0};
		int cntr[p+1]={0};
		char a[p][q];
		for (int i = 0; i <p; ++i)
		{
			for (int j = 0; j <q; ++j)
			{		
				cin >> a[i][j];
				if(a[i][j]=='.')
				{
					cntc[j]++;
					cntr[i]++;
				}
			}
		}
		int mn=1e9;
		for (int i = 0; i < p; ++i)
		{
			for (int j = 0; j < q; ++j)
			{
				if(cntr[i]+cntc[j]-(a[i][j] == '.')<mn)
				{
					mn=cntr[i]+cntc[j]-(a[i][j]=='.');
				}
			}
		}
		cout << mn << endl;
	}
}