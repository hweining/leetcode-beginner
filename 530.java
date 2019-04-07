class Solution {
    public int getMinimumDifference(TreeNode root) {
        prev_ = null;
        min_diff_ = Integer.MAX_VALUE;
        inorder(root);
        return min_diff_;
    }
    
    private void inorder(TreeNode root) {
        if (root == null) return;
        inorder(root.left);
        if (prev_ != null) min_diff_ = Math.min(min_diff_, root.val - prev_);
        prev_ = root.val;
        inorder(root.right);
    }
    
    private Integer prev_;
    private int min_diff_;
}