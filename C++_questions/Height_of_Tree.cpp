// Complete the calculateHeight function below.
/* For your reference
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

int calculateHeight(node* node)
{
    //write your code here
    if(node == NULL){
      return 0;
    }else{
      int lDepth = calculateHeight(node->left);
      int rDepth = calculateHeight(node->right);
      
      if(lDepth>rDepth){
        return (lDepth+1);
      }else{
        return (rDepth+1);
      }
    }
}
