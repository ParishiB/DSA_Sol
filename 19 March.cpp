class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.empty())return 0;
        sort(points.begin(), points.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[1] < b[1];
        });
        int arrows = 1;
        int end = points[0][1];

         for (int i = 1; i < points.size(); ++i) {
            if (points[i][0] > end) {
                arrows++;
                end = points[i][1]; 
            }
        }

        return arrows;
        
    }
};


// go through this greedy solution again
