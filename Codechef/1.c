#include<stdio.h>

long long int f(long long int,long long int,long long int );
int main()
{
 int t,i;
 long long int s,s1;
 scanf("%d",&t);
 
 for(i=0;i<t;i++)
 {
   scanf("%lld",&s);
   s1=f(s,1,1000000);
   printf("%lld\n",s1);
 }
 return 0;
}



long long int f(long long int s,long long int n,long long int n2)
{

 long long int s1=0,mid ,six=6;//max=10000000000000000; 
 
 
 mid=(n+n2)/2;
 s1=(mid*(mid+1)*((2*mid)+1))/six;
 //printf("s1 is %lld %lld %lld\n",s1,n,n2);
 if(n2<n)
  return n2;
 if(s==s1)
   return mid;

 else if(n==mid)
  {
   if(s1>s)
     return n-1;
   else
    return f(s,mid+1,n2); 
  }
else
 {
   if(s1<s)
     return f(s,mid+1,n2);
   else
   return  f(s,n,mid-1);
 }  
 
return 0;
}
 
