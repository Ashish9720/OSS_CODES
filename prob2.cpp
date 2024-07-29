#include<bits/stdc++.h>
using namespace std;

int main(){
string input;
cin>>input;

int length=input.length();
for(int i=0;i<length/2;i++){
    char temp=input[i];
    input[i]=input[length-i-1];
    input[length-i-1]=temp;
}
cout<<input<<endl;
}
