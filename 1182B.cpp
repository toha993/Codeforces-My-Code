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

char a[505][505];
int main()
{
	int ab,b;
	char c='*';
	cin >> ab >> b;
	int ck=0,posx,posy;
	for (int i = 0; i <ab; ++i)
	{
		for (int j = 0; j < b; ++j)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < ab; ++i)
	{
		for (int j = 0; j < b; ++j)
		{
			if(a[i][j]==c && a[i-1][j]==c && a[i+1][j]==c && a[i][j-1]==c && a[i][j+1]==c)
			{
				ck++;
				if(ck>1)
				{
					cout << "NO" << endl;
					exit(0);
				}
				posx=i;
				posy=j;
			}
		}
	}
	if(ck==0)
	{
		cout << "NO" << endl;
			exit(0);
	}
	a[posx][posy]=0;
	for (int i = posx+1,j=posy; i <ab ; ++i)
	{
		if(a[i][j]==c)
			a[i][j]=0;
		else
			break;
	}
	for (int i = posx-1,j=posy; i>=0 ; --i)
	{
		if(a[i][j]==c)
			a[i][j]=0;
		else
			break;
	}
	for (int j = posy+1,i=posx; j < b; ++j)
	{
		if(a[i][j]==c)
			a[i][j]=0;
		else
			break;
	}
	for (int j = posy-1,i=posx; j>=0; --j)
	{
		if(a[i][j]==c)
			a[i][j]=0;
		else
			break;
	}
	for (int i = 0; i < ab; ++i)
	{
		for (int j = 0; j < b; ++j)
		{
			if(a[i][j]==c)
			{
				//cout << i << " " << j << endl;
				cout << "NO" << endl;
					exit(0);

			}
		}
	}
	cout << "YES" << endl;

}