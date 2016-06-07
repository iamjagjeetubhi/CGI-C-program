#include <iostream>
#include<stdlib.h> // memory management,communication with the environment(like getenv(),atoi()), converting string to integer.
#include<string.h> // header file defines several functions to manipulate strings
using namespace std;
int main()
{
string value,s,value1,s1; // declaration
s = getenv("QUERY_STRING"); // s stores the query string extracted from URL
int a =s.length(); // a stores length of query string
int b =s.find("n"); // b stores the index number or simply number where “n” is found in the string
value = s.substr(b+2,a); // where s is string and using substr function value after b+2 will be copied from a

int n = atoi(value.c_str()); // atoi() converts string to int which gets stored in n and c_str returns a constant character
s1 = getenv("QUERY_STRING"); // s stores the query string extracted from URL
int a1 = s1.length(); // a stores length of query string
int b1 = s1.find("m"); // b stores the index number or simply number where “m” is found in the string
value1 = s1.substr(b1+2,a1); 
int m = atoi(value1.c_str()); // atoi() converts string to int which gets stored in m
int j;
cout<< "Content-Type : text/html \n\n";
cout<< "<html> <head> <title> Table </title> </head>";
cout<< "<body bgcolor= white ><center> ";
cout<<"First value is"<<endl;
cout<<n<<endl;
cout<<"<br>";
cout<<"Second value is"<<endl;
cout<<m<<endl;
cout<<"<br>";
j=n*m;
cout<<"Result is"<<endl;
cout<<j<<endl;
cout<< " </center></body> </html>";
return 0;
}

