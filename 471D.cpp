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
//kmp copy

int a[200005],b[200005],c[200005],e[200005];

void findPrefix(string pattern, int m, int prefArray[]) {
   int length = 0;
   prefArray[0] = 0;     //first place is always 0 as no prefix

   for(int i = 1; i<m; i++) {
      if(pattern[i] == pattern[length]) {
         length++;
         prefArray[i] = length;    
      }else {
         if(length != 0) {
            length = prefArray[length - 1];
            i--;     //decrease i to avoid effect of increasing after iteration
         }else
            prefArray[i] = 0;
      }
   }
}

void kmpPattSearch(string mainString, string pattern, int *locArray, int &loc) {
   int n, m, i = 0, j = 0;
   n = mainString.size();
   m = pattern.size();
   int prefixArray[m];    //prefix array as same size of pattern
   findPrefix(pattern, m, prefixArray);
   loc = 0;

   while(i < n) {
      if(mainString[i] == pattern[j]) {
         i++; j++;
      }

      if(j == m) {
         locArray[loc] = i-j;      //item found at i-j position.
         loc++;
         j = prefixArray[j-1];    //get the prefix length from array
      }else if(i < n && pattern[j] != mainString[i]) {
         if(j != 0)
            j = prefixArray[j-1];
         else
            i++;
      }
   }
}
int main()
{
	int n,m;
	cin >> n >> m;
	string s,p;
	cin >> a[0];
	for (int i = 1; i < n; ++i)
	{
		cin >> a[i];
		b[i]=a[i]-a[i-1];
		//cout << b[i] << endl;
		s +=to_string(b[i]);
		s +=" ";
	}
	//cout << s << endl;
	cin >> e[0];
	int cd=0;
	for (int i = 1; i < m; ++i)
	{
		cin >> e[i];
		c[i]=e[i]-e[i-1];
		if(c[i]<0)
		{
			cd++;
		}
		p +=to_string(c[i]);
		p +=" ";
	}
	if(m==1)
	{
		cout << n << endl;
		return 0;
	}
	int locationArray[s.length()];
  	int index;
  	//cout << s << " " << p  << endl;
  	kmpPattSearch(s,p,locationArray,index);
	cout << index << endl;
}