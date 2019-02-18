#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
int data;
struct node *next;
};
struct node * add(struct node *f, struct node *s,struct node *r){
//cout<<"add"<<s->data;

return r;
}
void push(struct node** s,int x){
//cout<<s;
struct node * new_node = (struct node *)malloc (sizeof(struct node));
new_node->data=x;
new_node->next=*s;
*s=new_node;
//cout<<endl<<s<<new_node;
}

int main(){
struct node *head=NULL;
//cout<<head<<endl;
push(&head,1);
//cout<<head->data;
push(&head,2);
cout<<head->data;

struct node *sec=NULL;
push(&sec,88);
struct node *res=NULL;
res=add(head,sec,res);
cout<<endl<<res->data;
}
