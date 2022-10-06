// Complete the calculateSize function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

int calculateSize(node* node)
{
    //write your code here
    if(node == NULL){
      return 0;
    }else{
      return (1 + calculateSize(node->left) + calculateSize(node->right));
    }
}
