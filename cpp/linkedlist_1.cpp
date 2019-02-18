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

void append(int x,struct node* p){
    struct node* temp=NULL;
    temp=(struct node*)malloc(sizeof(struct node));

    p->next=temp;
    temp->data=x;
    temp->next=NULL;

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
int main(){
struct node* head=NULL;
struct node* second=NULL;
struct node* third=NULL;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
head->data=1;
head->next=second;
second->data=2;
second->next=third;
third->data=3;
third->next=NULL;

append(4,third);
print(head);
count(head);
del(head,4);
print(head);
return 0;

}
