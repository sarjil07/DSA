#include<iostream>
using namespace std;
int main()
{
	int n,i,sum1,sum2,j;
	cin>>n;
	sum1=sum2=0;
	i=1;
	j=2*n;
	while(i<=j)
	{
		if(i%2==0)
		{
			sum2=sum2+i;
			i++;
		}
		else
		{
			sum1=sum1+i;
			i++;
		}
	}
	cout<<sum1<<" "<<sum2;
	return 0;
}
