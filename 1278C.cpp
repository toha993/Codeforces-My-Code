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
//editorial

int main()
{
		int t;
		cin >> t;
		while(t--)
		{
			int n;
			cin >> n;
			int a[2*n+5];
			int cp=0,cd=0;
			for (int i = 0; i < 2*n; ++i)
			{
				cin >> a[i];
				if(a[i]==1)
					cp++;
				else
					cd++;
			}
			int dif=cp-cd;
			map<int,int>diff;
			diff[0]=0;
			int ck=0;
			for (int i = n; i < 2*n; ++i)
			{
				if(a[i]==1)
					ck++;
				else
					ck--;
				if(!diff.count(ck))
				{
					diff[ck]= i-(n-1);
				}
			}
			ck=0;
			int ans=2*n;
			for (int i = n-1; i >=0; --i)
			{
				if(a[i]==1)
					ck++;
				else
					ck--;
				if(diff.count(dif-ck))
				{
					ans=min(ans,n-i+diff[dif-ck]);
				}
			}
			if(diff.count(dif))
			{
				ans=min(ans,diff[dif]);
			}
			cout << ans << endl;
		}
}