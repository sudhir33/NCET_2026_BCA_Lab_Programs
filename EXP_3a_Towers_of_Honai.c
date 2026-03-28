//Program:
#include<stdio.h>
void toh(int n,char S,char A,char D)
{
	if(n==1)
	{
		printf("Move disc 1 from %c to %c\n",S,D);
		return;
	}
	toh(n-1,S,D,A);
	printf("Move disc %d from %c to %c\n",n,S,D);
	toh(n-1,A,S,D);
}
int main()
{
	int n;
	scanf("%d",&n);
	toh(n,'S','A','D');
}

/*
Sample Input1:
3
Sample Output1:
Move disc 1 from S to D
Move disc 2 from S to A
Move disc 1 from D to A
Move disc 3 from S to D
Move disc 1 from A to S
Move disc 2 from A to D
Move disc 1 from S to D

Sample Input2:
4

Sample Output2:
Move disc 1 from S to A
Move disc 2 from S to D
Move disc 1 from A to D
Move disc 3 from S to A
Move disc 1 from D to S
Move disc 2 from D to A
Move disc 1 from S to A
Move disc 4 from S to D
Move disc 1 from A to D
Move disc 2 from A to S
Move disc 1 from D to S
Move disc 3 from A to D
Move disc 1 from S to A
Move disc 2 from S to D
Move disc 1 from A to D
*/















