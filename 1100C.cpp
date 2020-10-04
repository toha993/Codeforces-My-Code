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
#define pi 3.1415926
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	int n,r;
	cin >> n >> r;
	double angle;
	angle =(180.0/(double)n);
	//cout << angle << endl;
	angle =sin(angle*pi/180);
	//cout << angle << endl;
	double gg=(r*angle);
	gg /=(1-angle);
	printf("%.8lf\n",gg );
}