#include<bits/stdc++.h>
using namespace std;

int main(){
float n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
float sum;
for(int i=0;i<n;i++){
sum+=arr[i];
}
cout<<sum/n<<endl;
return 0;
}
