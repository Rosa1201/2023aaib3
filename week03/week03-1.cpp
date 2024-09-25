///因為range-based for 迴圈 必須在C++(之後)才能用
///如果使用c++(1998年版c++)會無法正確編譯執行會出錯迴圈出不來
///CodeBlocks 17.12 裡Setting-compiler 勾第二個-std=c++11
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
