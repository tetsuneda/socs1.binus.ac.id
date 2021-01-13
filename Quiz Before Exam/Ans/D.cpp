#include <stdio.h>
#include <string.h>

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(char arr[], int n) {
   bool swapped;
   for (int i = 0; i < n - 1; i++)
   {
     swapped = false;
     for (int j = 0; j < n - i - 1; j++)
     {
        if (arr[j] > arr[j + 1])
        {
           swap(&arr[j], &arr[j + 1]);
           swapped = true;
        }
     }

     if (swapped == false)
        break;
   }
}

int main() {

    char input[255];
    char lower[255];
    int ctr = 0;
    scanf ("%[^\n]", input); getchar();
    for (int i = 0; i < strlen(input); i++)
        if (input[i] >= 'a' && input[i] <= 'z')
            lower[ctr++] = input[i];
    
    lower[ctr] = '\0';
    bubbleSort(lower, strlen(lower));
    
    printf ("%s\n", lower);

    return 0;
}