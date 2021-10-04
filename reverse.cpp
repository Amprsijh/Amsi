#include<iostream>
using namespace std;
int main(){
int a,b,c;
c=0;
cout<<"Enter an integer\n";
cin>>a;
while(a!=0){
b=a%10;
c=c*10+b;
a/=10;
}
cout<<"The reversed number is "<<c<<"\n";
return 0;
}