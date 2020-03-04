/* Computes the height of binary tree with given root.  */
int height(Node* node)
{
   // Your code here
   if(node==NULL)
   return 0;
   else{
       int ldepth = height(node->left);
       int rdepth = height(node->right);
       if(ldepth>rdepth)
       return ldepth+1;
       else
       return rdepth+1;
   }
}
