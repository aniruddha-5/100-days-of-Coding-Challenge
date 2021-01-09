#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> count;
        set<int> st;
        int temp,c=0;
        for(int i=0;i<n;i++)
        {
        	cin>>a[i];
        	st.insert(a[i]);
        	count[a[i]]++; 	
        }
        for(int i=0;i<st.size();i++)
        {
        	if(count[st[i]]==1)
        	{
        		temp=st[i];
        		c++;
        		break;
			}
		}
		if(c==0)
		{
			cout<<-1<<"\n";
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				if(temp==a[i])
				{
					cout<<i+1<<"\n";
					break;
				}
			}
		}
    }
}
