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
		int a[n];
		int sum=0,cp=0,ck=0;
		for (int i = 0; i < n; ++i)
		{
			cin >>a[i];
			if(a[i])
				ck++;
			else
				cp++;	
		}
		if(cp>= n/2)
		{
			cout << n/2 << endl;
			for (int i = 0; i < n/2; ++i)
			{
				cout << 0 << " ";
			}
			cout <<endl;
		}
		else
		{
			if(ck&1)
			{
				cout << ck-1 << endl;
				int flag=0;
				for (int i = 0; i < n; ++i)
				{
					if(a[i]==1 && !flag)
						flag=1;
					else if(a[i]==1)
						cout << a[i] << " ";
				}
				cout << endl;

			}
			else
				{
					cout << ck << endl;
					for (int i = 0; i < n; ++i)
					{
						
						if(a[i]==1)
							cout << a[i] << " ";
					}
					cout << endl;
			}

			
		}
	}
	
}