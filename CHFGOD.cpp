#include<iostream>
using namespace std;
int main()
{
    long long int t,x,y,temp;
    cin>>t;
    while(t--)
    {
    	cin>>x>>y;
    	if(x%y==0||y%x==0)
    	{
    		cout<<0<<"\n";
		}
		else if(x>y)
		{
			if((x%(y+1))>(x+1)%y)
			{
				temp=(x+1)%y;
				cout<<(temp+1)<<"\n";
			}
			else
			{
				temp=x%(y+1);
				cout<<temp+1<<"\n";
			}
		}
		else if(y>x)
		{
			if((y%(x+1))>(y+1)%x)
			{
				temp=(y+1)%x;
				cout<<temp+1<<"\n";
			}
			else
			{
				temp=y%(x+1);
				cout<<temp+1<<"\n";
			}
		}
	}
    return 0;
    
}
