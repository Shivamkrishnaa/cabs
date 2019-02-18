
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
int data;
struct node *next;
};

void print(struct node *p){
while(p != NULL){
    printf(" %d ", p->data);
    p=p->next;
}
}

void count(struct node *p){
    int count;
    count =0;
while(p!=NULL){
    p=p->next;
    count++;
}
cout<<count;
}

int append(int x,struct node* p){
    struct node* temp=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
while(true){
if(p->next==NULL)
  {
     p->next=temp;
    temp->data=x;
    temp->next=NULL;
    return 0;
  }
p=p->next;
}
}
void del(struct node* p,int x){
struct node* temp=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    struct node* h=NULL;
    h=(struct node*)malloc(sizeof(struct node));
    struct node* neww=NULL;
    neww=(struct node*)malloc(sizeof(struct node));
h=p;
while(h->next != NULL){
    neww=h->next;
    if(neww->data== x){
        temp=neww->next;
        h->next=temp;
        neww->next=NULL;
    }
    else
         h=h->next;

}
}
int dub(struct node* start){
    cout<<start->next;
    struct node *ptr1, *ptr2, *dup;
    ptr1 = start;

    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL)
    {
        ptr2 = ptr1;

        /* Compare the picked element with rest
           of the elements */
        while (ptr2->next != NULL)
        {
            /* If duplicate then delete it */
            if (ptr1->data == ptr2->next->data)
            {

                /* sequence of steps is important here */
                dup = ptr2->next;

                ptr2->next = ptr2->next->next;

                delete(dup);
            }
            else /* This is tricky */
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}
void kth(struct node * start,int k){
    struct node *ptr;
    int i;
    i=0;
    ptr=start;
while(ptr!=NULL){
    ptr=ptr->next;

i++;
}
cout<<"count"<<i-k+1;
int j;
j=i-k+1;
while(j!=0){

}

}
int main(){
struct node* head=NULL;
struct node* second=NULL;
struct node* third=NULL;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
head->data=1;
head->next=NULL;




append(2,head);
append(3,head);
append(4,head);
append(5,head);
append(4,head);
append(2,head);
append(6,head);
append(7,head);
append(8,head);
append(9,head);
print(head);
cout<<endl;
dub(head);
cout<<endl;
print(head);
kth(head,3);
return 0;

}
