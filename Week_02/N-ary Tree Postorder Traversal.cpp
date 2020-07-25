class Solution {
public:
    vector<int> postorder(Node* root) {
        if (!root) 
        return {};
        vector<int> res;
        stack<Node*> st{{root}};
        while (!st.empty()) {
            Node *t = st.top(); 
            st.pop();
            res.insert(res.begin(), t->val);
            for (Node* child : t -> children) {
                if (child) 
                st.push(child);
            }
        }
        return res;
    }
};