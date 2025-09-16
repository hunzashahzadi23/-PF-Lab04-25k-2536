#include<stdio.h>
int main(){
	float marks;
	printf("Enter your marks: ");
	scanf("%f",&marks);
	if(marks>=85){
		printf("Your grade is A");
	}else if(marks>=70){
		printf("Your grade is B");
	} else if(marks>=55){
		printf("Your grade is C");
	} else if(marks>=40){
		printf("Your grade is D");
	}else{
		printf("Your grade is F");
	}
}
