# include <stdio.h>

int main()
{
	// printf("Jai Guru Umesh\n");

	int n;
	char x[110];

	scanf("%d\n",&n);
	while(n--)
	{
		getchar();
		scanf("0.%[0-9]...\n",x);
		printf("%s\n" ,x);
		// getchar();	

	}
	return 0;
}