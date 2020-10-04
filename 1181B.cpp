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
string sum(string x,string y)
{
    //cout << x << " " << y << endl;
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    int len1=x.length();
    int len2=y.length();
    if(len1 > len2)
        swap(x,y);
    int i=0;
    string ans;
    ans +="";
    int cnt=0;
    while(i<x.length())
    {
       int sumg=((x[i]-48)+(y[i]-48)+cnt);
        ans +=(sumg%10 +'0');
        i++;
        cnt =sumg/10;
    }
   // cout << cnt << endl;
    while(i<y.length())
    {
        ans +=(((y[i]-48)+cnt)%10)+48;
        cnt =((y[i]-48)+cnt)/10;
        i++;
    }
    while(cnt>=1)
    {
        ans +=(cnt%10)+48;
        cnt =(cnt)/10;

    }
   reverse(ans.begin(),ans.end());
   // cout << ans<< endl;
    return ans;

}
string minimum(string sum1,string sum2)
{
    if(sum1=="")
        return sum2;
    if(sum2=="")
        return sum1;
    if(sum1.length()>sum2.length() && sum2[0] !='0')
    {
        return sum2;
    }
    else if(sum1.length()<sum2.length() && sum1[0] != '0')
    {
        return sum1;
    }
    else
    {
        if(sum1[0]=='0')
        {
            return sum2;
        }
        for (int i = 0; i < sum1.length(); ++i)
        {
            if(sum1[i]>sum2[i])
            {
                return sum2;
            }
            else if(sum1[i]<sum2[i])
            {
                return sum1;
            }
        }
        return sum1;
    }
}
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int mid=n/2;
    //string p,q; 
    string sum1,sum2; 
    while(s[mid]=='0')
        mid--;
   if(s[mid+1]!='0')
        sum1=minimum(sum(s.substr(0,mid),s.substr(mid,n-mid)),sum(s.substr(0,mid+1),s.substr(mid+1,n-mid+1)));
    else
        sum1=sum(s.substr(0,mid),s.substr(mid,n-mid));
    mid=n/2;
    while(s[mid]=='0')
        mid++;
    if(mid !=n)
    if(s[mid+1] !='0')
        sum2=minimum(sum(s.substr(0,mid),s.substr(mid,n-mid)),sum(s.substr(0,mid+1),s.substr(mid+1,n-mid+1)));
    else
        sum2=sum(s.substr(0,mid),s.substr(mid,n-mid));
    cout << minimum(sum1,sum2) << endl;

}