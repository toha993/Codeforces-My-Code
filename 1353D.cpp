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
		int a[n+1]={0},visited[n+1]={0};
		if(n==1)
		{
			cout << 1 << endl;
			continue;
		}
		else if(n==2)
		{
			cout << 1 << " " << 2 << endl;
			continue;
		}
		else if(n==3)
		{
			cout << 2 << " " << 1 << " " << 3 << endl;
			continue;
		}
		set<pair<int,pair<int,int>>>st;
		st.insert({n,{-1,-n}});
		// for (auto it : st)
		// {
		// 	cout << it.first << " " << it.second.first << " " << it.second.second << endl;
		// }
		int ck=0;
		while(!st.empty())
		{
		 	auto it=*--st.end();
		 	int p=it.second.first;
		 	int q=it.second.second;
		 	p *=-1;
		 	q *=-1;
		 	//cout << p << " "<< q << endl;
		 	// break;
		 	if((q-p+1)%2)
		 	{

		 		if(a[(q+p)/2]==0)
		 		{
		 			a[(q+p)/2]=++ck;
		 			//cout << (q+p)/2 << endl;
		 			if(p!=q)
		 			{
		 				st.insert({((q+p)/2)-p,{p*(-1),(((q+p)/2)-1)*(-1)}});
		 				st.insert({(q-(q+p)/2),{((q+p)/2+1)*(-1),q*(-1)}});
		 				//cout << ((q+p)/2)-p << " " << p << " " << ((q+p)/2) << endl;
		 				//cout << (q-(q+p)/2) << " " << ((q+p)/2) << " " << q << endl;
		 				// //break;
		 			}
		 		}

		 	}
		 	else
		 	{
		 		if(a[(p+q-1)/2]==0)
		 		{
		 			a[(p+q-1)/2]=++ck;
		 			//cout << (q+p-1)/2 << endl;
			 		if(p!=q)
			 			{
			 				st.insert({((q+p-1)/2)-p,{p*(-1),((q+p-1)/2-1)*(-1)}});
			 				st.insert({(q-(q+p-1)/2),{((q+p-1)/2+1)*(-1),q*(-1)}});
			 			}
			 	}
		 	}
		 	st.erase(it);
		 	
		}
		for (int i = 1; i <= n; ++i)
		{
			cout << a[i] << " ";
		}
		cout << endl;
		
	}
}