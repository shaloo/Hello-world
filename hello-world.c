/* This C Program prints the location of this C programming file
   and then it prints the C program itself */

#include <stdio.h>

void printself(){
	FILE *fp;
	char c;
	fp = fopen(__FILE__,"r");
	do {
		c = getc(fp);
		putchar(c);
	}
	while (c != EOF);
	fclose(fp);
	return;
}

int main(){
	printf("\n%s",__FILE__);
	printself();
	printf("\n");
	return 0;
}
