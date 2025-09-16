#include<stdio.h>
int main(){
	int units,bill;
	printf("---Lets calculate your bill---");
	printf("\nEnter your units consumed: ");
	scanf("%d",&units);
	if(units<=100){
		bill=units*10;
		printf("Your bill is:%dPkr",bill);
	} else if(units<=300){
		bill=(100*10)+(units-100)*15;
		printf("Your bill is:%dPkr",bill);
	} else if(units<=500){
		bill=(100*10)+(200*15)+(units-300)*20;
		printf("Your bill is:%dPkr",bill);
	}else if(units>500){
		bill=(100*10)+(200*15)+(200*20)+(units-500)*25;
		printf("Your bill is:%dPkr",bill);
	}
	return 0; 
}
