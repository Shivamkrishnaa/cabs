#include<iostream>
#include<string>
using namespace std;
bool permute(string str1,string str2){
int arr[126];
for(int i=0;i<126;i++){
    arr[i]=0;
}
for(int i=0;i<str1.length();i++){
    int var=str1.at(i);
    cout<<var<<" --var--"<<arr[var]<<"before"<<endl;
arr[var]=arr[var]+1;
cout<<arr[var]<<"a"<<endl;
}
for(int i=0;i<str2.length();i++){
    int var=str2.at(i);
    cout<<arr[var]<<"     str2- "<<"before"<<endl;
arr[var]=arr[var]-1;
cout<<arr[var]<<"     str2- "<<"a"<<endl;
}
for(int i=1;i<126;i++){

    if(arr[i]!=0){

        cout<<"   this-->   "<<arr[i]<<" "<<i<<endl;
        return 0;
    }
}
return 1;
}
int main(){
string str1;
string str2;
getline(cin,str1);
getline(cin,str2);
bool a=permute(str1,str2);

cout<<a;
}
