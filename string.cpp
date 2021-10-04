#include <cstring>
#include <iostream>
using namespace std;
int main(){
char a[50] = "This is an";
char b[50] = " example";
int c;
char d='m';
char* e;
strcat(a,b);
cout<<""<<a<<"\n";
strcpy(b,a);
cout<<""<<b<<"\n";
cout<<strcmp(a,b);
c=strlen(a);
cout<<""<<c<<"\n";
e=strrchr(b,d);
cout<<e;
return 0;
}