#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Finding greates number from 3 numbers: \n");
	printf("Enter 1st integer: ");
	scanf("%d",&num1);
	printf("Enter 2nd integer: ");
	scanf("%d",&num2);
	printf("Enter 3rd integer: ");
	scanf("%d",&num3);
	if (num1>num2 && num1>num3){
		printf("%d is greatest..",num1);
	}else if(num2>num1 && num2>num3){
		printf("%d is greatest..",num2);
	}else{
		printf("%d is greatest..",num3);
	}
	return 0;
}

