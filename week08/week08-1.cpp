///week08-1.cpp
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0; //最多錢的人 有多少錢?
        for(auto a : accounts){
            int sum = 0;
            for(auto b : a){
                sum +=b;
            }
            if(sum>ans) ans = sum; //更有錢 就更新
        }
        return ans;
    }
};
