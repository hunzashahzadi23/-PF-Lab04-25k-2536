#include<stdio.h>
int main(){
	float Rainfall,RiverFlow;
	printf("Prediction for Flood Risks Level: \n");
	printf("enter the rainfall level (in mm): ");
	scanf("%f",&Rainfall);
	printf("enter the riverflow level (in m^3/s): ");
	scanf("%f",&RiverFlow);
	if(Rainfall<50 && RiverFlow<200){
		printf("Low Risk..");
	}
	else if(Rainfall>=50 && RiverFlow>200){
		printf("Moderate Risk");
	}else if(Rainfall>=100 && RiverFlow>=500){
		printf("High Risk");
	}else if(Rainfall>=150 && RiverFlow>=800){
		printf("Severe Risk – Evacuate!");
	}else{
		printf("Error");
	}
	return 0;
}
