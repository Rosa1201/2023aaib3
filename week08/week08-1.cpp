///week08-1.cpp
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0; //�̦h�����H ���h�ֿ�?
        for(auto a : accounts){
            int sum = 0;
            for(auto b : a){
                sum +=b;
            }
            if(sum>ans) ans = sum; //�󦳿� �N��s
        }
        return ans;
    }
};
