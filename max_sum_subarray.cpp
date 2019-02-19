int Solution::maxSubArray(const vector<int> &A) {
    
    
    int sum = -1;int index;
    
    for(int i=0; i<A.size(); i++){
        if(A[i]>=0){
            break;
        }
        index = i;
    }
    
    if(index==A.size()-1){
        if(A[index]<0){
            auto min =max_element(A.begin(), A.end());
            return *min;
        }
    }
    sum = (A[0]>0)?A[0]:0;
    int max_sum = sum;
    
    for(int i=1 ;i<A.size(); i++){
        sum = ((A[i]+sum)>0)?(A[i]+sum):0;
        max_sum = (sum>max_sum)?sum:max_sum;
    }
    return max_sum;
}
