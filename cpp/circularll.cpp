#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
int data;
struct node *next;

};
void append(struct node *p,int x){
struct node *temp;
struct node *star;
star =(struct node*)malloc(sizeof(struct node));
temp=(struct node*)malloc(sizeof(struct node));
struct node *neww;
neww=(struct node*)malloc(sizeof(struct node));
star=p;
temp=p;

while(true){
temp->next=neww;
neww->data=x;
neww->next=star;
if(neww->next==p){
   break;
}
};
}
void print(struct node* p) {
       struct node *star;
star =(struct node*)malloc(sizeof(struct node));
star=p;

do{
    cout<<p->data;
    p=p->next;
}while(p!=star);

}
int main(){
struct node* head;
head=(struct node*)malloc(sizeof(struct node));
head->next=head;
head->data=3;
append(head,6);
append(head,7);
append(head,8);
print(head);
return 0;
}

