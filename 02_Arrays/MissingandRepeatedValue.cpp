//Problem:Find The Repeated and Missing value
//Platform:Leetcode
//Difficulty:Easy
//Language:c++;
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n = grid.size();
        int total = n * n;

        vector<int> freq(total + 1, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                freq[grid[i][j]]++;
            }
        }

        int repeated = -1;
        int missing = -1;

        for (int i = 1; i <= total; i++) {
            if (freq[i] == 2)
                repeated = i;

            if (freq[i] == 0)
                missing = i;
        }

        return {repeated, missing};
    }
};
int main() {

    vector<vector<int>> grid = {
        {1, 3},
        {2, 2}
    };

    Solution obj;

    vector<int> ans = obj.findMissingAndRepeatedValues(grid);

    cout << "Repeated: " << ans[0] << endl;
    cout << "Missing: " << ans[1] << endl;

    return 0;
}