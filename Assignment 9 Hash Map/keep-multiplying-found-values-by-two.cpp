class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        unordered_set<int>st;

        for(int k = 0; k< nums.size(); k++){
            st.insert(nums[k]);
        }

        for(int i = 0; i< nums.size(); i++){
            if(st.find(original) != st.end()){
                original = original * 2;
            }
        }


        return original;
    }
};
