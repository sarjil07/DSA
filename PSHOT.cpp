#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,n,i,g1,g2,m;
	string s;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		cin>>s;
		g1=g2=0;
		i=0;
		while(i<2*n)
		{
			
			if(i%2==0)
			{
				if(s[i]=='1')
				{
					g1++;
					i++;
					
				}
				else
				{
					i++;
				}
			}
			else if(i%2==1)
			{
				if(s[i]=='1')
				{
					g2++;
					m=((2*n)-i-1)/2;
					if(g1>(g2+m))
					{
						cout<<i+1<<"\n";
						
					}
					else if(g2>(g1+m))
					{
						cout<<i+1<<"\n";
					}
					i++;
					
				}
				else if(s[i]=='0')
				{
					
					m=((2*n)-i-1)/2;
					if(g1>(g2+m))
					{
						cout<<i+1<<"\n";
						
					}
					else if(g2>(g1+m))
					{
						cout<<i+1<<"\n";
					}
					i++;
					
					
				}
				if(i==2*n)
				{
					if(g1==g2)
					
					{
						cout<<2*n<<"\n";
					}
				}
			}
		}
		t--;
		
	}
}
