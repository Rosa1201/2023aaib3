///week12-1.cpp
#include <iostream>
#include <string>
using namespace std;

///struct Node {}; ///都有分號結尾 C語結構
///class Cat {};
struct Node{
    int val;///value縮寫 這個Node裡面的值
};
class Cat {
public:
    string name;///貓名子
};
int main()
{
    Cat cat1;
    cat1.name = "cattie";
    Node node;
    node.val = 1;
}
