# include <stdio.h>

int main()
{
	// printf("Jai Guru Umesh\n");
	int a;
	char b;
	while (scanf("%d%c",&a,&b)!=EOF)
	{
		// printf("a is %d\n",a );

		int sum=a;
		if(b=='\n')
			{
				printf("%d\n",sum );		
				continue;
			}	
		while(1)
		{
			scanf("%d%c", &a, &b);
			sum+=a;
			if(b=='\n')
			{
				break;
			}		
		}
		printf("%d\n",sum );
	}
		
	return 0;
}

/*
prints sum of lines till we get EOF signal
1 1
2
1 2 3
6
1
1
33 2 1
36








*/