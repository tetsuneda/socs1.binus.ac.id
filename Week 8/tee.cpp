#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[255];
    int age;
    double gpa;
};

Student *createStudent (char *name, int age, double gpa) {
    Student *newStudent = (Student*)malloc(sizeof(Student));
    strcpy(newStudent->name, name);
    newStudent->age = age;
    newStudent->gpa = gpa;
    return newStudent;
}

void printall (Student *m) {
    printf ("Nama anda adalah : %s\n", m->name);
    printf ("Umur anda adalah : %d\n", m->age);
    printf ("GPA anda adalah : %.2lf", m->gpa);
}

void *deleteStudent (Student *m) {
    free(m);
}

int main() {

    char nama[255];
    int umur;
    double gpa;
    printf ("Masukkan nama anda : ");
    scanf ("%[^\n]", nama); getchar();
    printf ("Masukkan umur anda : ");
    scanf ("%d", &umur);
    printf ("Masukkan GPA anda : ");
    scanf ("%lf", &gpa);
    puts("");
    Student *student1 = createStudent(nama, umur, gpa);
    printall(student1);
    puts("");
    deleteStudent(student1);
    puts("");
    printall(student1);

    return 0;
}