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
		int n;
		cin >> n;
		// vector<vector<int>> b(26,vector<int>(n+1));
		vector<vector<int>> b(27, vector<int>(n + 5));
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			for (int j = 1; j <= 26; ++j)
			{

				b[j][i+1]=b[j][i];
			}
			b[x][i+1]++;
		}

		int ans=0;
		for (int i = 1; i < 27; ++i)
		{
				ans=max(ans,b[i][n-1]);
		}
		for (int i =0; i <n; ++i)
		{
			for (int j =i; j<n; ++j)
			{
				int blk=0,blk1=0;
				for (int k = 1; k < 27; ++k)
				{
					blk=max(blk,b[k][j+1]-b[k][i]);
					blk1=max(blk1,min(b[k][i],b[k][n]-b[k][j+1])*2);
				}
				ans=max(ans,blk+blk1);

			}
		}
		cout << ans << endl;
	}
}