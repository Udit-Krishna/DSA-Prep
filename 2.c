#include <stdio.h>

struct complex{
    int real;
    int img;
} c1;

struct student{
    int rollno;
    char name[25];
    char dept[10];
    char dob[10];
    float cgpa;
};

int main(){
    c1.real = 10; c1.img = 5;
    printf("%d+%di \n\n", c1.real, c1.img);
    
    struct student s1 = {1000,"Udit Krishna","CSE","09-08-2003",9.88};
    printf("Name: %s\nRoll No: %d\nDept: %s\nDate of Birth: %.10s\nCGPA: %.2f\n",
            s1.name, s1.rollno, s1.dept, s1.dob, s1.cgpa);
    printf("Size of student struct: %d", sizeof(s1));  // 4 + 28 (but uses only 25) + 10 + 10 + 4 
    printf("\n%d + %d + %d + %d + %d", sizeof(s1.rollno),sizeof(s1.name),sizeof(s1.dept),sizeof(s1.dob),sizeof(s1.cgpa));

    return 0;
}