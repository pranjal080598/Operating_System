void main()
{
	int i,q[3],d,r=0,n,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		q[i]=0;
	}
	printf("enter limit\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter data\n");
		scanf("%d",&d);
		if(q[0]==d || q[1]==d || q[2]==d)
		{
			r++;
		}
		else
		{
			q[r]=d;
			r++;
		}
		if(r==3)
		{
			r=0;
		}
		printf("ans is \n");
		for(j=0;j<3;j++)
		{
			printf("%d\n",q[j]);
		}

	}
	getch();
}


