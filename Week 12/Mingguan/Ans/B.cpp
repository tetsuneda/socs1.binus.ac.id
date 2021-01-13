#include <stdio.h>
#include <string.h>

struct Data {
    char name[1024];
    char ch[1024];
    int view;
};

void swap (Data* a, Data* b) {
    // swap views
    int temp = a->view;
    a->view = b->view;
    b->view = temp;

    // swap title
    char tempo[1024];
    strcpy(tempo, a->name);
    strcpy(a->name, b->name);
    strcpy(b->name, tempo);

    // swap channel name
    char tempor[1024];
    strcpy(tempor, a->ch);
    strcpy(a->ch, b->ch);
    strcpy(b->ch, tempor);
}

int main() {

    // open the file
    FILE *fp = fopen("testdata.in", "r");
    
    // initialize array of struct with constraint size
    Data data[225];
    int n = 0;

    // scan the file
    while (!feof(fp))
    {
        fscanf (fp, "%[^#]#%[^#]#%d\n", data[n].name, data[n].ch, &data[n].view);
        n++;
    }

    // sort by views
    for (int i = 0; i < n - 1; i++)
        for (int j = i; j < n; j++)
            if (data[i].view < data[j].view)
                swap(&data[i], &data[j]);

    // sort by name if the views are same
    for (int i = 0; i < n - 1; i++)
            for (int j = i; j < n; j++)
                if (data[i].view == data[j].view && strcmp(data[i].name, data[j].name) > 0)
                    swap(&data[i], &data[j]);

    for (int i = 0; i < n; i++)
        printf("%s by %s - %d\n", data[i].name, data[i].ch, data[i].view);

    return 0;
}

/*
BeeTube Rewind 2019#Etta Kelelawar#10000
Lagu Nasionalis#Eko Gustiwono#2500
Makan Sambel#Rens Entertainment#5000
Selamat Tinggal#Lucinta Lama#7500
Ayo Olahraga#Nusa Roro#2500
*/