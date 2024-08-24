#include<stdio.h>
struct biodata{
	char name[20],fname[20],location[30];
	int age;
	float height, weight;
};
int main(){
	struct biodata s;
	printf("Enter your name:\n");
	scanf("%s",s.name);
	printf("Enter your father name:\n");
	scanf("%s",s.fname);
	printf("Enter your age:\n");
	scanf("%d",&s.age);
	printf("Enter your height in metres:\n");
	scanf("%f",&s.height);
	printf("Enter your weight in kg:\n");
	scanf("%f",&s.weight);
	printf("Enter your location:\n");
	scanf("%s",&s.location);
	printf("\n-----------------------------\n");
	printf("\nName: %s\n",s.name);
	printf("Father name: %s\n",s.fname);
	printf("Age: %d\n",s.age);
	printf("Height: %.2f\n",s.height);
	printf("Weight: %.2f\n",s.weight);
	printf("Location: %s\n",s.location);
}
