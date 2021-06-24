#include<iostream>
using namespace std;
int main()
{
	long long int t,n,id;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		int arr[n]={0};
	    int m[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>m[i][j];
				if(m[i][j]==1)
				{
					arr[i]=1;
				}
			}
		}
		int flag=0;
		
		for(int i=0;i<n;i++)
		{


			if(arr[i]==0&&arr[i-1]==0&&i>0)
			{
				flag=0;
			}
		    else if(arr[i]==0)
		    {
		    	flag=i+1;
			}			
			
		}
		if(flag==0)
		{
			cout<<-1<<"\n";
		}
		else
		{
			cout<<flag<<"\n";
		}
		
	}
	return 0;
}
