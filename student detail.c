#include<stdio.h>
struct student{
	char name[20];
	int roll;
	float marks;
};
int main(){
	struct student s;
	printf("Enter student name:\n");
	scanf("%[^\n]%*c",s.name);
	printf("Enter Roll Number:\n");
	scanf("%d",&s.roll);
	printf("Enter Marks:\n");
	scanf("%f",&s.marks);
	printf("\n-----------------------\n");
	printf("Name :%s",s.name);
	printf("\nRoll number %d\n",s.roll);
	printf("Marks:%.2f",s.marks);
}
