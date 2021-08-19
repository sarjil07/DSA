#include<iostream>
using namespace std;
int main()
{
	int n,num,res;
	res=-1;
    cin>>n>>num;
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		if(arr[i]==num)
		{
			res=i;
		}
	}
	cout<<res;
}
