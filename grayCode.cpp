void generateGrayCode(int n, vector<int> &v){
    if(n==1){
        v.push_back(0);
        v.push_back(1);
        return;
    }
    generateGrayCode(n-1,v);
    int m=v.size();
    int two=1;
    int i=1;
    while(i<n){
        two=two<<1;
        i++;
    }
    for(i=m-1;i>=0;i--)
        v.push_back(v[i]|two);
    
}
vector<int> Solution::grayCode(int A) {
    vector<int> v;
    if(A==0){
        v.push_back(0);
        return v;
    }
    generateGrayCode(A,v);
    return v;
}
