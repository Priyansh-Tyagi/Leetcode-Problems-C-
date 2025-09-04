class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp = height.size()-1; 
        int maxvol=0;
        while(lp < rp){
            int w = (rp - lp);
            int ht = min(height[lp],height[rp]);
            int currvol = (w*ht);
            maxvol = max(maxvol,currvol);
            (height[lp]<height[rp])?lp++:rp--;
        }
        
        return maxvol;
    }
};