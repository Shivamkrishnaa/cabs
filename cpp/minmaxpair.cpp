#include<stdio.h>

using namespace std;
struct pair{
int min;
int max;
};
struct pair minma(int arr[],int n){
struct pair p;
p.min=0;
p.max=0;
for(int i=0;i<n;i++){
    if(arr[i]<p.min){
    p.min=arr[i];
    }
}
for(int i=0;i<n;i++){
    if(arr[i]>p.max){
    p.max=arr[i];
    }
}
return p;
};
int main(){
int arr[100]={1,2,3,4,5};
struct pair s;
int x;
x=6;
s=minma(arr,x);
printf("%d",s.max);
}
