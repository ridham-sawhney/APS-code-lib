#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int counter1=0,counter2=0;
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
typedef struct tree TREE;
TREE * insert_into_bst(TREE *, int);
void inorder(TREE *);
void preorder(TREE *);
void postorder(TREE *);
TREE * delete_from_bst(TREE *, int);

TREE * insert_into_bst(TREE * root, int data)
{
    TREE *newnode,*currnode,*parent;

    newnode=(TREE*)malloc(sizeof(TREE));

    if(newnode==NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    if(root == NULL) {
        root = newnode;
        printf("Root node inserted into tree\n");
        return root;
    }

    currnode = root;
    parent = NULL;
    while(currnode != NULL) {
        parent = currnode;
        if(newnode->data < currnode->data)
            currnode = currnode->left;
        else
            currnode = currnode->right;

    }

    if(newnode->data < parent->data)
        parent->left = newnode;
    else
        parent->right = newnode;


    printf("Node inserted successfully into the tree\n");
    return root;
}

void inorder(TREE *troot)
{
    if(troot != NULL)
    {
        inorder(troot->left);
        printf("%d\t",troot->data);
        inorder(troot->right);
    }
}


void preorder(TREE *troot)
{
    if(troot != NULL)
    {
        printf("%d\t",troot->data);
        preorder(troot->left);
        preorder(troot->right);
    }
}

void postorder(TREE *troot)
{
    if(troot != NULL)
    {
        postorder(troot->left);
        postorder(troot->right);
        printf("%d\t",troot->data);
    }
}


TREE * delete_from_bst(TREE * root, int data) {
    TREE *currnode, *parent, *successor, *p;
    if (root == NULL) {
        printf("Tree is empty\n");
        return root;
    }
    parent = NULL;
    currnode = root;
    while (currnode != NULL && data != currnode->data) {
        parent = currnode;
        if (data < currnode->data)
            currnode = currnode->left;
        else
            currnode = currnode->right;
    }
    if (currnode == NULL) {
        printf("Item not found\n");
        return root;
    }
    if (currnode->left == NULL)
        p = currnode->right;
    else if (currnode->right == NULL)
        p = currnode->left;
    else {
        successor = currnode->right;
        while (successor->left != NULL)
            successor = successor->left;
        successor->left = currnode->left;
        p = currnode->right;
    }
    if (parent == NULL) {
        free(currnode);
        return p;
    }
    if (currnode == parent->left)
        parent->left = p;
    else
        parent->right = p;
    free(currnode);
    return root;
}

void print_in_degree_root(){
    printf("\nIn degree of root node is : 0");
}

void print_out_degree_root(TREE* root){
    if(root==NULL)
        printf("\nOut degree of root node is : 0");
    if(root->left==NULL  &&  root->right==NULL)
        printf("\nOut degree of root node is : 0");
    if(root->left==NULL  ||  root->right==NULL)
        printf("\nOut degree of root node is : 1");
    else
        printf("\nOut degree of root node is : 2");
}

void number_of_nodes(TREE *troot)
{
    if(troot != NULL)
    {
        number_of_nodes(troot->left);
        counter1++;
        number_of_nodes(troot->right);
    }
}

int arr[10000];

void load_in_order(TREE* root){
    if(root==NULL) return;
    load_in_order(root->left);
    arr[counter2++]=root->data;
    load_in_order(root->right);
}

void load_into_array(TREE* root){
    counter2=0;
    memset(arr,0,sizeof(arr));
    load_in_order(root);
    if(counter2==0){
        printf("\nNo elements present in the BST\n");
        return;
    }
}


void delete_less_than_k(TREE* root){
    int k=0;
    printf("Enter the value of k : ");
    scanf("%d",&k);
    load_into_array(root);
    for(int i=0;i<counter2;i++){
        if(arr[i]<k) delete_from_bst(root,arr[i]);
    }
}

void print_greater_than_k(TREE* root){
    int k=0;
    printf("\nEnter the value of k : ");
    scanf("%d",&k);
    load_into_array(root);
    printf("\nElements greater than k are: \n");
    for(int i=0;i<counter2;i++){
        if(arr[i]>k) printf("%d ",arr[i]);
    }
}

void print_inorder_succ(TREE* root){
    int k=0;
    printf("\nEnter the element : ");
    scanf("%d",&k);
    load_into_array(root);
    int flag=0,flag1=0;
    for(int i=0;i<counter2;i++){
        if(arr[i]==k){
            flag1=1;
            if(i+1<counter2) printf("The inorder successor is : %d",arr[i+1]);
            else{
                flag=1;
                break;
            }
        }
    }
    if(!flag1) printf("\nElement not found");
    else if(flag) printf("\nNo inorder successor found\n");
}


void find_minimum_element(TREE* root){
    if(root==NULL){
        printf("N\no element in the BST\n");
        return;
    }
    load_into_array(root);
    printf("\nThe minimum element in the BST is : %d\n",arr[0]);
}

void count_leaf(TREE* root){
    if(root==NULL) return;
    count_leaf(root->left);
    if(root->left==NULL  &&  root->right==NULL) counter1++;
    count_leaf(root->right);
}

void count_leaf_nodes(TREE* root){
    counter1=0;
    count_leaf(root);
    printf("\nThe number of leaf nodes are : %d\n",counter1);
}

void find_maximum_element(TREE* root){
    load_into_array(root);
    if(counter2==0) return;
    int ans=0;
    for(int i=0;i<counter2;i++){
        if(ans<arr[i]) ans=arr[i];
    }
    printf("\nThe maximum element in the BST is : %d\n",ans);
}

void out_degree_of_leaf(TREE* root){
    printf("The total out degree of the leaf nodes is : 0");
}

int recursive_tree_search(TREE* root,int key){
    if(root==NULL){
        return -1;
    }
    if(root->data==key){
        return 1;
    }
    if(key<root->data){
        return recursive_tree_search(root->left,key);
    }
    else{
        return recursive_tree_search(root->right,key);
    }
}

void print_inorder_predessor(TREE* root){
    counter2=0;
    load_into_array(root);
    if(counter2==0){
        printf("\nNo elements found\n");
        return;
    }
    int key=0,flag=0,flag1=0,ans=0;
    printf("\nEnter the element : ");
    scanf("%d",&key);
    for(int i=0;i<counter2;i++){
        if(key==arr[i]){
            flag=1;
            if(i==0) continue;
            else{
                ans=i-1;
            }
        }
    }
    if(!flag){
        printf("\nElement not found\n");
    }
    else if(!flag1){
        printf("\nNo inorder predessor found\n");
    }
    else{
        printf("\nThe in order predessor is : %d\n",arr[ans]);
    }
}

int main() {
    TREE *root;
    root = NULL;
    int choice = 0, data = 0, count = 0;
    int ans=0;
    while (1) {
        printf("\n1-Insert in BST\n");
        printf("2-Inorder Traversal\n");
        printf("3-Preorder Traversal\n");
        printf("4-Postorder Traversal\n");
        printf("5-Delete from BST\n");
        printf("6-Print in degree of root\n");      ///start   done
        printf("7-Print out degree of root\n");    ///done
        printf("8-Recursive tree search algorithm\n");      ///done
        printf("9-Print number of edges\n");     ///done
        printf("10-Delete all elements from the BST lesser than K\n");    /// Not done
        printf("11-Number of nodes having value greater than K\n");   ///done
        printf("12-Print the in-order successor of the given element\n");    ///done
        printf("13-Find the minimum valued item for the tree\n");    ///done
        printf("14-Count the number of external nodes in the BST\n");   ///done
        printf("15-Print the address of the root node\n");     ///done
        printf("16-Find and print the number of comparisons made to search a given item from the BST\n"); ///Not done
        printf("17-Find the number of nodes present at level 1 of the BST\n");   ///Not done
        printf("18-Implementation of insert_into_bst function using recursion\n");    ///done
        printf("19-Print the number of leaf ndoes in the BST\n");   /// done
        printf("20-Find the memory occupied by the tree in bytes\n");  ///Not done
        printf("21-Find the number of edges between the root node and the largest element in the BST\n");  ///Not done
        printf("22-Print the total out degree of all the leaf nodes\n");   ///done
        printf("23  Find and delete all the duplicate nodes from the tree\n");  ///Not done
        printf("24- Print the in-order predecessor of the given item\n");  ///done
        printf("25-Find the maximum valued item in the tree\n");  ///done


        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice) {

            case 1:
                printf("Enter the item to insert\n");
                scanf("%d", &data);

                root = insert_into_bst(root, data);
                break;

            case 2:
                if (root == NULL)
                    printf("Tree is empty\n");
                else {
                    printf("Inorder Traversal is...\n");
                    inorder(root);
                }
                break;

            case 3:
                if (root == NULL)
                    printf("Tree is empty\n");
                else {
                    printf("Preorder Traversal is...\n");
                    preorder(root);
                }
                break;

            case 4:
                if (root == NULL)
                    printf("Tree is empty\n");
                else {
                    printf("Postorder Traversal is...\n");
                    postorder(root);
                }
                break;

            case 5:
                printf("Enter the item to be deleted\n");
                scanf("%d", &data);

                root = delete_from_bst(root, data);
                break;

            case 6:
                print_in_degree_root();
                break;

            case 7:
                print_out_degree_root(root);
                break;

            case 8:
                printf("\nEnter the element to be searched : ");
                scanf("%d",&ans);
                ans=recursive_tree_search(root,ans);
                if(ans) printf("\nElement found in BST\n");
                else printf("\nElement not found\n");
                break;

            case 9:
                number_of_nodes(root);
                printf("\nThe number of edges in the BST is : %d\n", counter1 - 1);
                counter1 = 0;
                break;

            case 10:
                delete_less_than_k(root);
                break;

            case 11:
                print_greater_than_k(root);
                break;

            case 12:
                print_inorder_succ(root);
                break;

            case 13:
                find_minimum_element(root);
                break;
            case 14:
                counter1=0;
                count_leaf_nodes(root);
                if(root==NULL)
                    printf("\nNo elements in the BST\n");
                else{
                    printf("\nNumber of external nodes : %d\n",counter1+1);
                    counter1=0;
                }
                break;
            case 15:
                if(root==NULL){
                    printf("\nRoot node empty\n");
                }
                else{
                    printf("\nThe address of root is : %p\n",root);
                }

                break;
            case 16:

                break;
            case 17:

                break;
            case 18:

                break;
            case 19:
                count_leaf_nodes(root);
                break;
            case 20:

                break;
            case 21:

                break;
            case 22:

                out_degree_of_leaf(root);
                break;
            case 23:

                break;
            case 24:
                print_inorder_predessor(root);
                break;
            case 25:
                find_maximum_element(root);
                break;

            default:
                printf("Exiting Code.\n");
                exit(0);
        }
    }
    return 0;
}
