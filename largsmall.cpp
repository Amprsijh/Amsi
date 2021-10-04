#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter size of array\n";
cin>>a;
int ar[a];
cout<<"Enter elements of array\n";
for(b=0;b<a;b++){
cin>>ar[b];
}
cout<<"Enter 1 - Largest\n";
cout<<"Enter 2 - smallest\n";
cin>>c;
if(c==1){
for(b=0;b<a;b++){
if(ar[0]<ar[b]){
ar[0]=ar[b];
}}
cout<<""<<ar[0]<<" is largest\n";
}
else if(c==2){
for(b=0;b<a;b++){
if(ar[0]>ar[b]){
ar[0]=ar[b];
}}
cout<<""<<ar[0]<<" is smallest\n";
}
return 0;
}