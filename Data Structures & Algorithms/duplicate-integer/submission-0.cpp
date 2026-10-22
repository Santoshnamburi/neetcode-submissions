class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>seenum;
        for(int num:nums){
            if(seenum.count(num)){
                return true;
            }
            seenum.insert(num);
        }
        return false;
    }
};