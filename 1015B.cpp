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
	int n;
	cin >> n;
	vector<int>v;
	string s,t,p,q;
	cin >> s >> t;
	p=s;
	q=t;
	sort(p.begin(),p.end());
	sort(q.begin(),q.end());
	//cout << s << " " << t << endl;
	if(p != q)
	{
		cout << -1 << endl;
		exit(0);
	}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			//cout << t[i] << " " << s[i] << endl;
			if(t[i] !=s[i])
			for (int j = n-1; j>i; --j)
			{
				if(s[j]==t[i])
				{
					for (int k = j; k>i; --k)
					{
						swap(s[k],s[k-1]);
						v.push_back(k);
					}
					break;
				}
			}
		  //  cout << t[i] << " " << s[i] << endl;
		}
		//cout << s << endl;
		//cout << t << endl;
		cout << v.size() << endl;
		for (int i = 0; i < v.size(); ++i)
		{
			cout << v[i] <<" ";
		}
		cout << endl;

	}

}