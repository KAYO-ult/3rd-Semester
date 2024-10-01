// #include <stdio.h>

// typedef struct {
//     int rollNo;
//     char name[50];
//     char address[100];
//     int age;
//     float averageMarks;
// } Student;

// void displayStudentDetails(Student student) {
//     printf("Roll No: %d\n", student.rollNo);
//     printf("Name: %s\n", student.name);
//     printf("Address: %s\n", student.address);
//     printf("Age: %d\n", student.age);
//     printf("Average Marks: %.2f\n", student.averageMarks);
// }

// int main() {
//     Student students[12];

//     for (int i = 0; i < 12; i++) {
//         printf("Enter details of student %d:\n", i + 1);
//         printf("Roll No: ");
//         scanf("%d", &students[i].rollNo);
//         printf("Name: ");
//         scanf("%49s", students[i].name);
//         printf("Address: ");
//         scanf("%99s", students[i].address);
//         printf("Age: ");
//         scanf("%d", &students[i].age);
//         printf("Average Marks: ");
//         scanf("%f", &students[i].averageMarks);
//     }

//     printf("\nStudent Details:\n");
//     for (int i = 0; i < 12; i++) {
//         displayStudentDetails(students[i]);
//         printf("\n");
//     }

//     return 0;
// }






// // function 1

// #include <stdio.h>

// typedef struct {
//     int rollNo;
//     char name[50];
//     char address[100];
//     int age;
//     float averageMarks;
// } Student;

// void inputStudentDetails(Student students[12]) {
//     for (int i = 0; i < 12; i++) {
//         printf("Enter details of student %d:\n", i + 1);
//         printf("Roll No: ");
//         scanf("%d", &students[i].rollNo);
//         printf("Name: ");
//         scanf("%49s", students[i].name);
//         printf("Address: ");
//         scanf("%99s", students[i].address);
//         printf("Age: ");
//         scanf("%d", &students[i].age);
//         printf("Average Marks: ");
//         scanf("%f", &students[i].averageMarks);
//     }
// }

// void displayStudentDetails(Student student) {
//     printf("Roll No: %d\n", student.rollNo);
//     printf("Name: %s\n", student.name);
//     printf("Address: %s\n", student.address);
//     printf("Age: %d\n", student.age);
//     printf("Average Marks: %.2f\n", student.averageMarks);
// }

// int main() {
//     Student students[12];

//     inputStudentDetails(students);

//     printf("\nStudent Details:\n");
//     for (int i = 0; i < 12; i++) {
//         displayStudentDetails(students[i]);
//         printf("\n");
//     }

//     return 0;
// }





// //function 2

// #include <stdio.h>

// typedef struct {
//     int rollNo;
//     char name[50];
//     char address[100];
//     int age;
//     float averageMarks;
// } Student;

// void inputStudentDetails(Student students[12]) {
//     for (int i = 0; i < 12; i++) {
//         printf("Enter details of student %d:\n", i + 1);
//         printf("Roll No: ");
//         scanf("%d", &students[i].rollNo);
//         printf("Name: ");
//         scanf("%49s", students[i].name);
//         printf("Address: ");
//         scanf("%99s", students[i].address);
//         printf("Age: ");
//         scanf("%d", &students[i].age);
//         printf("Average Marks: ");
//         scanf("%f", &students[i].averageMarks);
//     }
// }

// void displayStudentDetails(Student students[12]) {
//     for (int i = 0; i < 12; i++) {
//         printf("Student %d Details:\n", i + 1);
//         printf("Roll No: %d\n", students[i].rollNo);
//         printf("Name: %s\n", students[i].name);
//         printf("Address: %s\n", students[i].address);
//         printf("Age: %d\n", students[i].age);
//         printf("Average Marks: %.2f\n\n", students[i].averageMarks);
//     }
// }

// int main() {
//     Student students[12];

//     inputStudentDetails(students);

//     printf("\nStudent Details:\n");
//     displayStudentDetails(students);

//     return 0;
// }