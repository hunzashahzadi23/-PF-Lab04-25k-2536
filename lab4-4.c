#include<stdio.h>
int main(){
	int num;
	printf("Enter any integer of your choice: ");
	scanf("%d",&num);
	if(num%2==0){
		printf("Integer is Even");
	}else {
		printf("Integer is odd");
	}
}
