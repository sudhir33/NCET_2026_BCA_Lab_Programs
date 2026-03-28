//Program
#include<stdio.h>
int find_gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	int temp;
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	b=b%a;
	return find_gcd(a,b);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int gcd;
	gcd=find_gcd(a,b);
	printf("%d",gcd);
	return 0;
}




/*
Sample Input1:
34 56

Sample output1: 
2

Sample Input2:
24 48

Sample output2: 
24

Sample Input3:
17 36

Sample output3: 
1


*/
