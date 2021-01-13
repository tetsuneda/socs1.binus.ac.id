#include <stdio.h>

int main(){

    char arr[][15] = {"Hello", "Goodbye", "Madafaka"};
    for (auto &&i : arr)
    {
        printf ("%s ", i);
    }

    return 0;
}