#include<stdio.h>
int main(){
	float num1,num2;
	float result;
	char sign;
	printf("Enter any number: ");
	scanf("%f",&num1);
	printf("Enter second number: ");
	scanf("%f",&num2);
	printf("Enter the operator (+,-,*,/) of the operation you wanna perform: ");
	scanf(" %c",&sign);
	switch (sign){
		case '+':
			result=num1+num2;
			printf("Answer is: %f",result);
			break;
		case '-':
			result=num1-num2;
			printf("Answer is: %f",result);
			break;
		case '*':
			result=num1*num2;
			printf("Answer is: %f",result);	
			break;
		case '/':
			if(num2!=0){
			result=num1/num2;
			printf("Answer is: %f",result);
			}
			else{
				printf("Math error");
			}
			break;
		default:
			printf("Invalid operator");
	}
	return 0;
}

