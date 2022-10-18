#include<stddef.h>
#include<stdio.h>
struct node
{
   int data;
   struct node*next;
};
void append(struct node**,int);
void printlist(struct node*);
void insertatEND(struct node**,int);
struct node** search(struct node*,int);
void insertatgpos(struct node*,int);
void insertatBEG(struct node**,int);
void delatBEG(struct node**);
void delatEND(struct node**);
void delspnode(struct node**,int);
int main()
{
   struct node*t,*q;
   t=NULL;
   append(&t,30);
   append(&t,20);
   append(&t,10);
   insertatEND(&t,40);
   q=search(t,10);
   insertatgpos( q,15);
   insertatBEG(&t,5);
   delatBEG(&t);
   delatEND(&t);
   delspnode(&t,15);
   printlist(t);
   return 0;
}
void append(struct node**p,int item)//To create a list
{
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=item;
    n->next=*p;
    *p=n;
}
void printlist(struct node*p)//To display a list
{
while(p)
{
    printf("%d\n",p->data);
    p=p->next;
}
}
void insertatEND(struct node**p,int item)//To insert at beginning
{
    struct node*n,*r;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=item;
    n->next=NULL;
    if(*p==NULL)
     *p=n;
    else
    {

      r=*p;
       while(r->next!=NULL)
       {
        r=r->next;
       }
       r->next=n;

    }
}
struct node** search(struct node*p,int item)//This function returns the address of that node which contains the desired element
{
    while(p)
    {
        if(p->data==item)
            return p;
        p=p->next;
    }
    return p;
}
void insertatgpos(struct node*p,int item)//To insert a node after a given node
{
    struct node*n;
    if(p)
   {
    n=(struct node*)malloc(sizeof(struct node));
    n->data=item;
    n->next=p->next;
    p->next=n;
   }
}
void insertatBEG(struct node**p,int item)//To insert at beginning
{
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=item;
    n->next=*p;
    *p=n;
}
void delatBEG(struct node**p)//Delete first node
{
    if(p==NULL)
        printf("Underflow");
    else
   {
    struct node*r;
    r=*p;
    *p=r->next;
    free(r);}
}
void delatEND(struct node**p)//Delete last node
{   struct node*t1,*t2;
    if(*p==NULL)
        printf("Underflow");
    else
    {
        t1=*p;
        t2=NULL;
        while(t1->next!=NULL)
        {
            t2=t1;
            t1=t1->next;
        }
        if(t2==NULL)
        {
            *p=NULL;
            free(t1);
        }
        else
        {
            t2->next=NULL;
            free(t1);
        }
    }
}
void delspnode(struct node**p,int item)//Delete the given node
{
    struct node*t,*r;
    t=search(*p,item);
    if(t==NULL)
        printf("Element not found");
    else
    {
      if(*p==t)
            delatBEG(p);
      else
      {
          r=*p;
          while(r->next!=t)
              r=r->next;
          r->next=t->next;
          free(t);
      }
    }
}
