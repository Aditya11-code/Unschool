#include<stdio.h>
int main(){
	int a,b,c,t;
	printf("Enter all the three numbers: ");
	scanf("%d \n %d \n %d", &a, &b, &c);
	t = a+b+c;
	printf("Sum of %d+%d+%d is %d", a,b,c,t);	
}
