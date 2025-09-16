#include<stdio.h>
int main(){
	int manners,honesty,prayer,fasting,charity,SB,CRS;
	float CI;
	printf("lets calculate your Character Index as a muslim: \n");
	printf("Rate your akhlaq and manners from 0-10: ");
	scanf("%d",&manners);
	printf("Rate your Honesty & Trustworthiness from 0-10: ");
	scanf("%d",&honesty);
	printf("Whats your prayer regularity? (0 = Irregular, 1 = Regular): ");
	scanf("%d",&prayer);
	if(prayer!=1 && prayer!=0){
		printf("enter valid number: ");
		scanf("%d",&prayer);  
		
	}
	printf("How often do you Fast? (0 = Never, 1 = Sometimes, 2 = Always) :");
	scanf("%d",&fasting);
	if(fasting!=0 && fasting!=2 && fasting!=1){
		printf("enter valid number: ");
		scanf("%d",&fasting);
	}
	printf("Rate your Zakat & Charity from 0-10: ");
	scanf("%d",&charity);
	printf("Rate your Social Behavior from 0-10: ");
	scanf("%d",&SB);
	printf("Rate your Conflict Resolution Skills from 0-10: ");
	scanf("%d",&CRS);
	CI=((manners*2.5)+(honesty*2.0)+(prayer*15)+(fasting*5)+(charity*1.0)+(SB*1.0)+(CRS*1.0));
	printf("-------------------\n\n");
	if(CI>=85){
		printf("Classification:Excellent Muslim Character \nRemarks: Role model for society");
	}else if(CI>=70){
		printf("Good Muslim Character \nRemarks: Practicing believer");
	}else if(CI>=50){
		printf("Average Character \nReamrks:Needs minor improvement");
	}else if(CI>=30){
		printf("Needs Improvement \nRemarks:Work on Akhlaq & Ibadah");
	}else{
		printf("Weak Character \nRemarks: Requires serious guidance");
	}
	return 0;
	}

	

	

