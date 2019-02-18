#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
char arr[100]="abc ajkas";

int n;
n=8;
for(int i=0;i<n;i++){
    if(arr[i]==' '){
        for(int j=n;j!=i;j--){
            arr[j+2]=arr[j];
        }
    arr[i]='%';
    arr[i+1]='2';
    arr[i+2]='0';
    }

}
for(int i=0;i<10;i++){
    cout<<arr[i];
}
return 0;
}
