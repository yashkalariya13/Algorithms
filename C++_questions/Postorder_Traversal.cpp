/* Complete the function postOrderTraversal given below.
For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

void postOrderTraversal(node *t)
{
    //write your code here;
    if(t == NULL){
      return;
    }
    
    postOrderTraversal(t->left);
    postOrderTraversal(t->right);
    cout<<t->value<<" ";
}
