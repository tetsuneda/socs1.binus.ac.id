#include <stdio.h>
#include <string.h>

struct dict {
    char srt[255]; // short word
    char norm[255]; // normal word
};

int main() {

    FILE *fp = fopen("testdata.in", "r"); // open the file
    int n; // how many words in dictionary
    fscanf (fp, "%d\n", &n);
    dict dicts[n + 1]; // initialize the dictionary
    for (int i = 0; i < n; i++)
        fscanf (fp, "%[^#]#%[^\n]\n", dicts[i].srt, dicts[i].norm);
    /*
    * scan the word inside dictionary
    * ex : mkn#makan
    * then the srt is mkn
    * and the normal is makan
    */
    
    int tc; // testcase
    fscanf (fp, "%d\n", &tc);
    for (int q = 1; q <= tc; q++)
    {
        char arr[255]; // input
        fscanf(fp, "%[^\n]\n", arr);
        char sub[255][55];

        /*
        * the subset in the input
        * ex : sy tdk sk mkn syr pk ns
        * then the subset are : sy, tdk, sk, mkn, syr, pk, ns
        */
        
        int index = 0; // num of words
        int j = 0; // length of each words

        // get the subset
        for (int i = 0; i <= strlen(arr); i++)
        {
            if (arr[i] == ' ' || arr[i] == '\0') // if current char is space or null terminator
            {
                sub[index][j] = '\0'; // make current subset char is null terminator so it'll be a string
                index++;
                j = 0;
            }
            else
                sub[index][j++] = arr[i]; // scan until space or null terminator
        }
        printf("Case #%d:\n", q);
        for (int i = 0; i < index; i++)
        {
            bool isValid = false;
            int idx;
            for (int j = 0; j < n; j++)
            {
                if (strcmp(sub[i], dicts[j].srt) == 0)
                {
                    isValid = true; // if the word is present in dictionary
                    idx = j;
                    break;
                }
            }
            if (isValid)
                printf ("%s", dicts[idx].norm); // print the normal word if the word is present in dictionary
            else
                printf ("%s", sub[i]); // if not present, then just print the subset instead

            if (i < index - 1)
                printf (" ");
        }
        puts("");
    }
    fclose(fp);
    return 0;
}

/*
20
mkn#makan
sy#saya
ak#aku
mw#mau
km#kamu
tdr#tidur
tdk#tidak
tp#tetapi
bljr#belajar
pk#pakai
syr#sayur
ns#nasi
aym#ayam
bngng#bingung
ssh#susah
klo#kalau
skt#sakit
bs#bisa
sk#suka
akn#akan
4
sy tdk sk mkn syr pk ns
km harus bljr klo mw pintar
sy ssh tdr klo sedang bngng bljr matematika
sy sk makan ns pk syr
*/