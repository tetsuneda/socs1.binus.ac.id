#include <stdio.h>

struct Mhs {
	char ID[21]; // max length of ID is 20 chars
	char name[101]; // max length of name is 100 chars
	int age; // max age is 50 so int will fit
};

int main() {

    int n;
    scanf ("%d", &n); getchar();
    Mhs mhs[n + 1]; // initialize array of mhs with n size
    for (int i = 1; i <= n; i++) // input data
	{
    	scanf ("%[^\n]", mhs[i].ID); getchar();
    	scanf ("%[^\n]", mhs[i].name); getchar();
    	scanf ("%d", &mhs[i].age); getchar();
	}

	int q; // for query
	// int j = 1; // for printing query number
	scanf ("%d", &q); // input how much query
	int query[q + 1] = {0}; // initialize array for query with starting index -> 1
	for (int i = 1; i <= q; i++) 
		scanf ("%d", &query[i]); getchar();
	
	for (int i = 1; i <= q; i++) {
		if (query[i]) { // print data with query's index that inputted before
			printf ("Query #%d:\n", i);
			printf ("ID: %s\n", mhs[query[i]].ID);
			printf ("Name: %s\n", mhs[query[i]].name);
			printf ("Age: %d\n", mhs[query[i]].age);
		}
	}

    return 0;
}

/*
2
01337
Lili Lili
18
69420
Bibi
20
2
2
1
*/

