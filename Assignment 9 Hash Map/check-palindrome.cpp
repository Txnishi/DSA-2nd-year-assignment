int Solution::solve(string A) {
    
    map<char, int>mp;
    
    for(char i:A)
    {
        mp[i]++;
    }
    int count=0;
    for(auto j: mp){
        if(j.second%2!=0)
            count++;
        if(count >1){
            return 0;
        }
    }
    
    return 1;
    
}
