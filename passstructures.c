#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 


struct student{
    int rollno;
    
    float salary;
};
void stud(struct student e)
{
    printf("student information\n");
    printf("rollno: %d",e.rollno);
    
    printf("\nSalary: %f",e.salary);
}
int main()
{
    struct student e;
    printf("enter roll no:\n");
    scanf("%d",&e.rollno);
    
		printf("Enter employee salary:\n"); 
	scanf("%f", &e.salary); 
	stud(e);
    

    return 0;
}
