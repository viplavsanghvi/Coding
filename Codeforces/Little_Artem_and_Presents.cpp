#include <iostream> 
#include <stdio.h>

using namespace std;

int main()
{
	int n,res=0;
	
	scanf("%d",&n);
	
	res=2*(n/3);
	
	if(n%3>0)
	{
		res++;
	}
	cout<<res<<endl;
	return 0;
}