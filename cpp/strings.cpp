
#include<string>
#include<iostream>
using namespace std;
void length(string s){
    int count;
    int i;
    i=0;
    count=0;
   while(s[i]!='\0'){
    count++;
    ++i;
   }
cout<<i;
}
using namespace std;
int main(){
string s1;
string s2;
getline(cin,s1);
cout<<s1.length();
length(s1);
}
