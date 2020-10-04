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
	int a,b;
	cin >> a >> b;
	int ck1=0,ck2=0,ck3=0,ck4=0,ck5=0,ck6=0,flag=0;
	if(a==b)
	{
		cout << 0 << endl;
		exit(0);
	}
		while(a%2==0)
		{
			ck1++;
			a /=2;
		}
		while(a%3==0)
		{
			ck2++;
			a /=3;
		}
		while(a%5==0)
		{
			ck3++;
			a /=5;
		}
		while(b%2==0)
		{
			b /=2;
			ck4++;
		}
		while(b%3==0)
		{
				b /=3;
				ck5++;
		}
		while(b%5==0)
		{
				b /=5;
				ck6++;
		}
		if(a!=b)
		{
			cout << -1 << endl;
			exit(0);
		}
		cout << abs(ck1-ck4)+abs(ck2-ck5)+abs(ck3-ck6) << endl;
}