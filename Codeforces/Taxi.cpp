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

	int min;
	if(a[1]<=a[3])
	{
		min=a[1];
	}
	else
	{
		min=a[3];
	}

	a[1]-=min;
	a[3]-=min;
	res+=min;

	res+=a[2]/2;
	a[2]=a[2]%2;

	if(a[2]>0)
	{
		if(a[1]>=2)
		{
			a[1]-=2;
		}
		else if(a[1]==1)
		{
			a[1]-=1;
		}

		a[2]-=1;
		res++;
	}

	res+=a[1]/4;
	a[1]%=4;
	if(a[1]>0)
	{
		res++;
	}

	res+=a[3];
	res+=a[4];

	cout<<res<<endl;
	return 0;
}