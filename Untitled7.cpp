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
    	if(n==1)
    	{
    		cout<<a[0]<<endl;
		}
		else if(n==2)
		{
			cout<<max(a[0],a[1])<<endl;
		}
		else if(n==3)
		{
			temp1=a[2];
    		temp2=a[1];
    		if(temp1==temp2)
    		{
    			sum=sum+temp1+a[0];
			}
			else if(temp1<temp2)
			{
				sum=sum+temp1+max(temp2-temp1,a[0]);
			}
			else
			{
				sum=sum+temp2+max(temp1-temp2,a[0]);
			}
    		
		}
    	else if(n==4)
    	{
    		
    		if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3])
    		{
    			cout<<2*a[0]<<endl;
			}
			else
			{
				temp1=a[3];
    			temp2=a[2];
    			x=1;
				for(int i=1;i<=3;i++)
				{
					if(temp1==0 || temp2==0)
					{
						sum=sum+max(temp1,temp2);
						break;
					}
					else if(temp1>=temp2)
					{
						sum=sum+temp2;
						temp1=temp1-temp2;
						temp2=a[x--];
					}
					else 
					{
						sum=sum+temp1;
						temp2=temp2-temp1;
						temp1=a[x--];
					}
				}
				cout<<sum<<endl;
			}
    		
		}
		
	}
}
