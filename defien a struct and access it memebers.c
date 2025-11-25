#include<stdio.h>

struct Student {
    int id;
    char name[20];
    float marks;
};

int main() {
    struct Student s1 = {101, "Rukmini", 89.5};
    struct Student s2 = {102, "Ashika", 76.0};
    struct Student s3 = {103, "Srinidhi", 92.3};

    printf("Student 1\n");
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n\n", s1.marks);

    printf("Student 2\n");
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n\n", s2.marks);

    printf("Student 3\n");
    printf("ID: %d\n", s3.id);
    printf("Name: %s\n", s3.name);
    printf("Marks: %.2f\n", s3.marks);

    return 0;
}
