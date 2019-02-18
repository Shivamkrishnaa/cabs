#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int x;
x=10;
int start=0;
int en=3;
x=20;
int *ptr;
ptr=&x;
*ptr=20;
int arr[]={10};
for(int j=0;j<3;j++)
    {
    cin>>arr[j];

}
while(start<en){
    int temp=arr[start];
   arr[start]=arr[en];
    arr[en]= temp;
    start++;
    en--;
}
for(int j=0;j<3;j++)
    {
    cout<<arr[j];

}

//cout<<&x<<endl<<*ptr;
return 0;
}
