
#include <iostream>
#include<queue>
using namespace std;

class Node{
  public:
	int data;
	Node* left;
	Node* right;

	Node(int val) {
	  this->data = val;
	  this->left = NULL;
	  this->right = NULL;
	}

};

//it returns root node of the created tree
Node* createTree() {
  cout << "enter the value for Node: " << endl;
  int data;
  cin >> data;

  if(data == -1) {
	return NULL;
  }
  //Step1: create Node
  Node* root = new Node(data);
  //Step2: Create left subtree
  // cout << "left of Node: " << root->data << endl;
  root->left = createTree();
  //Step3: Craete right subtree
  // cout << "right of Node: " << root->data << endl;
  root->right = createTree();

  return root;

}

void preOrderTraversal(Node* root){
  if(root==NULL){
    return;
  }

  cout<<root->data<<" ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){
  if(root==NULL){
    return;
  }

  
  inOrderTraversal(root->left);
  cout<<root->data<<" ";
  inOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
  if(root==NULL){
    return;
  }

  
  postOrderTraversal(root->left);
  
  postOrderTraversal(root->right);
  cout<<root->data<<" ";
}
void LevelOrdertraversal(Node * root){
  queue<Node*>q;
  q.push(root);

  while(!q.empty()){
    Node* front=q.front();
    q.pop();

    cout<<front->data<<" ";

    if(front->left!=NULL){
      q.push(front->left);
    }
    if(front->right!=NULL){
      q.push(front->right);
    }
  }
}

int main()
{
    Node *root = createTree();
    // cout<<root->data<<endl;

    cout<<"Printing PreOrder : ";
    preOrderTraversal(root);
    cout<<endl;

    cout<<"Printing inOrder : ";
    inOrderTraversal(root);
    cout<<endl;

    cout<<"Printing postOrder : ";
    postOrderTraversal(root);
    cout<<endl;

    cout<<"Printing LevelOrderTraversal : ";
    LevelOrdertraversal(root);
    cout<<endl;
    return 0;
}
