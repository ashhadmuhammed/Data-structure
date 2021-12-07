# include<stdio.h>
# include<stdlib.h>
int top,i,stack[10];

void insert(int n)
{       
        int i;
        
        if(top!=n-1){
        top=top+1;
        printf("\nEnter the value:");
        scanf("%d",&stack[top]);
        }

        else{
            printf("*************stack overflow***********************");
        }
 return ;
}


void display()
{
        printf("Stack is:");
        for(i=0;i<=top;i++)
        {
            printf("%d |",stack[i]);
        }
return ;
}


void delete()
{ int data;
 if(top==-1)
   { printf("**************Stack Underflow****************");
     
   }
 else{    
 printf("\nDeleting Last element");
 data=stack[top];
 top-=1;
 printf("Deleted element is :%d",data);
 }
 
}
  

void main()
{   int max,choice;
    top=-1;
    printf("\nEnter the size of stack");
    scanf("%d",&max);
    int stack[max];
 while(choice!=4)
{
    printf("\n\nMENU");

            printf("\n=>1. Insert new elements to th stack");

            printf("\n=>2. Display  stack elements");

            printf("\n=>3.Delete stack elements");
            printf("\n Enter your choice");
            scanf("%d",&choice);

            switch(choice)
    {
        case 1: insert(max);
                 break;
        case 2:display();
                  break;
        case 3:delete();
                 break;
        case 4:exit(0);
        default:printf("invalid");
 }               
    
}



}
