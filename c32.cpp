#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	i=1;


	while(i<=n)
	{
		k=i;
	    j=n;
		while(j>i)
		{
			cout<<" ";
			j=j-1;
		}
		while(k>0)
		{
			cout<<"*";
			k=k-1;
			
		}
		i=i+1;
		cout<<endl;
		
		
	}
	return 0;
}
