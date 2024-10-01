#include<stdio.h>

typedef struct {
    char name[40];
    int roll;
    float marks;
} Student;

Student student;

int main() {
    Student *sptr = &student;
    
    printf("Enter the details of the student:\n");
    printf("Enter the name of the student: ");
    scanf("%s", &sptr->name);
    printf("Enter the roll of the student: ");
    scanf("%d", &sptr->roll);
    printf("Enter the marks of the student: ");
    scanf("%.2f", &sptr->marks);
    
    printf("Display the details of the student:\n");
    printf("Name:%s\n", sptr->name);
    printf("Roll:%d\n", sptr->roll);
    printf("Marks:%.2f", sptr->marks);
    
    return 0;
}