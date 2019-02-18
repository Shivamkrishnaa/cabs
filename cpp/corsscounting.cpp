#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
char m[500][500];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            char x;
        cin>>x;
        m[i][j]=x;
    }
}
int c=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){


        if('X'==m[i+1][j+1] && 'X'==m[i+1][j+1]&&'X' == m[i][j]&&'X' == m[i-1][j-1]&& 'X' == m[i-1][j+1] && (i-1) >= 0 &&(j-1) >= 0 )
        {
            //cout<<endl<<"i,j"<<i<<j<<m[i][j]<<endl<<"i-1,j-1"<<" "<<(i-1)<<" "<<(j-1)<<m[i-1][j-1];
            c++;
        }
    }

}
cout<<c;
return 0;
}
