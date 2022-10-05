// Complete the preOrderTraversal function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

void preOrderTraversal(node *t)
{
    //write your code here;
    if(t == NULL){
      return;
    }
    
    cout<<t->value<<" ";
    preOrderTraversal(t->left);
    preOrderTraversal(t->right);
}
