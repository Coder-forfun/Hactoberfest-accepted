#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dp[102][102];
    /*
    The possible operations are permitted:
    Insert a character at any position of the string.
    Remove any character from the string.
    Replace any character from the string with any other character.
    */
    int solve(string s1, string s2)
    {
        for (int i = 0; i <= s1.size(); i++)
        {
            for (int j = 0; j <= s2.size(); j++)
            {
                if (i == 0)
                    dp[i][j] = j;
                else if (j == 0)
                    dp[i][j] = i;
                else if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];
                else
                    dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i][j - 1], dp[i - 1][j]));
            }
        }
        return dp[s1.size()][s2.size()];
    }
    int editDistance(string s, string t)
    {

        return solve(s, t);
    }
};

int main()
{
    //calculate minimum number of operations required to convert s to t.
    string s, t;
    cin >> s >> t;
    Solution ob;
    int ans = ob.editDistance(s, t);
    cout << ans << "\n";

    return 0;
}
