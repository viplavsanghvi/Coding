#include <iostream> 
#include <stdio.h>

using namespace std;

int main()
{
	int n,res=0;
	int x,tmp=0;
	cin >>n;

	for(int i=0;i<n;i++)
	{
		tmp=0;
		for (int j=0;j<3;j++)
		{
			cin>>x;
			tmp+=x;
		}
		if(tmp>=2)
		{
			res++;
		}
	}
	cout<<res<<endl;
	return 0;
}