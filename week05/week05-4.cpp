//week05-4.cpp uva10222
#include <stdio.h> //step01: scanf()
#include <iostream> //step02: cout
#include <string> //step03: tolower() find()
using namespace std;
int main()
{   //step06: keyboard keys string
	string s = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c; //step01: input
	while(scanf("%c",&c) == 1){ //step01: input
		c = tolower(c); //step03: tolower(c)
		if(c==' '|| c=='\n')cout << c;//step02: output
		else{
			int i =s.find(c);//step04: find()
			cout << s[i-2];//step05: input s[i-2]
		}
	}
}