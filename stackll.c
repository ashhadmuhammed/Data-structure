# include<stdio.h>
# include<stdlib.h>

   int len=0;
    struct stack
    {
        int data;
        struct stack *next;
    };
    
  
   struct stack *root=NULL;
   struct stack *current=NULL;
   struct stack *temp=NULL;
    
void push()
   { 
       temp=current;
       current=(struct stack*)malloc(sizeof(struct stack));
       printf("\nEnter the element:");
       scanf("%d",&current->data);
       current->next=NULL;
      

       if(len==0)
       { 
           root=current;
           len++;
           return;
       }
       else{
           temp->next=current;
           
        }
        len++;
        return;
    }
        
        void display()
   {
       temp=root;
       printf("\n Linked list is as follows:");
       while(temp!=NULL)
       {
           printf("[ %d ]-> ",temp->data);
           temp=temp->next;
       }
        
       return ;

   }


           void pop()
   {
      

       if(root==NULL)
        {
            printf("\n\nStack Underflow");
            return;
        }
        if(root==current)
        {printf("\n Deleted element is:%d",current->data);
            free(current);
            root=NULL;
            return;
        }

        
       temp=root;
       while(temp->next!=current)
       {
         temp=temp->next;
         
       }
       temp->next=NULL;
       printf(" Deleted element is:%d",current->data);
       free(current);
       current=temp;
       len--;
      
    
       return;
      
   }


int main()
{   int choice;
    
    
    while(choice!=4)
    {
            printf("\n\nMENU");

            printf("\n=>1. Insert new elements to the stack");

            printf("\n=>2. Display  stack elements");

            printf("\n=>3.Delete stack elements");
            printf("\n Enter your choice");
            scanf("%d",&choice);
    

    switch(choice)
    {
        case 1: push();
                 break;
        case 2:display();
                 break;
        case 3:pop();
              break;
        case 4:exit(0);
        default:printf("invalid");
                
    

    }

    }





  
    
    return(0);
}
