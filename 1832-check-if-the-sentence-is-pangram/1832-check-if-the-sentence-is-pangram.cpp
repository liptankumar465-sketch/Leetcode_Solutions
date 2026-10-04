class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool seen[26];

        for (char c : sentence) {
            seen[c - 'a'] = true;
        }

        for (bool b : seen) {
            if (!b)
                return false;
        }

        return true;
    }
};