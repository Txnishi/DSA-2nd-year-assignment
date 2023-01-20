class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        unordered_map<int, int>mp;

        vector<int>dupe;
        
        for(int i = 0; i<nums.size(); i++){
            if(mp.find(nums[i]) != mp.end()){
                mp[nums[i]]++;
            }else{
                mp[nums[i]]=1;
            }
        }

        for(auto j: mp){
            if(j.second>1){
                dupe.push_back(j.first);
            }
        }

        return dupe;

    }
};
