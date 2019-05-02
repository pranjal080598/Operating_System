#include<stdio.h>
#include<conio.h>
void main()
{

	char c;
	FILE *fp;
	clrscr();
	fp=fopen("pran","w");
	printf("enter data\n");
	c=getchar();
	while(c!='.')
	{
		putc(c,fp);
		c=getchar();
	}
	fclose(fp);
	fopen("pran","r");
	printf("entered data :\n");
	while(c!=EOF)
	{
		c=getc(fp);
		printf("%c",c);
	}
	fclose(fp);
	fp=fopen("pran","a");
	printf("\nenter data\n");
	c=getchar();
	while(c!='.')
	{
		putc(c,fp);
		c=getchar();
	}
	fclose(fp);
	fopen("pran","r");
	printf("entered data is:\n");
	while(c!=EOF)
	{
		c=getc(fp);
		printf("%c",c);
	}
	fclose(fp);
	getch();
}
