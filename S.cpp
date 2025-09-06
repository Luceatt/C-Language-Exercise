#include<stdio.h>
int main()
{
	char strings[100];
	scanf("%[^\n]", &strings);
	
	printf("#include <stdio.h>\n");
	printf("int main()\n");
	printf("{\n");
	printf("    printf(\"");
	printf("%%s\\n\",");
	printf("\"%s\");\n", strings);
	printf("    return 0;\n");
	printf("}\n");
	return 0;
}
