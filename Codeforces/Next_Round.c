#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n=0,k,i;
	scanf("%d %d",&n,&k);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}

	k--; //because array starts from index 0
	
	while(k+1<n && a[k]==a[k+1] && a[k]>0)
	{
		k++;
	}
	
	// printf("%d\n",k );
	
	i=0;
	int cnt=0;
	while(i<=k && a[i]>0)
	{
		cnt++;
		i++;
	}

	printf("%d\n", cnt);



	return 0;
}