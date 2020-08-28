#include <stdio.h>
int main (){
	int a,b,c,d,m,q,r;
	printf("Enter First Number: ");
	scanf("%d" , &a);
	printf("Enter Second Number: ");
	scanf("%d" , &b);
	c = a+b;
	d = a-b;
	m = a*b;
	q = a/b;
	r = a%b;
	printf("Sum of %d and %d is %d \n", a,b,c );
	printf("Difference of %d and %d is %d \n", a,b,d );
	printf("Product of %d and %d is %d \n", a,b,m );
	printf("On dividing %d and %d quotient is %d \n", a,b,q );
	printf("On dividing %d and %d remainder is %d \n", a,b,r );
	
}
