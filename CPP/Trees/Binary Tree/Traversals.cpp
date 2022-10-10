// Binary Tree Inorder Traversal 
//https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution {
public:
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root != NULL)
        {
            inorderTraversal(root -> left);
            ans.push_back(root -> val);
            inorderTraversal(root -> right);
        }
        return ans;
    }
};

// Binary Tree Preorder Traversal
// https://leetcode.com/problems/binary-tree-preorder-traversal/

class Solution {
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root != NULL)
        {
            ans.push_back(root -> val);
            preorderTraversal(root -> left);
            preorderTraversal(root -> right);
        }
        
        return ans;
    }
};

// Binary Tree Postorder Traversal 
// https://leetcode.com/problems/binary-tree-postorder-traversal/

class Solution {
public:
    vector<int> ans;
    
    vector<int> postorderTraversal(TreeNode* root) {
        if(root != NULL) {
            postorderTraversal(root -> left);
            postorderTraversal(root -> right);
            ans.push_back(root -> val);
        }
        return ans;
    }
};

//Level Order Traversal
//https://leetcode.com/problems/binary-tree-level-order-traversal/

//Approach 1
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        
        if(root == NULL) //agar root null h to empty vector return hoga
            return ans;
        
        q.push(root); //root ko to push karna hi padega
        
        vector<int> v; //temp vector for every level data saving
        int size; //size which will help to traverse through each level
        TreeNode * curr; 
        
        while(!q.empty()){
            size = q.size();
            v.clear(); //clearing vector so we can get a fresh vector for every level
            
            for(int i = 0; i < size; i++)
            {
                curr = q.front();
                q.pop();
                v.push_back(curr -> val);
                
                if(curr -> left) q.push(curr -> left);
                if(curr -> right) q.push(curr -> right);
            }
            
            ans.push_back(v);
        }
        
        return ans;
        
    }
};

//Approach 2
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode *> q;
        vector<vector<int>> ans;
        vector<int> v;
        
        if(root == NULL)
            return ans;
        
        q.push(root);
        q.push(NULL); //using null as seprator
        
        while(!q.empty())
        {
            TreeNode * temp = q.front();
            q.pop();
            
            if(temp == NULL){
                ans.push_back(v);
                v.clear();
                
                if(!q.empty()){
                    q.push(NULL);
                }
            } else {
                v.push_back(temp -> val);
                
                if(temp -> left){
                    q.push(temp -> left);
                }
                
                if(temp -> right){
                    q.push(temp -> right);
                }
            }
        }
        return ans;
    }
};