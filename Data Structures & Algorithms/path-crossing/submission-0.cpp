class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        set<pair<int, int>> visited;
        visited.insert({x, y});
        for (char dir : path) {
            if (dir == 'N') {
                ++y;
            } else if (dir == 'S') {
                --y;
            } else if (dir == 'E') {
                ++x;
            } else {
                --x;
            }
            if (visited.count({x, y})) {
                return true;
            }
            visited.insert({x, y});
        }
        return false;
    }
};
