# include <stdio.h>

int main()
{
	// printf("Jai Guru Umesh\n");
	int a;
	char b[100010];
	long long int sum=0;

	scanf("%s",b);
	
	while (sscanf(b,"%*[a-z]%d%s",&a,b)!=EOF) //sscanf reads from string, %* does not store the read values into any variable
	{
		// printf("%d %s\n",a,b );
		sum+=a;
	}
	printf("%lld\n",sum );	
	return 0;
}

/*

Tom and Bob are good friends.Tom is fond of solving problems.Bob gave a problem to Tom.He gave him a string of numbers and alphabets.He wants Tom to find the sum of all integers that occurs in the given string . As Tom is a bad programmer he needs your help to solve this problem.
 
Input

The first line contains T i.e. the number of test cases.
.
T lines follow, each line containing a string,
Output

For each testcase, output a single line containing the sum of integers that occure in string
 
Constraints

1 ≤ T ≤ 10^9
1 ≤ |s| ≤ 10^5
Example

Input:
1
abc12def4gh

Output:
16


*/