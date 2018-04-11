#include<stdlib.h>
#include<stdio.h>
#define size 10
void enq1(int,int);
void enq2(int,int);
void display();
int queue1[size],queue2[size],fronts=-1,rears=-1,frontt=-1,reart=-1;
int s[10],b[10];
void enq1(int val1,int sb)
{ if(rears==size-1)
  {printf("student queue is full:insertion not possible"); 
  }
else
{if(fronts==-1)
  fronts=0;
  rears++;
 queue1[rears]=val1;
 s[rears]=sb;
}
}
void enq2(int val2,int tb)
{ if(reart==size-1)
  {printf("Teacher queue is full:insertion not possible\n"); 
  }
else
{if(frontt==-1)
  frontt=0;
  reart++;
 queue2[reart]=val2;
 b[reart]=tb;
 
}
}
void process(){
   if(reart == -1)
     {
      printf("no teacher in queue to process!\n");
	if(rears == -1)
       {
         printf("no student in queue to process!\n");
 	} 
        else{
              while(fronts<=rears)
	{
      printf("\nProcessed student: %d\n", queue1[fronts]);
      fronts++;
	}
             } 
      
   }
   else{
      while(frontt<=reart)
	{
      printf("\nProcessed teacher: %d\n", queue2[frontt]);
      frontt++;
	}
	if(rears==-1)
		printf("No Student in Queue\n");
	else
	{
	while(fronts<=rears)
	{
      printf("\nProcessed student: %d\n", queue1[fronts]);
      fronts++;
	}
	}
   }
rears=-1;
reart=-1;
}

void display(){
   int i;
   if(reart == -1)
      {printf("\nno teacher in queue!!!\n");
	if(rears==-1)
		printf("No Student in Queue\n");
	else
{
	printf("students!books\n");
       for(i=fronts; i<=rears; i++)
	 {printf("%d|",queue1[i]);
          printf("%d\n",s[i]);
          }
}
}
   else{
      int i;
      printf("teachers!books\n");
      for(i=frontt; i<=reart; i++)
	 {printf("%d|",queue2[i]);
          printf("%d\n",b[i]);
          }
	if(rears==-1)
		printf("No Student in Queue\n");
	else
{
      printf("students!books\n");
      for(i=fronts; i<=rears; i++)
	 {printf("%d|",queue1[i]);
          printf("%d\n",s[i]);
          }
}
   }
}

int main()
{ int val1,val2,ch1,ch2,ch3,n,sb,tb;
  while(1)
  { 
    printf("\tMenu for id's of Student and Teacher\n");
    printf("\t\t|Student|Teacher|\n");
    printf("\t\t|   1   |   2   |\n");
    printf("\t\t|   3   |   4   |\n");
    printf("\t\t|   5   |   6   |\n");
    printf("\t\t|   7   |   8   |\n");
    printf("\t\t|   9   |  10   |\n");
    printf("\t\t|  11   |  12   |\n");
    printf("\t\t|  13   |  16   |\n");
    printf("\t\t|  15   |  18   |\n");
    printf("\t\t|  17   |  19   |\n");
    printf("\t\t|  19   |  20   |\n");
    printf("\t\tMenu\n");
    printf("1-press1: insert student or teacher on queue.\n");
    printf("2-press2: process student or teacher on library counter.\n");
    printf("3-press3: to display both the queues.\n");
    printf("\t\tenter your choice\n");
    scanf("%d",&ch1);
    switch(ch1)

    { case 1:
      printf("1-press1: to insert student\n");
      printf("2-press2: to insert teacher\n");
       scanf("%d",&ch2);  
       switch(ch2)
      { case 1: 
         printf("enter the no of students\n");
	scanf("%d",&n);
	while(n>0)
	{
        A:printf("Student id\n");
        scanf("%d",&val1);
        printf("Books\n");
        scanf("%d",&sb);
	if(val1<=20 && val1>=1 && val1%2==1)
         enq1(val1,sb);
	else
	{
	printf("Invalid id\n");
	goto A;
	}
	n--;
	}
	printf("students are inserted\n");
         break;
        case 2:
         printf("enter the no of teachers\n");
	scanf("%d",&n);
	while(n>0)
	{
        printf("Teachers id\n");
        B:scanf("%d",&val2);
        printf("Books\n");
        scanf("%d",&tb);
	if(val2<=20 && val2>=2 && val2%2==0)
         enq2(val2,tb);
	else
	{
	printf("Invalid id\n");
	goto B;
	}
	n--;
	}
	printf("Teachers are inserted\n");
         break;
       }
      break;
      case 2:
       process();
       break;
      case 3:
      display();
      break;
      case 4:
      exit(0);
      default: printf("wrong choice\n");
}
}
}
