///week12-1.cpp
#include <iostream>
#include <string>
using namespace std;

///struct Node {}; ///������������ C�y���c
///class Cat {};
struct Node{
    int val;///value�Y�g �o��Node�̭�����
};
class Cat {
public:
    string name;///�ߦW�l
};
int main()
{
    Cat cat1;
    cat1.name = "cattie";
    Node node;
    node.val = 1;
}
