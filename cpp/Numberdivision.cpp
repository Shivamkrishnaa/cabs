#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> g;
int x;
for(int i=0;i<n;i++){
        cin>>x;
    g.push_back(x);
}
int *p=g.data();
*p=NULL;
g.shrink_to_fit();
cout<<*p;
}
