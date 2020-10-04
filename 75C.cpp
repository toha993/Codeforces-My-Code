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
	int a,b;
	cin >> a >> b;
	long long xd=__gcd(a,b);
	//cout << xd << endl;
	vector<long long>v;
	for (int i = 1;i<= sqrt(xd);++i)
	{
		if(xd%i==0)
		{
			if(xd/i==i)
			{
				v.push_back(i);
			}
			else
			{
				v.push_back(i);
				v.push_back(xd/i);
			}
		}
	}
	sort(v.begin(),v.end());
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	cout << v[i] << endl;
	// }
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int p,q;
		cin >> p >> q;
		int gg=upper_bound(v.begin(), v.end(),q)-v.begin();
		gg--;
		if(gg<0 || v[gg]<p)
		{
			cout << -1 << endl;
		}
		else
			cout << v[gg] << endl;
		//cout << gg << endl
		// long long flag=0,ans;
		// int low=0,high=v.size();	
		// while(low<=high)
		// {
		// 	int mid=(low+high)/2;
		// 	//cout <<v[mid] << endl;
		// 	if((v[mid]<=q && v[mid+1]>q && v[mid]>=p) || (mid+1==v.size() && v[mid]<=q && v[mid]>=p))
		// 	{
		// 		ans=v[mid];
		// 		flag=1;
		// 		break;
		// 	}
		// 	if(v[mid]>q)
		// 	{
		// 		high=mid-1;
		// 	}
		// 	else
		// 	{
		// 		low=mid+1;
		// 	}
		// }
		// if(!flag)
		// {
		// 	cout << -1 << endl;
		// }
		// else
		// 	cout << ans << endl;
	}

}