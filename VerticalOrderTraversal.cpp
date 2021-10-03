// Vertical Order Traversal of a Binary Tree (LeetCode)
// Difficulty - Hard
//https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

class Solution
{
public:
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        map<int, map<int, vector<int>>> m;
        queue<pair<TreeNode *, pair<int, int>>> q;

        pair<TreeNode *, pair<int, int>> roo;
        roo.first = root;
        roo.second.first = 0;
        roo.second.second = 0;

        q.push(roo);
        while (!q.empty())
        {
            pair<TreeNode *, pair<int, int>> p = q.front();
            q.pop();

            m[p.second.first][p.second.second].push_back(p.first->val);
            // cout<<p.second.second<<endl;

            if (p.first->left)
            {
                pair<TreeNode *, pair<int, int>> pp;
                pp.first = p.first->left;
                pp.second.first = p.second.first - 1;
                pp.second.second = p.second.second + 1;

                q.push(pp);
            }
            if (p.first->right)
            {
                pair<TreeNode *, pair<int, int>> pp;
                pp.first = p.first->right;
                pp.second.first = p.second.first + 1;
                pp.second.second = p.second.second + 1;

                q.push(pp);
            }
        }

        map<int, map<int, vector<int>>>::iterator itr;

        for (itr = m.begin(); itr != m.end(); ++itr)
        {

            vector<int> a;
            map<int, vector<int>>::iterator itrr;
            for (itrr = itr->second.begin(); itrr != itr->second.end(); ++itrr)
            {
                sort(itrr->second.begin(), itrr->second.end());
                for (int i = 0; i < itrr->second.size(); i++)
                {
                    a.push_back(itrr->second[i]);
                }
            }

            ans.push_back(a);
        }

        return ans;
    }
};