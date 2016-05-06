/*
  http://codeforces.com/problemset/problem/670/A
	
On the planet Mars a year lasts exactly n days (there are no leap years on Mars). But Martians have the same weeks as earthlings — 5 work days and then 2 days off. Your task is to determine the minimum possible and the maximum possible number of days off per year on Mars.

Input
The first line of the input contains a positive integer n (1 ≤ n ≤ 1 000 000) — the number of days in a year on Mars.

Output
Print two integers — the minimum possible and the maximum possible number of days off per year on Mars.

Examples
input
14
output
4 4
input
2
output
0 2

INPUT
6
OUTPUT
1 2

*/

# include <iostream>

using namespace std;

int main()
{
	int n,min,max;
	cin>>n;

	min=2*(n/7);



	if( (n%7) >2 )
	{
		max=min+2;
	}
	else
	{
		max=min+(n%7);
	}

	if((n%7) == 6)
	{
		min++;
	}

	cout<<min<<" "<<max<<endl;
	return 0;
}