class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx_a = 0;
        int l = 0, r = height.size()-1;
        while(l < r){
            int area = (r-l)*min(height[l], height[r]);
            mx_a = max(mx_a, area);
            height[l] < height[r] ? l++ : r--;
        }
        return mx_a;

    }
};

