
#include<bits/stdc++.h>
using namespace std;
string cont(string s1,string s2){
    unordered_map<char, int> m;
string str;
str="";
for(int i;i<s1.length();i++){
    m[s1[i]]=1;
}
for(int i=0;i<s2.length();i++){
    if(m.find(s2[i])==true){

    }
    else{
        str+=s2[i];
    }
}
return str;
}
int main()
{


string s1;
string s2;
getline(cin,s11);
getline(cin,s22);
cout<<cont(s11,s22)

return 0;
}
