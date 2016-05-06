#include <iostream> 
#include <stdio.h>

using namespace std;

int main()
{
	int n,res=0,x;
	cin >>n;
	int a[5]={0,0,0,0,0};
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a[x]+=1;
	}
	
	a[1]=max(a[1]-a[3],0);
	
	res=a[4]+a[3]+(a[1]+2*a[2])/4;  //(a[1]+2*a[2]) counts the number of people and then / 4 gives number of taxies but there can be some remainder
	
	if((a[1]+2*a[2])%4>0)
	{
		res++;
	}
	cout<<res<<endl;
	return 0;
}