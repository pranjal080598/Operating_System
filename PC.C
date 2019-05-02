void main()
{
	int f=0,r=-1,q[10],n,i,ch,ch1,max=9,d;
	clrscr();
	do
	{
		printf("1. produce \n 2. consume\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				if(r==max && f==r+1)
				{
					printf("overflow\n");
				}
				else if(f!=0 && r==max)
				{
					r=0;
					printf("enter data\n");
					scanf("%d",&d);
					q[r]=d;
				}
				else if(f==0 && r==max)
				{
					printf("overflow");
				}
				else
				{
					r++;
					printf("enter data\n");
					scanf("%d",&d);
					q[r]=d;
				}
				break;
			}
			case 2:
			{
				if(f==max)
				{
					printf("no items left to consume\n");
				}
				else
				{
					f++;
				}
				break;
			}
		}
		printf("do u want to cont.\n");
		scanf("%d",&ch1);
	}
	while(ch1==1);
	for(i=f;i<=r;i++)
	{
		printf("%d\n",q[i]);
	}

	getch();
}


