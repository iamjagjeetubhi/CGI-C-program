#include<iostream>
using namespace std;

int main()
{
cout<<"Content-Type: text/html \n\n";
cout<<"<html><head><title> Check the Number</title></head>";
cout<<"<body bgcolor = white ><form action=http://202.164.53.122/~iamjagjeetubhi/cgi-bin/fact.out method=get><center><p> <h3>Enter any Number</h3></p><input type=text name=n><br><input type=text name=m><br><p><h4><input type = submit value= multiply></h4> </p></form></center></body></html>";
return 0;
}
