#include <stdio.h>
#include <string.h>

struct Data {
    char name[255];
    int grade;
};

void swap (Data* a, Data* b) {
    // swap grade
    int temp = a->grade;
    a->grade = b->grade;
    b->grade = temp;

    // swap name
    char tempo[255];
    strcpy(tempo, a->name);
    strcpy(a->name, b->name);
    strcpy(b->name, tempo);
}

int main() {

    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        // amount of data
        int n;
        scanf ("%d", &n); getchar();

        // initialize array of struct with n size
        Data data[n + 1];

        // data scanning
        for (int i = 0; i < n; i++)
        {
            scanf ("%[^#]#%d", data[i].name, &data[i].grade);
            getchar();
        }

        // sort by grade
        for (int i = 0; i < n - 1; i++)
            for (int j = i; j < n; j++)
                if (data[i].grade < data[j].grade)
                    swap(&data[i], &data[j]);

        // sort by name if grade are same
        for (int i = 0; i < n - 1; i++)
            for (int j = i; j < n; j++)
                if (data[i].grade == data[j].grade && strcmp(data[i].name, data[j].name) > 0)
                    swap(&data[i], &data[j]);

        printf("Case #%d:\n", q);
        for (int i = 0; i < n; i++)
            printf ("%s - %d\n", data[i].name, data[i].grade);
    }

    return 0;
}

/*
2
3
andi#30
rudi setiawan#50
aben#30
5
andi#70
rudi setiawan#50
aben#70
rony sinardi#50
kurniati#60
*/