# leetcode-solutions
leetcode questions with 100% time and efficient

class Solution {
public:
    int compress(vector<char>& chars) {
         int i = 0, count = 1;
        for (int j = 1; j <= chars.size(); j++) {
            // if the search was over, or j is pointing to a new character
            if (j == chars.size() || chars[j] != chars[j - 1]) {
                chars[i++] = chars[j - 1];
                if (count > 1) {
                    // convert the number to a string and loop through individual chars
                    for (const auto& c: to_string(count)) {
                        chars[i++] = c;
                    }
                }
                // reset the counter
                count = 0;
            }
            count++;
        }
        return i;
    }
};
