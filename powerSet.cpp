void backtracking(int start, vector<vector<int> >& result, vector<int>& A, vector<int>& row)
{
    int size = A.size();
    if (start >= size)
    {
        result.emplace_back(row);
        return;
    }
    
    backtracking(start+1, result, A, row);
    
    row.emplace_back(A[start]);
    backtracking(start+1, result, A, row);
    row.pop_back();
}
vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<vector<int> > result;
    sort(A.begin(), A.end());
    vector<int> row;
    backtracking(0, result, A, row);
    sort(result.begin(), result.end());
    return result;
}
