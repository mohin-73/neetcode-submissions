class Solution {
public:
    int symbolToInt(char ch) {
        switch (ch) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }
    int romanToInt(string s) {
        int n = ssize(s);
        int intVal = 0;
        for (int i = 0; i < n; ++i) {
            if (i + 1 < n && symbolToInt(s[i]) < symbolToInt(s[i + 1])) {
                intVal -= symbolToInt(s[i]);
            } else {
                intVal += symbolToInt(s[i]);
            }
        }
        return intVal;
    }
};
