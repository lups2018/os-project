#include<stdlib.h>
#include<stdio.h>
#define size 10
void enq1(int,int);
void enq2(int);
void display();
void book(int);
int queue1[size],queue2[size],fronts=-1,rears=-1,frontt=-1,reart=-1;
int stud[10],b2[10];
int count=5;
void enq1(int val1,int c)
{
 if(rears==size-1)
  {printf("student queue is full:insertion not possible"); 
  }
else
{
if(fronts==-1)
  fronts=0;
  rears++;
 queue1[rears]=val1;
 
 printf("students are inserted\n");
//printf("enter book");
stud[rears]=c;
printf("books inserted are %d\n",stud[rears]);
}
}

  
void enq2(int val2)
{ if(reart==size-1)
  {printf("Teacher queue is full:insertion not possible\n"); 
  }
else
{if(frontt==-1)
  frontt=0;
  reart++;
 queue2[reart]=val2;
 printf("Teachers are inserted\n");
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
              printf("\nProcessed student: %d\n", queue1[fronts]);
      fronts++;
      rears=-1;
             } 
      
   }
   else{
      while(frontt<=reart)
	{
      printf("\nProcessed teacher: %d\n", queue2[frontt]);
      frontt++;
	}
	while(fronts<=rears)
	{
      printf("\nProcessed student: %d\n", queue1[fronts]);
      fronts++;
	}
   }
}

void display(){
   int i,j;
   if(reart == -1)
      {printf("\nno teacher in queue!!!\n");
       printf("students!!!books\n");
       for(i=fronts; i<=rears; i++)
       {
	 printf("%d\n",queue1[i]);
         printf("%d\n",stud[i]);
        
       }
       
}
   else{
      int i;
      printf("teahcers!!!\n");
      for(i=frontt; i<=reart; i++)
	 printf("%d\n",queue2[i]);
      printf("students!!!\n");
      for(i=fronts; i<=rears; i++)
	 printf("%d\n",queue1[i]);
   }
}

int main()
{ int val1,val2,ch1,ch2,ch3,c;
  while(1)
  { 
    printf("\tMenu for id's of Student and Teacher\n");
    printf("\t\t|Student|Teacher|\n");
    printf("\t\t|   1   |   2   |\n");
    printf("\t\t|   3   |   4   |\n");
    printf("\t\t|   5   |   6   |\n");
    printf("\t\t|   7   |   8   |\n");
    printf("\t\t|   9   |  10   |\n");
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
         printf("enter the values to insert\n");
         scanf("%d",&val1);
         //enq1(val1);
         printf("enter the books\n");
         scanf("%d",&c);
         enq1(val1,c);
         break;
        case 2:// teacher
         printf("enter the values to insert\n");
         scanf("%d",&val2);
         enq2(val2);
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
