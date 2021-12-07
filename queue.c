# include<stdio.h>
# include<stdlib.h>
int rear,front,i,queue[10],max;

void insert(int n)
{
       if (front==-1)
            {
             front=0;
            }
             
        
        if(rear==n-1)
                    { 
                      printf("*************Queue overflow***********************");
                     }

        else  {
               rear=rear+1;
               printf("\nEnter the value:");
               scanf("%d",&queue[rear]);
               }
 return ;
}

void display()
{
        printf("queue is:");
        for(i=front;i<=rear;i++)
        {
            printf("%d |",queue[i]);
        }
return ;
}


void delete()
{ int data;
 if(front>rear || front==-1)
   { 
     printf("**************queue Underflow****************");
     front=-1;
     rear=-1;
     
   }
  else{
          printf("\nDeleting Last element");
          data=queue[front];
          
          front=front+1;
          printf("Deleted element is :%d",data);
        }
 return ;
}



void main()
{   int choice;
    front=rear=-1;
    printf("\nEnter the size of Queue");
    scanf("%d",&max);
    

 while(choice!=4)
{   
    printf("\n\nMENU");

            printf("\n=>1. Insert new elements to the queue");

            printf("\n=>2. Display  queue elements");

            printf("\n=>3.Delete queue elements");
            printf("\n Enter your choice");
            scanf("%d",&choice);

     switch(choice)
    {
        case 1:insert(max);
                 break;
        case 2:display();
                  break;
        case 3:delete();
                 break;
        case 4:exit(front);
        default:printf("invalid");
 }               
    
}



}
