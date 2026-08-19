class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        set<pair<int, int>> visited;
        visited.insert({x, y});
        for (char dir : path) {
            x += dir == 'E';
            x -= dir == 'W';
            y += dir == 'N';
            y -= dir == 'S';
            if (visited.count({x, y})) {
                return true;
            }
            visited.insert({x, y});
        }
        return false;
    }
};
