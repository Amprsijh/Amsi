#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"Enter size of binary number\n";  
cin>>n;  
char binary[n+1];
char onescomplement[n+1];  
char twoscomplement[n+1]; 
int carry=1;
cout<<"Enter the binary number\n";  
cin>>binary;  
cout<<"The no. is "<<binary<<"\n";  
cout<<"The ones complement of the binary number is\n";
for(i=0;i<n;i++){
if(binary[i]=='0')  
onescomplement[i]='1';  
else if(binary[i]=='1')  
onescomplement[i]='0';  
}  
onescomplement[n]='\0';  
cout<<""<<onescomplement<<"\n";
cout<<"The twos complement of a binary number is\n"; 
for(int i=n-1; i>=0; i--){
if(onescomplement[i] == '1' && carry == 1){  
twoscomplement[i] = '0';  
}  
else if(onescomplement[i] == '0' && carry == 1){  
twoscomplement[i] = '1';  
carry = 0;  
}  
else{  
twoscomplement[i] = onescomplement[i];  
}}  
twoscomplement[n]='\0';  
cout<<""<<twoscomplement<<"\n";  
return 0;
}