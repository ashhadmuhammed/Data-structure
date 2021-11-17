# include<stdio.h>
# include<stdlib.h>

   
    struct node
    {
        int data;
        struct node *add;
    };
    
   int len=1;
   struct node *root;
   struct node *current;
   struct node *temp;
    
    void insert()
   {   int choice;
       len++;
       current=(struct node*)malloc(sizeof(struct node));
       printf("\nEnter the element:");
       scanf("%d",&current->data);
       temp=root;
        
       int i,pos;
       printf("\nEnter your choice 1.Insert @ last\n 2.Insert @ specified position \n 3.Insert @ beginning ");
       scanf("%d",&choice);
       switch(choice)
       { 
           case 1:while(temp->add!=NULL)
                      {
                       temp=temp->add;
                      }
                        temp->add=current;
                        current->add=NULL;
                 
                   break;
          case 2: 
                 printf("\n Enter the position");
                 scanf("%d",&pos);
                 for(i=2;i<pos;i++)
                 {
                     temp=temp->add;
                 }

                 current->add=temp->add;
                 temp->add=current;
                   break;
          case 3:
                 current->add=root;
                 root=current;
                 break;
                 
        default:printf("invalid");
             


       }
       
       
      
       return ;
   }

   void display()
   {
       temp=root;
       printf("\n Linked list is as follows:");
       while(temp!=NULL)
       {
           printf("[ %d ]-> ",temp->data);
           temp=temp->add;
       }

       return ;

   }


   void delete()
   {      int pos,i;
          temp=root;
          printf("\n Enter the node position to be deleted:");
          scanf("%d",&pos);
          if(pos==1){
              temp=temp->add;
              root->add=NULL;
              root=temp;
          }
          else if(pos==len)

          {
              for(i=2;i<pos;i++)
              {
                  temp=temp->add;
              }
              temp->add=NULL;

          }

          else{
          for(i=2;i<pos;i++)
          {
              temp=temp->add;
          }
          temp->add=temp->add->add;
          }
          

   }


 


   

int main()
{   int choice;
    root=(struct node*)malloc(sizeof(struct node));
    printf("Enter the first element of th linked list");
    scanf("%d",&root->data);
    root->add=NULL;
    
    while(choice!=4)
    {
            printf("\n\nMENU");

            printf("\n=>1. Insert new elements to th linked list");

            printf("\n=>2. Display  linked list elements");

            printf("\n=>3.Delete Linked list elements");
            printf("\n Enter your choice");
            scanf("%d",&choice);
    

    switch(choice)
    {
        case 1: insert();
                 break;
        case 2:display();
                 break;
        case 3:delete();
                 break;
        case 4:exit(0);
        default:printf("invalid");
                
    

    }

    }





  
    free(root);
    return(0);
}
