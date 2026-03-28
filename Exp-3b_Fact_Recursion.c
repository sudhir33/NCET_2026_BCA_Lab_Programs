//Program
#include<stdio.h>

int findFactRecursion(int  num)
{
	if(num==1)
	{
		return 1;
	}
	return num*findFactRecursion(num-1);
}
int main()
{
	int num;
	scanf("%d",&num);
	int fact;
	fact=findFactRecursion(num);//  fun name
	printf("%d",fact);// 
	return 0;
}
/*
Sample Input 1:
5
Sample Output1:
120

Sample Input 1:
6
Sample Output1:
720
*/













