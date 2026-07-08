class Solution {
public:
    int romanToInt(string s) {
        // Create an array or map to store the values of Roman numerals
        int roman[128];
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        
        int total = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            // If the current numeral is smaller than the next numeral, subtract it
            if (i + 1 < n && roman[s[i]] < roman[s[i + 1]]) {
                total -= roman[s[i]];
            } 
            // Otherwise, add its value to the total
            else {
                total += roman[s[i]];
            }
        }
        
        return total;
    }
};
