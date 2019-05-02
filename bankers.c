struct b
{
	int n,tr,ar,rw,s;
};
void main()
{
	struct b p[10];
	int n,i,tr=22,rr=0,j=0;
	clrscr();
	printf("enter limit of processes\n");
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("enter process, resources required and allocated resources\n");
			scanf("%d%d%d",&p[i].n,&p[i].tr,&p[i].ar);
		}
	for(i=0;i<n;i++)
	{
		p[i].rw=p[i].tr-p[i].ar;
	}
	for(i=0;i<n;i++)
	{
		p[i].s=0;
	}
	for(i=0;i<n;i++)
	{
		rr=rr+p[i].ar;
	}
	rr=tr-rr;
	printf("resoureces after one time alocation = %d",rr);
	/*for(i=0;i<n;i++)
	{
		printf("process=%d\nresources required=%d\n allocated resources=%d\n",p[i].n,p[i].tr,p[i].ar);
	} */      printf("\n\n");
	do
	{
		for(i=0;i<n;i++)
		{
			if(p[i].rw<=rr && p[i].s!=1)
			{
				p[i].ar=p[i].ar+p[i].rw;
				rr=rr-p[i].rw;
				printf("remain resource after allocated=%d\n",rr);
				p[i].s=1;
				rr=p[i].tr+rr;
				printf("remaining resource after process execution=%d\n",rr);
				printf("process=%d\nresources required=%d\nallocated resources=%d\n\n",p[i].n,p[i].tr,p[i].ar);
			}
		}
		j++;
	}
	while(j<=n);

	getch();
}

