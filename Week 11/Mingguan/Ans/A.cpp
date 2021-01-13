#include <stdio.h>
#include <string.h>

int main() {

	int tc, shift, temp, btr;
	char word[1005];
	char key[] = {"OIEASGTB"};
	
	FILE *fp = fopen("testdata.in", "r");
	
	fscanf(fp, "%d\n", &tc);
	
	for(int q=1; q<=tc; q++)
	{
		fscanf(fp, "%d\n", &shift);
		fscanf(fp, "%[^\n]\n", word);
		
		printf("Case #%d: ", q);
		
		for(int j = 0; j < strlen(word); j++)
		{
			if(word[j] >= '2' && word[j] <= '8') 
			{
				temp = word[j] - '0' - 1;
				btr = key[temp] - 'A' - shift;
				if(btr < 0)
					btr += 26;
				
				printf("%c", btr + 'A');
			}
			else if(word[j] == '0' || word[j] == '1') 
			{
				temp = word[j] - '0'; 
				btr = key[temp] - 'A' - shift;
				if(btr < 0)
					btr += 26;
				printf("%c", btr + 'A');
			}
			else if(word[j] >= 'A' && word[j] <= 'Z') 
			{
				word[j] -= shift;
			
				if(word[j] < 'A')
					word[j] += 26;
				
				printf("%c", word[j]);
			}
			else if(word[j] == ' ')
				printf(" ");
		}
		puts("");
	}
	fclose(fp);
	return 0;
}

/*
3
1
P0DF VQP0 8 UJNF U1F5F J7 8 D8U
1
3UVF 4NZR VF 83N47R
7
0L PZ MYPLUK5F M8UUF HUK J84L
*/