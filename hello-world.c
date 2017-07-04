/* This C Program prints the location of this C programming file
   and then it prints the C program itself */

#include <stdio.h>

int printself(){
	FILE *fp;
	char c;
	fp = fopen(__FILE__,"r");
	if (NULL == fp){
		printf("File Open error\n");
		return 1;
	}
	do {
		c = getc(fp);
		putchar(c);
	}
	while (c != EOF);
	fclose(fp);
	return 0;
}

int main(){
	int ret;

	printf("\n");
	printf("%s",__FILE__);
	printf("\n");
	ret = printself();
	printf("printself returned %d",ret);
	return ret;
}
