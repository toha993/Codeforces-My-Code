#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>>v;
    for (int i=1;i<=n;i++) {
        int x;
        cin >> x;
        v.push_back({x,i});
    }
   // map<int,int>mp;
    vector<int>xd;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    long long ck=1,ans=0;
    for (int i=0;i<n;i++) {
      // mp[v[i].second]=ck++;
      xd.push_back(v[i].second);
      ck++;
        ans +=(v[i].first*(ck-2)+1);
    }
    cout << ans << endl;
    for (auto i : xd) {
        cout << i << " ";
    }
    cout << endl;
}