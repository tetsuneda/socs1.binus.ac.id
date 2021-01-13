#include <stdio.h>
#include <string.h>

struct Mhs {
	char name1[16]; // max length of first name is 15 chars
	char name2[16]; // max length of last name is 15 chars
	int id = 0;
};

int main() {

    int n;
    scanf ("%d", &n); getchar();
    Mhs mhs[n + 1]; // initialize mhs with n size
    for (int i = 1; i <= n; i++) // input data
    	scanf ("%s %s", mhs[i].name1, mhs[i].name2); getchar();
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++)
			if (strcmp(mhs[i].name1, mhs[j].name1) == 0 && strcmp(mhs[j].name2, mhs[i].name2) == 0) // if there's duplicated name
				mhs[i].id++; // add + 1 every counted duplicate
	}
	for (int i = 1; i <= n; i++) // 04d -> 0001
		printf ("%s%s%04d\n", mhs[i].name1, mhs[i].name2, mhs[i].id);
	
    return 0;
}
/*
5
jojo lili
jojo bibi
bibi jojo
jojo lili
jojo lili
*/