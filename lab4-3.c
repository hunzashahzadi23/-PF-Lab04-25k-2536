#include<stdio.h>
int main(){
	float WaterLevel;
	printf("Government Flood Relif Program 2025 \n");
	printf("Enter your area's water level in feets: ");
	scanf("%f",&WaterLevel);
	if(WaterLevel>6){
		printf("Evacuation Required");
	}else if(WaterLevel>4 && WaterLevel<=6){
		printf("You will recieve Medium Relief Package");
	} else if(WaterLevel>2 && WaterLevel<=4){
		printf("You will recieve Small Relief Package");
	}else{
		printf("No Relief Required");
	} return 0;
}

