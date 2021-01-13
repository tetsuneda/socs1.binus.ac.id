#include <stdio.h>

struct Mhs {
	char name[101]; // max length of name is 100 chars
	char NIM[10]; // max length of NIM is 9 chars
	int age; // max of age is 100 so int will fit
	char post[7]; // max length of postal code is 7 chars
	char POB[101]; // max length of Place Of Birth is 100 chars
	char DOB[101]; // max length of Date Of Birth is 100 chars
	char sch[101]; // max length of High School is 100 chars
	int sib; // max of sibling is 100 so int will fit
	int height; // max of height is 1000 so int will fit
	char rek[10]; // max length of Bank Account Number is 9 chars
};

int main() {

    int n;
    scanf ("%d", &n); getchar(); // getchar every input because there is [^\n]
    struct Mhs mhs[n + 1]; // initialize array of mhs with size n + 1 because indexing start from 1
    for (int i = 1; i <= n; i++) { // Input Data
    	scanf ("%[^\n]", mhs[i].name); getchar(); // scan name
    	scanf ("%[^\n]", mhs[i].NIM); getchar(); // scan NIM
    	scanf ("%d", &mhs[i].age); getchar(); // scan Age
    	scanf ("%[^\n]", &mhs[i].post); getchar(); // scan postal code
    	scanf ("%[^\n]", mhs[i].POB); getchar(); // scan Place Of Birth
    	scanf ("%[^\n]", mhs[i].DOB); getchar(); // scan Date Of Birth
    	scanf ("%[^\n]", mhs[i].sch); getchar(); // scan High School
    	scanf ("%d", &mhs[i].sib); getchar(); // scan sibling
    	scanf ("%d", &mhs[i].height); getchar(); // scan height
    	scanf ("%[^\n]", mhs[i].rek); getchar(); // scan Bank Account Number
	}
	for (int i = 1; i <= n; i++) {
		printf ("Mahasiswa ke-%d:\n", i);
		printf ("Nama: %s\n", mhs[i].name);
		printf ("NIM: %s\n", mhs[i].NIM);
		printf ("Umur: %d\n", mhs[i].age);
		printf ("Kode Pos: %s\n", mhs[i].post);
		printf ("Tempat Lahir: %s\n", mhs[i].POB);
		printf ("Tanggal Lahir: %s\n", mhs[i].DOB);
		printf ("Almamater SMA: %s\n", mhs[i].sch);
		printf ("Jumlah Saudara Kandung: %d\n", mhs[i].sib);
		printf ("Tinggi Badan: %d\n", mhs[i].height);
		printf ("NOMOR REKENING: %s\n", mhs[i].rek);
	}
	
    return 0;
}

/*
2
Lili
123456789
13
786431
Jakarta
14SEPT2010
Bina Nusantara School
7
123
968543769
Jojo
125676789
22
711111
Bekasi
1JANUARY2018
Bina Nusantara School
99
12
890234789
*/
