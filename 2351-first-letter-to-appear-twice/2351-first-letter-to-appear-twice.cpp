class Solution {
public:
    char repeatedCharacter(string s) {
        // unodered set for contains step by 
        // step all ele from str
        unordered_set<char> set;

        // inserting and checking if inserting ele
        // also present in set or not
        for (char ch : s) {
            if (set.contains(ch)) {
                return ch;
            }

            set.insert(ch);
        }

        return 'a';
    }
};