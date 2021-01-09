#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	vector<int> a(n);
    	int x=n,y=0;
    	for (int i = 0; i < n; i++)
		{
    	    cin >> a[i];
    	    a[i]=x-a[i]+1;
    	}
		for (int i = 0; i < n; i++)
		{
    	    cout<<a[i]<<"  ";
    	}
    	cout<<endl;
	}
}
