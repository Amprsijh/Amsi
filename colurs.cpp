#include<iostream>
using namespace std;
int main(){
char a;
cout<<"Enter any character[Only capital letters]\n";
cin>>a;
switch(a){
case 'V':
cout<<"VIOLET\n";
break;
case 'I':
cout<<"INDIGO\n";
break;
case 'B':
cout<<"BLUE\n";
break;
case 'G':
cout<<"GREEN\n";
break;
case 'Y':
cout<<"YELLOW\n";
break;
case 'O':
cout<<"ORANGE\n";
break;
case 'R':
cout<<"RED\n";
break;
default:
cout<<"Your choice does not match\n";
}
return 0;
}