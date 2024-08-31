#include <stdio.h>
#include <stdlib.h>
#include "linked_int.h"

 node* insert_in_beginig(node *start , int data)
 {
      node*temp=(node*)malloc(sizeof(node));

      if(temp !=NULL)
      {
        temp ->info = data;
        temp->link  = start;
        start       = temp;
      }
      return start;
 }
void insert_in_end(node *start , int data)
 {
     node *temp=(node*)malloc(sizeof(node));
     if(temp !=NULL)
     {
         temp->info = data;
         node *ptr=start;
         while(ptr->link !=NULL)
         {
             ptr=ptr->link;

         }
          ptr->link=temp;
          temp->link=NULL;

     }


 }
 node* creat_list(node * start)
 {
     int n,data,data1;
     printf("enter your number of node = ");
     scanf("%d",&n);
     printf("enter your FRIST data = ");
      scanf("%d",&data);
    start=  insert_in_beginig(start,data);
     for(int i=0;i<n-1;i++)
     {
         printf("enter your NEXT data = ");
         scanf("%d",&data1);
        insert_in_end(start,data1);
     }
     return start;

 }

 void display_list(node*start)
 {
     if(start==NULL)
     {
         printf("link is empty");
         return;
     }
      node *ptr=start;
     while(ptr!=NULL)
         {

             printf("%d   ",ptr->info);
             ptr=ptr->link;


         }
 }

   node* delet_list(node * start,int data)
   {
       node *temp=start;
       node * ptr = start;
       if(start->info==data)
       {
           temp=start;
           start=start->link;
           free(temp);

       }
       else{
        while(ptr->link !=NULL)
        {
            if(ptr ->link->info==data)
            {
                break;
            }
            ptr=ptr->link;
        }
        if(ptr->link==NULL)
        {
            printf("NOT");
        }
        else{
                temp=ptr->link;
            ptr->link=temp->link;
        free(temp);
        }
       }
        return start;
   }

