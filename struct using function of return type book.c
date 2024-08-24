#include<stdio.h>
struct book{
	char title[20],auther[20],sub[20];
	int id;
	float price;
};
struct book display(int);
int main(){
	int n,i;
	printf("Enter the number ofi book.\n");
	scanf("%d",&n);
	struct book a[n];
	a[n]=display(n);
	printf("\n------------------------------\n");
	for(i=0;i<n;i++){
	printf("Book Title: %s\n",a[i].title);
	printf("Auther Name: %s\n",a[i].auther);
	printf("Subject: %s\n",a[i].sub);
	printf("Bool ID: %d\n",a[i].id);
	printf("Price: %.2f\n",a[i].price);
}
}
struct book display(int n){
		struct book s[n];
		int i;
		for(i=0;i<n;i++){
	printf("\nEnter book title:");
	scanf("%s",s[i].title);
	printf("\nEnter Auther Name:");
	scanf("%s",s[i].auther);
	printf("\nEnter Subject:");
	scanf("%s",s[i].sub);
	printf("\nEnter book id:");
	scanf("%d",&s[i].id);
	printf("\nEnter the price:");
	scanf("%f",&s[i].price);
}
	return s;
	}
