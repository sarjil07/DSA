#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	i=0;
	while(i<n)
	{
		if(i%2==0)
		{
			j=i/2;
			cout<<1+j*10<<" "<<2+j*10<<" "<<3+j*10<<" "<<4+j*10<<" "<<5+j*10<<"\n";
			i++;
		}
		else
		{
			j=i/2;
			cout<<10+j*10<<" "<<9+j*10<<" "<<8+j*10<<" "<<7+j*10<<" "<<6+j*10<<"\n";
			i++;
		}
		
	}
	return 0;
}
