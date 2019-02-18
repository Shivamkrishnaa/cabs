#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node {
int data;
struct node* next;
};
struct node *push(struct node*p,int x){
   struct node *temp=(struct node*)malloc(sizeof(struct node));
   temp->data=x;
   temp->next=p;

   return temp;
}
void print(struct node *p)
while(p!=NULL){
    cout<<"->"<<p->data;
    p=p->next;
}
}
struct node *add(struct node*f,struct node*s){
    struct node *temp=NULL;
    int c=0;
while(f!=NULL && s!=NULL){

   int sum= f->data + s->data + c;

   temp=push(temp,sum%10);
  c=sum/10;
f=f->next;
s=s->next;
}
while(f!=NULL){
   int sum= f->data  + c;
   temp=push(temp,sum%10);
  c=sum/10;
f=f->next;

}

while(s!=NULL){
   int sum= s->data  + c;
   temp=push(temp,sum%10);
  c=sum/10;

s=s->next;
}
if(c!=0){
    temp=push(temp,c);
}
return temp;
};
int rec(struct node *p,int len){

if(p==NULL || len <=1){
    return true;
}
node * temp=NULL;
temp=p;
while(p->next!=NULL){
    if(p->data==temp->data){


        temp=temp->next;
return rec(temp,len-1);
}
else{
return false;
}
}
}
int main () {

  struct node *first=NULL;
  struct node *second=NULL;
  struct node *res=NULL;

first=push(first,9);
first=push(first,1);
first=push(first,1);
second=push(second,2);
second=push(second,9);
second=push(second,5);

res=add(first,second);
print(first);
cout<<endl;
print(second);
cout<<endl;
print(res);
cout<<endl;
cout<<rec(first,3);
}
