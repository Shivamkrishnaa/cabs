#include<iostream>
#include<stdio.h>
#include<stdlib.h>
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
void push_f(struct node **reff,int data ){
struct node *temp = (struct node *)malloc(sizeof(struct node));
temp->data=data;
temp->next=*reff;
    *reff=temp;
}
void push_l(struct node** reff,int data){
    struct node* temp = (struct node*) malloc(sizeof(struct node));

struct node *last=*reff;

temp -> data=data;
temp -> next=NULL;

if(*reff == NULL){
    *reff = temp;
    return ;
}
while( last->next != NULL ){
    last = last->next;
}
    last->next=temp;
    return;


}
struct node* append(struct node *f,struct node *s)
{
    struct node *res=NULL;
int sum,c;
sum=0;
c=0;
    while(f!=NULL && s!=NULL){
        sum=f->data + s->data + c;
    c=sum/10;
    sum=sum%10;
    push_l(&res,sum);
    f=f->next;
    s=s->next;
    }
    if(c > 0){
    push_l(&res,c);
    }
    return res;
}
int cou(struct node *f){
    int c=0;
do{
    c++;
    f=f->next;
}while(f != NULL);
return c;
}
void pal(struct node *f){
cout<<cou(f);
}
int main(){
struct node *head=NULL;
struct node *res=NULL;
struct node *h=NULL;
push_f(&head,6);
push_f(&head,1);
push_f(&head,7);
push_l(&h,5);
push_l(&h,9);
push_l(&h,2);
res=append(head,h);
printt(head);
printt(h);
printt(res);
pal(res);
}
