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
    	int x=0,y=0,temp1=0,temp2=0,sum=0;
    	vector<int> a(n);
    	for (int i = 0; i < n; ++i)
		{
    	    cin >> a[i];
    	}  	
    	sort(a.begin(), a.end());
    	temp1=a[n-1];
    	temp2=a[n-2];
    	x=n-3;
    	y=n-1;
    	do
    	{
    		if(temp1<=temp2)
    		{
    			sum=sum+temp1;
    			temp2=temp2-temp1;
    			temp1=a[x--];
			}
			else
			{
				sum=sum+temp2;
    			temp1=temp1-temp2;
    			temp2=a[x--];
			}	
		}
		while(y--);
		cout<<sum<<endl;
    	
	}
}
