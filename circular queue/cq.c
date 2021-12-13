



# include<stdio.h>
# include<stdlib.h>
int rear,front,i,cq[10],max;

void insert(int n)
{        if(front==-1)
                    { 
                      front=0;
                      rear=0;
                     }
     
       else if ((rear+1)%n==front)
            {
             printf("Circular Queue overflow");
             return ;
            }
             
        
       
      else if(rear==n-1 && front!=0)

                  {
                       rear=0;


                  }
           
      else  {  if(rear!=n)
                 rear=(rear+1)%n;
               }
              
     printf("\nEnter the value:");
    scanf("%d",&cq[rear]);
 return ;
}

void display(int n)
{  int k=n;  
 if(front==-1)
{
    printf("\nEmpty circular queue");
     return ;
}
        if(front<rear){
        printf("Circular Queue is:");
        for(i=front;i<=rear;i++)
        {
            printf("%d  ",cq[i]);
        }
        }
        else{


               printf("Circular Queue is :");
               for(i=front;i<k;i++)
               {
                
                printf("%d  ",cq[i]);
                if(i==n-1)
                   {
                    k=front;
                    i=-1;
                   }
              }
          }
return ;
}


void delete()
{ int data;
 if( front==-1)
   { 
     printf("\n\n**************Circular Queue Underflow****************");
     front=-1;
     rear=-1;
     
    
     
   }
  else{
      
          printf("\n\nDeleting Last element");
          data=cq[front];
          if (front==rear)
          {
              front=rear=-1;
          }
          else if(front==max-1)
          {
              front=0;
          }
          else{
          front=front+1;
          

          }
printf("Deleted element is :%d",data);
        }
 return ;
}








void main()
{   int choice;
    front=rear=-1;
    printf("\nEnter the size of Circular Circular Queue");
    scanf("%d",&max);
    

 while(choice!=4)
{   
    printf("\n \nMENU\n");

            printf("      1.Enqueue");

            printf("      2.Display");

            printf("      3.Dequeue");
            printf("\n Enter your choice");
            scanf("%d",&choice);

     switch(choice)
    {
        case 1:insert(max);
                 break;
        case 2:display(max);
                  break;
        case 3:delete();
                 break;
        case 4:exit(front);
        default:printf("invalid");
 }               
    
}



}
