#include<stdio.h>
#include<conio.h>
struct p
{
int at,bt;
char pr[20];
};
void main()
{
	struct p a[100],temp,q[100];
	int i,j,n,front,rear,tl,range,tq,frontq,rearq,s;
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
	printf("ENTER TIME QUANTUM\n");
	scanf("%d",&tq);
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

		 }
	 }
	 frontq=0;
	 rearq=0;
	 front=0;
	 range=0;
	 rear=n-1;
	 q[rearq]=a[0];
	 rearq++;
	 while(tl!=0)
	  {     s=0;
		printf("| %s |",q[frontq].pr);
			if(q[frontq].bt<=tq)
			{
			tl=tl-q[frontq].bt;
			range=range+q[frontq].bt;
			front++;
			}
			else
			{
			tl=tl-tq;
			q[frontq].bt=q[frontq].bt-tq;
			range=range+tq;
			front++;
			s=1;
			}
			if(front<n)
			{
				for(i=front;a[i].at<=range && i<n;i++)
				{
				 q[rearq]=a[i];
				 rearq++;
				 front++;
				}
			}
			 if(s==1)
			 {

			  q[rearq]=q[frontq];
			  rearq++;
			  }
		   frontq++;
			 if(front<n)
			 {
			  q[rearq]=a[front];
			  rearq++;
			  }

	 }
getch();
}