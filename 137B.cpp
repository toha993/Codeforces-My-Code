#include <bits/stdc++.h>
int a[5005],m[5005];
using namespace std;
int main() {
	int p;
	set<int> s;
	set<int> ::iterator i;
	cin >> p;
	for(int i=1;i<=p;i++)
	   {
	       cin >> a[i];
	       m[a[i]]++;
	       s.insert(a[i]);
	       //cout << a[i] << " " <<  m[a[i]] <<endl;
	   }
	//sort(a,a+p+1);
	int ck=0;
	for(i=s.begin();i!=s.end();i++)
	   {
	       if(m[*i]>1 && *i <=p)
	           ck+=(m[*i]-1);
	       else if(*i >p)
	            ck+=m[*i];
	       
	   }
	 cout << ck << endl;
}