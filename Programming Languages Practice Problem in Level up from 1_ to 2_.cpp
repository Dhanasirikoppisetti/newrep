#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	        int a1,a2,b1,b2;
	        cin>>a1>>a2>>b1>>b2;
	        if(a==a1 && b==a2 || a==a2 && b==a1)
	        {
	            cout<<"1"<<endl;
	        }
	        else if(a==b1 && b==b2 || a==b2 && b==b1)
	        {
	            cout<<"2"<<endl;
	        }
	        else
	        {
	            cout<<"0"<<endl;
	        }
	}
}

