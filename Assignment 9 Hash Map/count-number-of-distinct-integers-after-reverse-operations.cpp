class Solution {
public:

    void reverseInt(vector<int>& arr){

        int len = arr.size();

         for(int i = 0; i< len; i++){

            string a = to_string(arr[i]);

            if(arr[i] < 10){
                arr.push_back(arr[i]);

            }else if(arr[i] >= 10){
                reverse(a.begin(), a.end());
                arr.push_back(stoi(a));
            }
    
        }
    }

    int countDistinctIntegers(vector<int>& nums) {
        
        reverseInt(nums);

        for(int j = 0; j<nums.size(); j++){
            cout<<nums[j]<<" ";
        }cout<<endl;

        unordered_map<int, int>mp;
        int count = 0;

        for(int i = 0; i< nums.size(); i++){
            if(mp.find(nums[i]) != mp.end()){
                mp[nums[i]]++;
            }else{
                mp[nums[i]] = 1;
            }
        }

        for(auto a: mp){
            count++;
        }



        return count;

    }
};
