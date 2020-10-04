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

int a[500005];
int arr[]={4,8,15,16,23,42};
int main()
{
	int n;
	cin >> n;
	int cp=0,ck=0,cn=0,cg=0,cd=0,cc=0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if(a[i]==arr[0])
		{
			ck++;
		//	cout << ck << endl;
		}
		else if(a[i]==arr[1])
		{
			if(ck>=1 && cn<ck)
				cn++;
			//cout << cn << endl;
		}
		else if(a[i]==arr[2])
		{
			if(cn>=1 && cp < cn)
				cp++;
			//cout << cp << endl;
		}
		else if(a[i]==arr[3])
		{
			if(cp>=1 && cd<cp)
				cd++;
		//	cout << cd << endl;
		}
		else if(a[i]==arr[4])
		{
			if(cd>=1 && cg<cd)
				cg++;
			//cout << cg << endl;
		}
		else if(a[i]==arr[5])
		{
			if(cg>=1 && cc < cg)
				cc++;
		//	cout << cc << endl;
		}
	}

	cout << n-(cc*6) << endl;
}