#include <bits/stdc++.h>

using namespace std;
vector<int> helper(int n, vector<int> &v, vector<vector<int>> &ans)
{
    if (n == 1)
    {
        v.push_back(1);
        ans.push_back(v);
        return v;
    }
    vector<int> k = helper(n - 1, v, ans);
    vector<int> temp;
    temp.push_back(1);
    for (int i = 0; i < k.size() - 1; i++)
    {
        int j = k[i] + k[i + 1];
        temp.push_back(j);
    }
    temp.push_back(1);
    ans.push_back(temp);
    return temp;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<vector<int>> ans;
    vector<int> l = helper(n, v, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << "  ";
        }
        cout << endl;
    }
}