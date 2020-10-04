#include <bits/stdc++.h>
int a[100005];
using namespace std;
int main() {
	int b,k,cn=0;
	cin >> b >> k;
	if(b%2==0)
	    cn=1;
	int cp=0,ck=0;
	for(int i=0;i<k;i++)
	    {
	        cin >> a[i];
	        if(a[i]%2 != 0 && i != k-1)
                cp++;
	    }
	 //cout << cn << " " << cp << endl;
	if(cn==0)    
    {    if(cp%2==0)
    	    {
    	        if(a[k-1]%2==0)
    	            cout << "even" << endl;
    	        else
    	            cout << "odd" << endl;
    	    }
    	  else
    	    {
    	        if(a[k-1]%2==0)
    	            cout << "odd" << endl;
    	        else
    	            cout << "even" << endl;
    	    }
    	     
	 }
	 else
	 {
	            if(a[k-1]%2==0)
    	            cout << "even" << endl;
    	        else
    	            cout << "odd" << endl;
	     
	 }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}