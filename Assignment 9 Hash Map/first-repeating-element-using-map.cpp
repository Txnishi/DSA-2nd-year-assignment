int Solution::solve(vector<int> &A) {
    
    map<int , int>mp;
    int len = A.size();
    for(int i = 0; i < len; i++){
           mp[A[i]]++;
    }
    
    for(int j = 0; j< len; j++){
        if(mp[A[j]] > 1){
            return A[j];
        }
    }
    
    return -1;
    
    
}
