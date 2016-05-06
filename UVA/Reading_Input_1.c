# include <stdio.h>

int main()
{
	// printf("Jai Guru Umesh\n");
	int a,b;
	while (scanf("%d %d", &a, &b), (a || b))
	{
		printf("%d\n", a + b);
	}
		
	return 0;
}