#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
    int n;
    cin >> n;
    int cp=0,ck=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==1)
        {
            ck++;
        }
        else
            cp++;
    }
    if(cp==0 || ck==0)
    {
        for(int i=0;i<n;i++)
            cout << a[i] << " ";
        cout << endl;
        return 0;
    }
    else
    {
    	cout << "2";
    	cp--;
    	cout << " " << 1;
    	ck--;
    	while(cp--)
    	{
    		cout << " " << 2;
    	}
    	while(ck--)
    	{
    		cout << " " << 1;
    	}
    	cout << endl;
    }
    
    
    
}