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
int g;
void func(char c)
{
	char p=c;
	for (int i = 0; i<g ; ++i)
	{
		cout <<p;
	}
}
int main()
{
	string s;
	long long n;
	cin >> n;
	int a[11]={1,1,1,1,1,1,1,1,1,1};
	int ck=1;
	long long sum=1;
	for (int i = 0; i < 10; ++i)
	{
		sum /=a[i];
		a[i]=ck;
		sum *=ck;
		if(sum>=n)
			break;
		if(i==9)
			ck++,i=-1;
	}
	for (int i = 0; i < a[0]; ++i)
	{
		cout << "c";
	}
	for (int i = 0; i < a[1]; ++i)
	{
		cout << "o";
	}
	for (int i = 0; i < a[2]; ++i)
	{
		cout << "d";
	}
	for (int i = 0; i < a[3]; ++i)
	{
		cout << "e";
	}
	for (int i = 0; i < a[4]; ++i)
	{
		cout << "f";
	}
	for (int i = 0; i < a[5]; ++i)
	{
		cout << "o";
	}
	for (int i = 0; i < a[6]; ++i)
	{
		cout << "r";
	}
	for (int i = 0; i < a[7]; ++i)
	{
		cout << "c";
	}
	for (int i = 0; i < a[8]; ++i)
	{
		cout << "e";
	}
	for (int i = 0; i < a[9]; ++i)
	{
		cout << "s";
	}
	cout << endl;

}