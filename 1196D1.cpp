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
		// string s1,s2,s3;
		// s1="RGB";
		// s2="GBR";
		// s3="BRG";
		int n,k;
		int mn1=1e9,mn2=1e9,mn3=1e9;
		cin >> n >> k;
		
		// if(k%3==0)
		// {
		// 	int x=k/3;
		// 	for (int i = 1; i < x; ++i)
		// 	{
		// 		s1 +=s1;
		// 		s2 +=s2;
		// 		s3 +=s3;
		// 	}
		// }
		// else
		// {
		// 	if(k>3)
		// 	{
		// 		int x=k/3;
		// 		for (int i = 1; i < x; ++i)
		// 		{
		// 			s1 +=s1;
		// 			s2 +=s2;
		// 			s3 +=s3;
		// 		}	
		// 		int p=k%3;
		// 		s1 +=s1.substr(0,p);
		// 		s2 +=s2.substr(0,p);
		// 		s3 +=s3.substr(0,p);
		// 	}
		// 	if(k==2)
		// 	{
		// 		int p=2;
		// 		s1 =s1.substr(0,p);
		// 		s2 =s2.substr(0,p);
		// 		s3 =s3.substr(0,p);
		// 	}

		// }
		//cout << s1 << " " << s2 << " " << s3 << endl;
		string s;
		cin >> s;
		if(k==1)
		{
			cout << 0 << endl;
			continue;
		}
		for (int i = 0; i <= s.length()-k; ++i)
		{
			int ca=0,cb=0,cc=0,cd=0,ce=0,cf=0;
			for (int j = 0; j <k; ++j)
			{
				if(j%3==0)
				{
					if(s[i+j] !='R')
					{
						ca++;
					}
					if(s[i+j] != 'G')
					{
						cb++;
					}
					if(s[i+j] != 'B')
					{
						cc++;
					}
				}
				else if(j%3==1)
				{
					if(s[i+j] != 'G')
					{
						ca++;
					}
					if(s[i+j] != 'B')
					{
						cb++;
					}
					if(s[i+j] != 'R')
					{
						cc++;
					}
				}
				else
				{
					if(s[i+j] != 'B')
					{
						ca++;
					}
					if(s[i+j] != 'R')
					{
						cb++;
					}
					if(s[i+j] != 'G')
					{
						cc++;
					}
				}
			}
			mn1=min(ca,mn1);
			mn2=min(cb,mn2);
			mn3=min(cc,mn3);
		}
		cout << min(mn1,min(mn2,mn3)) << endl;

	}
}