void main()
{
	int b[3],i,r=0,f=0,ch;
	clrscr();
	for(i=0;i<3;i++)
	{
		b[i]=0;
	}
	do
	{
		printf("enter element\n");
		scanf("%d",&b[r]);
		r++;
		if(r==3)
		{

			r=0;
		}
		printf("ans is\n");
		for(i=0;i<3;i++)
		{

			printf("%d\n",b[i]);
		}
		printf("do you want to enter new process then press 1\n");
		scanf("%d",&ch);
	}
	while(ch==1);
	getch();
}
