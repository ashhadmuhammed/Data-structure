# include<stdio.h>
# include<stdlib.h>

 int len=0;
    struct queue
    {
        int data;
        struct queue *add;
    };
    
 
   struct queue *root;
   struct queue *current;
   struct queue *temp;
   struct queue *front=NULL;
   struct queue *rear=NULL;


    void enqueue()
   {   
      
       temp=(struct queue*)malloc(sizeof(struct queue));
       printf("\nEnter the element:");
       scanf("%d",&temp->data);
       if(len==0)
           {root=temp;
            current=temp;}
       else
         {  current->add=temp;
            temp->add=NULL;
            current=temp;
            }

        
        
       
       len++;
       return ;
   }

   void display()
   {
       temp=root;
       printf("\n queue is as follows:");
       while(temp!=NULL)
       {
           printf(" %d  ",temp->data);
           temp=temp->add;
       }

       return ;

   }


   void dq()
   {      if(root==NULL){
              printf("UNDERFLOW");}
         else{
          temp=root;
          root=temp->add;
          free(temp);

}
   }


 


   

int main()
{   int choice;
   
  
    
    
    while(choice!=4)
    {
            printf("\n\nMENU");

            printf("\n=>1. Insert new elements to th queue");

            printf("\n=>2. Display  queue elements");

            printf("\n=>3.Delete queue elements");
            printf("\n Enter your choice");
            scanf("%d",&choice);
    

    switch(choice)
    {
        case 1: enqueue();
                 break;
        case 2:display();
                 break;
        case 3:dq();
                 break;
        case 4:exit(0);
        default:printf("invalid");
                
    

    }

    }





  
    free(root);
    return(0);
}
