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
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		int row[n]={0},col[m]={0};
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				int x;
				cin >> x;
				if(x==1)
					{
						row[i]=1;
						col[j]=1;
					}

			}
		}
		int ck=0,cp=0;
		for (int i = 0; i < n; ++i)
		{
			if(row[i]==0)
				ck++;
		}
		for (int i = 0; i < m;i++)
		{
			if(col[i]==0)
				cp++;
		}
		int xd=min(ck,cp);
		if(xd%2)
		{
			cout << "Ashish" << endl;
		}
		else
			cout << "Vivek" << endl;
	}
}