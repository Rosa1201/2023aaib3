///�]��range-based for �j�� �����bC++(����)�~���
///�p�G�ϥ�c++(1998�~��c++)�|�L�k���T�sĶ����|�X���j��X����
///CodeBlocks 17.12 ��Setting-compiler �ĲĤG��-std=c++11
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(char i:s){
		if(i!='2')cout<<i;
	}
	cout << endl;
}
