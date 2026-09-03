class Solution {
    // s = a b c d e, goal = c d e a b
    // conc = s + s
    // conc = a b c d e a b c d e
    // goal ->    ---------
    // goal present in conc than return true
public:
    bool rotateString(string s, string goal) {

        if (s.size() != goal.size()) {
            return false;
        }

        string concatenated = s + s;

        if (concatenated.find(goal) != string::npos) {
            return true;
        }
        
        return false;
    }
};