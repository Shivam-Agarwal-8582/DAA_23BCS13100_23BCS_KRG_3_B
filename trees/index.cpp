#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data= d;
        left=NULL;
        right= nullptr;
    }
};
node* insert(node* &root){
    int data;
    cout<<"enter the data "<<endl;
    cin>>data;

    root= new node(data);

    if(data==-1){
        return nullptr;
    }

    cout<<"the left data "<<data;
    root->left= insert(root->left);
    cout<<"the right data "<<endl;
    root->right= insert(root->right);


    return root;
}

void level_order(node* &root){
    if(root==NULL)
    return ;

    
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* node= q.front();
        q.pop();

       cout<<node->data<<" ";


        if(node->left)
        q.push(node->left);

        if(node->right)
        q.push(node->right);
    }
}

void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    node* root=NULL;
    insert(root);
    inorder(root);
    cout<<endl;
    level_order(root);
    cout<<endl;

    return 0;
}