#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,count;
	cin>>t;
	while(t--)
	{
		cin>>n;
		count=0;
		long long int arr[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		}
		for(int i=0;i<n;i++ )
		{
			for(int j=0;j<n;j++)
			{
				for(int p=0;p<n;p++)
				{
					for(int q=0;q<n;q++)
					{
						if((p>=i)&&(q>=j))
						{
							if(arr[i][j]>arr[p][q])
							{
								count++;
							}
						}
					}
				}
			}
		}
		cout<<count<<"\n";
	}
	
	return 0;
}
