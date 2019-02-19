int maxSumReturn(map<int, vector<int>> B){
    long long sum =-1;
    int index;
    for(auto i:B){
        long long x =0;
        for(auto j:i.second){
            x+=j;
        }
        if(x>sum) {
        sum = x;
        index = i.first;
        }
    }
    
    return index;
}

vector<int> Solution::maxset(vector<int> &A) {
    map<int,vector<int>> B;
    vector<int> temp;
    int x = 0;
    int i,index;
    for(i=0; i<A.size(); i++){
        if(A[i]>=0){
            // temp.push_back(A[i]);
            index = i;
            // cout<<"Index is :"<<index;
            break;
        }
    }
    // if(i==A.size()){ return NULL; }
    
    for(int j=index; j<A.size(); j++ ){
        if(!A.empty() && A[j]<0){
            B[x] = temp;
            x++;
            temp.clear();
        }
        if(A[j]>=0){
            // cout<<"Pushing Back "<<A[j]<< "at x=" <<x;
            temp.push_back(A[j]);
        }
    }
    
    if(!temp.empty()){
        B[x] = temp;
        temp.clear();
    }
    
    int y = maxSumReturn(B);
    
    return B[y];
}
