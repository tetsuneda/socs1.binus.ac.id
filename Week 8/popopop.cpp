#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char nama[255];
    int umur;
    struct Student *next;
} *head = NULL, *tail = NULL, *curr;

Student *createNewStudent (char *name, int age) {
    Student *newStudent = (Student*)malloc(sizeof(Student));
    strcpy(newStudent->nama, name);
    newStudent->umur = age;
    newStudent->next = NULL;
}

void pushHead(char *name, int age) {
    Student *newStudent = createNewStudent(name, age);
    if (!head)
        head = tail = newStudent;
    else
    {
        newStudent->next = head;
        head = newStudent;
    }
}

void pushTail(char *name, int age) {
    Student *newStudent = createNewStudent(name, age);
    if (!head)
        head = tail = newStudent;
    else
    {
        tail->next = newStudent;
        tail = newStudent;
    }
    
}

void printAll() {
    if (!head)
        return;
    else
    {
        int i = 1;
        Student *curr = head;
        while (curr)
        {
            printf ("Student %d : %s %d\n", i, curr->nama, curr->umur);
            i++;
            curr = curr->next;
        }
    }
    
}

int main(){

    pushHead((char*)"Star", 18);
    pushHead((char*)"Rooney", 21);
    pushTail((char*)"Valen", 22);
    printAll();

    return 0;
}