//week05-5.cpp leetcode 58.
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);//可將字串string變成cout的iostream
        string word;
        while( ss >> word ){ //一直讀 讀完才離開
            //大括號裡什麼都不做
        }
        return word.length(); //最後殘留的那個數字
    }
};