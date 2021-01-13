#include <stdio.h>

int main(){
	
	char arr[255];
	scanf ("%[^\n]", arr);
	puts ("#include <stdio.h>");
	puts ("int main()");
	puts ("{");
	printf ("    printf(\"%%s\\n\",\"%s\");\n", arr);
	puts ("    return 0;");
	puts("}");
	return 0;
} 
