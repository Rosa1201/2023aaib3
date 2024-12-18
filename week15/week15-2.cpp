//week15-2.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string hello;//S3:string
	int t=1;
	while(cin>>hello){ //S1:input
		if(hello=="#")break;

		cout <<"Case "<<t<<": ";
		if(hello=="HELLO")cout<<"ENGLISH\n";
		else if(hello=="HOLA")cout<<"SPANISH\n";
		else if(hello=="HALLO")cout<<"GERMAN\n";
		else if(hello=="BONJOUR")cout<<"FRENCH\n";
		else if(hello=="CIAO")cout<<"ITALIAN\n";
		else if(hello=="ZDRAVSTVUJTE")cout<<"RUSSIAN\n";
		else cout<<"UNKNOWN\n";

		t++; //S4:test case t
	}//S2:outout
}
