#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node {
int key;
struct node* left, *right;

};
struct node* newkey(int key){
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->key=key;
temp->right=temp->left=NULL;
return temp;
}
struct node* insert(struct node *r,int key){
if(r==NULL){
    return newkey(key);
}
else if(key<r->key){
    r->left=insert(r->left,key);

}
else if(key>r->key){
   r->right= insert(r->right,key);
}
return r;
}
int main(){
struct node *root =NULL;
root=insert(root,50);

insert(root,30);
cout<<root->left->key;
}
