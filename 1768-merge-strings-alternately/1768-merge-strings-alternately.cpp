class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int ansLength = word1.length() + word2.length();
        string ans;

        int i = 0;
        while (i < ansLength) {
            // first push str word1 element
            if (i < word1.length()) {
                ans.push_back(word1[i]);
            }
            // second push str word2 element
            if (i < word2.length()) {
                ans.push_back(word2[i]);
            }

            i++;
        }
        
        return ans;
    }
};