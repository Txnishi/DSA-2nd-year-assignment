class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        unordered_map<char, int>mp;

        int count = 0;

        for(int k = 0; k< jewels.length(); k++){
            mp[jewels[k]] = 0;
        }
        
        for(int i = 0; i< stones.length(); i++){
            if(mp.find(stones[i]) != mp.end()){
                mp[stones[i]]++;
            }
        }

        for(auto j: mp){
            count += j.second;
        }


        return count;
    }
};
