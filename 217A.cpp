#include<bits/stdc++.h>
using namespace std;
int parent[105];
void make_set(int v) {
    parent[v] = v;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}
int main()
{
    int n;
    cin >> n;
    pair<int,int>p[105];
    for(int i=0;i<n;i++)
    {
        cin >> p[i].first >> p[i].second;
        make_set(i);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(p[i].first==p[j].first || p[i].second==p[j].second)
            {
                union_sets(i,j);
            }
        }
    }
    set<int>st;
    for(int i=0;i<n;i++)
    {
        int p=find_set(i);
        st.insert(p);
    }
    cout<< st.size()-1 << endl;
}