#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node {
int data;
struct node *next;
};
void printt(struct node *s){
while(s!=NULL)
    {
        cout<<s->data<<"->";
        s=s->next;
    }
    cout<<"NULL"<<endl;
}
int coun(struct node *s){
    int i=0;
while(s!=NULL){
        i++;
    s=s->next;
}
return i;
}
struct node * intersect(struct node *f,struct node * s){
int x=coun(f);
int y=coun(s);
int d;
if(x>y){
     d=x-y;
     for(int i=0;i<d;i++){
        f=f->next;
     }
}
else{
        for(int i=0;i<d;i++){
        s=s->next;
     }
     d=y-x;
}
cout<<d;
while(s!=NULL && f!=NULL){
    if(s==f){
        return s;
    }
    s=s->next;
    f=f->next;
}
return NULL;
};
int main(){
struct node* newNode;
struct node * head1=(struct node *)malloc(sizeof(struct node));
head1->data=3;
struct node * head2=(struct node *)malloc(sizeof(struct node));
head2->data=10;

newNode=(struct node *)malloc(sizeof(struct node));
newNode->data=6;
head1->next=newNode;

newNode=(struct node *)malloc(sizeof(struct node));
newNode->data=9;
head1->next->next=newNode;

newNode=(struct node *)malloc(sizeof(struct node));
newNode->data=15;
head1->next->next->next=newNode;

head2->next=newNode;
newNode=(struct node *)malloc(sizeof(struct node));
newNode->data=30;
head2->next->next=newNode;
head2->next->next->next=NULL;
printt(head1);
printt(head2);
struct node * res=NULL;
res=intersect(head1,head2);
cout<<endl<<res->data;
}
