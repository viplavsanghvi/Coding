#include <stdio.h>

int main()
{
	long long int l,b,d,res_l,res_b;
	scanf("%lld %lld %lld",&l,&b,&d);

	res_l=l/d;

	if(l%d>0)
	{
		res_l++;
	}
	
	res_b=b/d;

	if(b%d>0)
	{
		res_b++;
	}

	printf("%lld\n",res_l*res_b );

	return 0;
}