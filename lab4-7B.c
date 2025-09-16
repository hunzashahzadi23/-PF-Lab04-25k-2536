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
		bill=units*15;
		printf("Your bill is:%dPkr",bill);
	} else if(units<=500){
		bill=units*20;
	    printf("Your bill is:%dPkr",bill);
	} else if(units>500){
		bill=units*25;
		printf("Your bill is:%dPkr",bill);
	} return 0;
}

