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
	int len,sum;
	cin >> len >> sum;
	if(sum==0 && len==1)
	{
		cout << 0 << " " << 0 << endl;
		exit(0);
	}
	if(len*9<sum || sum==0)
	{
		cout << -1 << " " << -1 << endl;
		exit(0);
	}
	string s,p;
	for (int i = 0; i <len; ++i)
	{
		if(sum>9)
		{
			s +='9';
			sum -=9;
		}
		else if(sum>1 && sum<=9)
		{
			if(i+1==len)
			{
				int x=sum;
				s +=(x+'0');
				sum -=x;
			}
			else
			{
				int x=sum-1;
				s +=(x+'0');
				sum -=x;
			}
		}
		else if(sum==1)
		{
			if(i+1==len)
			{
				s +='1';
			}
			else
			{

				s +='0';
			}
		}
	}
	p=s;

	int flag=0;
	for (int i =0; i <s.length(); ++i)
	{
		if(flag)
		{
			s[i]='0';
			continue;
		}
		if(s[i]!='9')
		{
			if(s[s.length()-1]=='1' && i+1 !=s.length())
			{
				int x=(s[i]-48);
				s[i]=(x+1+'0');
				flag=1;

			}
		}
	}
	reverse(p.begin(),p.end());
	if(p[0]!='0')
	{
		cout  << p << " " << s << endl;
	}
	else
		cout << s << " " << endl;
}