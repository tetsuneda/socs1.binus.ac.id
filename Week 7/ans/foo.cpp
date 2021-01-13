#include <stdio.h>

void nPrintF(int n, char *message){
    for (int i = 0; i < n; i++)
        printf (message);
}

int main(){

    nPrintF(5,"Selamat Datang!\n");

    return 0;
}