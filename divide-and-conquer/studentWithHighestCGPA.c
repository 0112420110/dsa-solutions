//You are given a list of students who have name, id and cgpa.
// Your task is to find the student with highest cgpa.
// [ you can’t sort the list]

#include<stdio.h>
struct student{
char name[100];
int id;
float cgpa;
};

int main(){

int n;
scanf("%d",&n);

struct student students[n];

for(int i=0;i<n;i++){
        printf("Enter name: ");
    scanf(" %s",students[i].name);

    printf("Enter id: ");
    scanf("%d",&students[i].id);

    printf("Enter cgpa: ");
    scanf("%f",&students[i].cgpa);
    printf("\n");

}

int highest=0;

for(int i=1;i<n;i++){
    if(students[i].cgpa>students[highest].cgpa)
        highest=i;
}
printf("Student with highest cgpa: ");
 printf("%s",students[highest].name);
 printf(" and id: %d",students[highest].id);

return 0;
}
