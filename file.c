#include<stdio.h>

void main() {
	char ch[100];
	
	FILE *fp;
	fp = fopen("file_name.txt", "r");
	
	//this prints in file
	//fprintf(fp, "A floating point exception is an error that occurs when you try to do something impossible with a floating point number, such as divide by zero.\n\n");

	//this reads from file
	//while (ch!='\n') {
	//	fscanf(fp, "%c", &ch);
	//	printf("%c", ch);
	//}
	
	fgets(ch, 100, "file_name");
	printf("%s", ch);
	
	printf("File created/updated\n");
	fclose(fp);
}
