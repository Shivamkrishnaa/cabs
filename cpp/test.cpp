#include<iostream>
#include<string>
using namespace std;
bool check(string str){
bool arr[126]={false};
for(int i=0;i<str.length();i++){
    int var=str.at(i);
        if(arr[var]==1){
            return false;
        }
        arr[var]= 1;

}
return true;
}
int main(){
string str;
getline(cin,str);
bool a=check(str);
cout<<a;
}
