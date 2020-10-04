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
vector<int>prime;
int isprime[1001];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void sieve()
{
	prime.push_back(2);
	for (int i = 4; i < 1001; i +=2)
	{
		isprime[i]=1;
	}
	for (int i = 3; i*i <=1001; i +=2)
	{
		if(!isprime[i])
		{
			for (int j =i*i; j < 1001; j +=i)
			{
				isprime[j]=1;
			}
		}
	}
	for (int i = 3; i < 1001; i +=2)
	{
		if(!isprime[i])
			prime.push_back(i);
	}
}

int main()
{
	int n,c,ck=0;
	sieve();
	cin >> n >> c;
	for (int i = 0; i <prime.size(); ++i)
	{
		int xd=prime[i]+prime[i+1]+1;
		//cout << xd << endl;
		if(xd>n)
			break;
		if(!isprime[xd])
			{
				ck++;
			}
	}
	if(ck>=c)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

}