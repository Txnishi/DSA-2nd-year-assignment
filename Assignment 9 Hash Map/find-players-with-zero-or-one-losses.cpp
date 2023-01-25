class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {

        map<int, int>mp;

        vector<vector<int>>ans;


        for(int i =0; i< matches.size(); i++){
            mp[matches[i][1]]++;
        }
        for(int s =0; s< matches.size(); s++){
            if(mp.find(matches[s][0]) == mp.end()){
                mp[matches[s][0]] = 0;
            }
        }

        for(auto j: mp){
            cout<<j.first<<" "<<j.second<<endl;
        }
        vector<int>temp;
        vector<int>pemt;

        for(auto k: mp){
            if(k.second == 0){
                temp.push_back(k.first);
            }
        }

        for(auto t: mp){
            
            if(t.second == 1){
                pemt.push_back(t.first);
            }
        }

        ans.push_back(temp);
        ans.push_back(pemt);
        
        return ans;
        
    }
};
