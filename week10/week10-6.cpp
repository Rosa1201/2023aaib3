///week10-6.cpp
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int total = 1;
        for(int i=0;i<nums.size();i++){
            //total *= nums[i];
            if(nums[i]>0)total *= 1;
            if(nums[i]<0)total *= -1;
            if(nums[i]==0)total *= 0;
        }
        if(total>0)return 1;
        if(total<0)return -1;
        return 0;
    }
};
