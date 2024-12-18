//week15-1.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string hello;//S3:string
	int t=1;
	while(cin>>hello){ //S1:input
		if(hello=="#")break;

		cout<<"Case "<<t<<":ENGLISH\n";
		t++; //S4:test case t
	}//S2:outout
}
