//structure
#include<stdio.h>
struct College{
	char collegeName[100];
	int collegeId;
	int staff;
	int courses;
	float expenditure;
};
main(){
	struct College p1[4];
	for(int i=0;i<4;i++){
		printf("%d. Enter College Name: ",i+1);
		gets(p1[i].collegeName);
		printf("Enter College ID: ");
		scanf("%d",p1[i].collegeId);
		printf("Enter total staff: ");
		scanf("%d",&p1[i].staff);
		printf("Enter total courses: ");
		scanf("%d",&p1[i].courses);
		fflush(stdin);
		printf("Enter college expendities per year: ");
		scanf("%f",p1[i].expenditure);

	}
	for(int i=0;i<4;i++){
		printf("----Person %d details is ----\n",i+1);
		printf("Collage Name is %s\n",p1[i].collegeName);
		printf("Father Name is %d\n",p1[i].collegeId);
		printf("Age is %d\n",p1[i].staff);
		printf("Branch is %d\n",p1[i].courses);
		printf("Name is %f\n",p1[i].expenditure);	
	}
	
	
}
