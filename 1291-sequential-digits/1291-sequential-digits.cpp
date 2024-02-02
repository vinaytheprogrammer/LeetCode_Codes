#include <vector>
#include <cmath>

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;

        string lowStr = to_string(low);
        string highStr = to_string(high);

        int lowLen = lowStr.size();
        int highLen = highStr.size();

        for (int len = lowLen; len <= highLen; len++) {
            for (int start = 1; start <= 9 - len + 1; start++) {
                string seqStr = "";
                for (int i = 0; i < len; i++) {
                    seqStr += ('0' + start + i);
                }

                int seqNum = stoi(seqStr);

                if (seqNum >= low && seqNum <= high) {
                    ans.push_back(seqNum);
                }
            }
        }

        return ans;
    }
};
