#include<stdio.h>
int main(){
	int i=0 , sum=0, num=0;
	do{
		printf("Enter the number : " , num);
		scanf("%d" , &num);
		sum = sum + num;
	}
	while(num!= 0);
	printf("Total sum is : %d", sum);
	return 0;
}
