#include<iostream>
using namespace std;
int main(){
int a,b,c,d;
cout<<"Enter no. of rows\n";
cin>>a;
cout<<"Enter no. of columns\n";
cin>>b;
int ar[a][b],br[a][b],cr[a][b];
cout<<"Enter elements of matrix A\n";
for(c=0;c<a;c++){
for(d=0;d<b;d++){
cin>>ar[c][d];
}}
cout<<"Enter elements of matrix B\n";
for(c=0;c<a;c++){
for(d=0;d<b;d++){
cin>>br[c][d];
}}
cout<<"Hence matrix A is\n";
for(c=0;c<a;c++){
for(d=0;d<b;d++){
cout<<""<<ar[c][d]<<"\t";
}
cout<<"\n";
}
cout<<"Hence matrix B is\n";
for(c=0;c<a;c++){
for(d=0;d<b;d++){
cout<<""<<br[c][d]<<"\t";
}
cout<<"\n";
}
cout<<"Hence sum of matrix is\n";
for(c=0;c<a;c++){
for(d=0;d<b;d++){
cr[c][d]=ar[c][d]+br[c][d];
cout<<""<<cr[c][d]<<"\t";
}
cout<<"\n";
}
return 0;
}
