class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), ans;
        vector<int> f(n);
        f[0] = nums[0];
        ans = f[0];
        for (int i = 1; i < n; i++) {
            f[i] = max(f[i - 1] + nums[i], nums[i]);
            ans = max(ans, f[i]);
        }
        return ans;
    }
};

//设 f(i)f(i) 表示以第 ii 个数字为结尾的最大连续子序列的 和 是多少。
//初始化 f(0)=nums[0]f(0)=nums[0]。
//转移方程 f(i)=max(f(i−1)+nums[i],nums[i])f(i)=max(f(i−1)+nums[i],nums[i])。可以理解为当前有两种决策，一种是将第 ii 个数字和前边的数字拼接起来；另一种是第 ii 个数字单独作为一个新的子序列的开始。
//最终答案为 ans=max(f(k)),0≤k<nans=max(f(k)),0≤k<n。
