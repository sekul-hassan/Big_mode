#include<iostream>
using namespace std;
#define nall NULL
struct node
{
    int val;
    node *next;
};
node *root = nall;
void app(int x)
{
    if(root==nall){
        root = new node();
        root->val = x;
        root->next = nall;
    }
    else{
        node *cnode = root;
        while(cnode->next!=nall){
            cnode = cnode->next;
        }
        node* nnode = new node();
        nnode->val = x;
        nnode->next = nall;

        cnode->next = nnode ;
    }
}
void print()
{
    node *cnode = root ;
    while(cnode!=nall){
        cout<<cnode->val<<" ";
        cnode = cnode->next;
    }
}
int main()
{
    cout<<"Enter the number of element " ;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        app(x);
    }
    print();
}
