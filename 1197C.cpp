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
#define int long long
using namespace std;

//solven
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


main()
{
    int n,k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    vector<int>v;
    int ans=a[n-1]-a[0];
    for (int i = 1; i < n; ++i)
    {
        v.push_back(a[i]-a[i-1]);
    }
    sort(v.begin(),v.end(),greater<int>());
    for (int i =0; i <k-1; ++i)
    {
        ans -=v[i];
    }
    cout << ans << endl;
}