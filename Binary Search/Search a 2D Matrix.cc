class Solution {
public:     
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int i = 0, j = mat.size()-1;
        while(i<j){
            int m = (i+j)/2;
            if(mat[m][0] == target || mat[i][0] == target || mat[j][0] == target) return true;
            else if(mat[j][0]<target){
                i = j;
                break;
            }
            else if(mat[m][0] > target) j = m;
            else i = m;
            if(i+1 == j) break;
        }
        vector <int> v(mat[i]);
        i = 0; j = v.size()-1;
        while(i<=j){
            int m = (i+j)/2;
            if(v[m]==target) return true;
            else if (v[m]<target) i = m+1;
            else j = m-1;
        }

        return false;
    }
};