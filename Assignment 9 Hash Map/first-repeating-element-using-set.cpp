int Solution::solve(vector<int> &A) {
    
    set<int>st;
    int len = A.size();
    int ans = 0;
    for(int i = len-1 ; i >= 0; i--){
        if(st.find(A[i]) != st.end()){
            ans = A[i];
        }else{
            st.insert(A[i]);
        }
    }
    
    if(ans == 0){
        return -1;
    }
    
    return ans;
    
    
}
