#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int combination(int n, int r)
{	
	return (factorial(n)/(factorial(n-r)*factorial(r)));
}

int factorial(int x)
{
	int i,res=1;
	for (i=1;i<=x;i++)
		res=res*i;
	return res;
}

int main(void)
{
	int n,r,result;
	printf("두 가지 정수를 입력하시오: ");
	scanf("%d %d",&n,&r);
	
	result=combination(n,r);
	printf("%dC%d=%d",n,r,result);
	
}


