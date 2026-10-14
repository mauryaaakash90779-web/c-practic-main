//structure
#include<stdio.h>
struct Person{
	char name[50];
	char fname[60];
	int age;
	char branch[30];
	float salary;
};
main(){
	struct Person p1[2];
	for(int i=0;i<2;i++){
		printf("Enter Your Name: ");
		fgets(p1[i].name);
		printf("Enter Your Father Name: ");
		fgets(p1[i].fname);
		printf("Enter your Age: ");
		scanf("%d",&p1[i].age); 
		getchar();
		printf("Enter Your branch: ");
		fgets(p1[i].branch);
		printf("Enter your Salary: ");
		scanf("%f",&p1[i].salary);
		getchar();
		

	}
	for(int i=0;i<4;i++){
		printf("----Person %d details is ----\n",i+1);
		printf("Name is %s\n",p1[i].name);
		printf("Father Name is %s\n",p1[i].fname);
		printf("Age is %d\n",p1[i].age);
		printf("Branch is %s\n",p1[i].branch);
		printf("Salary is %f\n",p1[i].salary);	
	}
	
	
}


// #include <stdio.h>
// #include <string.h>

// struct Student {
//     char name[50];
//     int age;
//     float marks;
// };

// int main() {

//     struct Student s1;

//     strcpy(s1.name, "Akash");
//     s1.age = 21;
//     s1.marks = 85.5;

//     printf("Name = %s\n", s1.name);
//     printf("Age = %d\n", s1.age);
//     printf("Marks = %.2f\n", s1.marks);

//     return 0;
// }