#include<stdlib.h>
#include<stdio.h>
#define size 10
//#include<conio.h>
void enq1(int);
void enq2(int);
void display();
int queue1[size],queue2[size],fronts=-1,rears=-1,frontt=-1,reart=-1;
void enq1(int val1)
{ if(rears==size-1)
  {printf("student queue is full:insertion not possible"); 
  }
else
{if(fronts==-1)
  fronts=0;
  rears++;
 queue1[rears]=val1;
 printf("students are inserted");
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
	while(fronts<=rears)
	{
      printf("\nProcessed : %d\n", queue1[fronts]);
      fronts++;
	}
   }
   else{
      while(frontt<=reart)
	{
      printf("\nProcessed : %d\n", queue2[frontt]);
      frontt++;
	}
	while(fronts<=rears)
	{
      printf("\nProcessed : %d\n", queue1[fronts]);
      fronts++;
	}
   }
}

void display(){
   int i;
   if(reart == -1)
      {printf("\nno teacher in queue!!!\n");
       printf("studnets\n");
       for(i=fronts; i<=rears; i++)
	 printf("%d\t",queue1[i]);
}
   else{
      int i;
      printf("teahcers\n");
      for(i=frontt; i<=reart; i++)
	 printf("%d\n",queue2[i]);
      printf("students\n");
      //if(rears == -1)
       //{
      for(i=fronts; i<=rears; i++)
	 printf("%d\t",queue1[i]);
      // }
   }
}

int main()
{ int val1,val2,ch1,ch2,ch3;
  while(1)
  { printf("*********menu***********\n");
    printf("press1: insert student or teacher\n");
    printf("press2: pop student or teacher\n");
    printf("press3: to display\n");
    printf("enter your choice\n");
    scanf("%d",&ch1);
    switch(ch1)

    { case 1:
      printf("press1: to insert student\n");
      printf("press2: to insert teacher\n");
       scanf("%d",&ch2);  
       switch(ch2)
      { case 1: 
         printf("enter the values to insert\n");
         scanf("%d",&val1);
         enq1(val1);
         break;
        case 2:
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
