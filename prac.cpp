#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
    	long long x,y,k;
    	cin>>x>>y>>k;
    	long long total=((y*k)+k-1);
    	if(total%(x-1) > 0)
    	{
    		total=total/(x-1)+1;
		}
		else
		{
			total=total/(x-1);
		}
		cout<<total+k<<endl;
    	
	}
}
