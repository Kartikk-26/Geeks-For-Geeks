class Solution
{
    public:
        Node* insert(Node* node, int data) {
        
        if(node==nullptr){
                node = new Node(data);
                return node;
            }
            
            if(node->data>data){
                // left sub tree
                node->left = insert(node->left,data);
            }
            
            if(node->data<data){
                // left sub tree
                node->right = insert(node->right,data);
            }
            
            return node;    // Your code goes here
    }

};
