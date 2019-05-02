#include<stdio.h>
#include<conio.h>
struct p
{
int at,bt;
char pr[20];
};
void main()
{
	struct p a[10],temp,stack[10];
	int i,temp1,j,n,front,rear,top,tl,tm,range,max_at;
	clrscr();
	tl=0;
	printf("ENTER NUMBER OF PROCESSES\n");
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		printf("ENTER NAME OF PROCESS\n");
		scanf("%s",a[i].pr);
		printf("ENTER ARRIVAL AND BURST TIME OF PROCESS\n");
		scanf("%d%d",&a[i].at,&a[i].bt);
		tl=tl+a[i].bt;
		}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i].at>a[j].at)
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
			else if(a[i].at==a[j].at && a[i].bt>a[j].bt)
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		 }
	 }

	tl=tl-a[0].at;
	 front=0;
	 range=a[0].bt+a[0].at;

	 while(tl!=0)
	  {
		printf("| %s |",a[front].pr);
		tl=tl-a[front].bt;
		front++;

			for(i=front;a[i].at<=range && i<n;i++)
			{
				for(j=i+1;a[j].at<=range && j<n;j++)
				{

					if(a[i].bt>a[j].bt)
					{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
					}
				}
			 }

	      range=range+a[front].bt;

}
	getch();
}