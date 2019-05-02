struct pro
{
	int p,a,b,wt,ta,vt;
};
void main()
{
	struct pro o[10];
	struct pro t;
	int n,i,j;
	clrscr();
	printf("enter limit of processes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter process\n");
		scanf("%d",&o[i].p);
		printf("enter arrival time\n");
		scanf("%d",&o[i].a);
		printf("enter burst time\n");
		scanf("%d",&o[i].b);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(o[i].a>o[j].a)
			{
				t=o[i];
				o[i]=o[j];
				o[j]=t;
			}
		}
	}
	o[0].vt=0;
	for(i=1;i<n;i++)
	{
		j=i-1;
		o[i].vt=0;
		while(j>=0)
		{
			o[i].vt=o[j].b+o[i].vt;
			j--;
		}
	}

	o[0].wt=0;
	for(i=1;i<n;i++)
	{
		o[i].wt=o[i].vt-o[i].a;
	}
	for(i=0;i<n;i++)
	{
		o[i].ta=o[i].b+o[i].wt;
	}
	for(i=0;i<n;i++)
	{
		printf("\nprocess %d",o[i].p);
		printf("\narrival time %d",o[i].a);
		printf("\nburst time %d",o[i].b);
		printf("\nWaiting time %d",o[i].wt);
		printf("\nturn around %d",o[i].ta);
	}
	getch();
}