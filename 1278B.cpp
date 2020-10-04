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
		long long a,b;
		cin >> a >> b;
		int dif=abs(a-b);
		if(dif==0)
		{
			cout << 0 << endl;
			continue;

		}
		long long sum=0;
		for (long long i = 0;; ++i)
		{
			sum +=i;
			if(sum < dif)
				continue;
			if((sum+dif)%2)
				continue;
			cout << i << endl;
			break;
		}
	}
}