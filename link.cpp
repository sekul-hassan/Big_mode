#include<iostream>
using namespace std;
#define nall NULL
struct node
{
    int val;
    node *next;
};
node *root = nall ;
node *makeNode(int x)
{
    node *nn = new node();
    nn->val = x;
    nn->next = nall;
    return nn;
}
void app(int x)
{
    node *nn = makeNode(x);
    if(root==nall){
        root = new node();
        root = nn;
    }
    else{
        node *cnode = root ;
        while(cnode->next!=nall){
            cnode = cnode->next;
        }
        cnode->next = nn;
    }
}
void print()
{
    node *nn = root ;
    while(nn!=nall){
        cout<<nn->val<<" ";
        nn = nn->next ;
    }
    cout<<endl;
}
int listsize()
{
    int i = 0;
    node *n = root ;
    while(n!=nall){
        n = n->next;
        i++;
    }
    return i;
}
void napp(int p,int v)
{
    node *nn = makeNode(v);

    node *cnode = root;
    node *N = nall ;
    int i=1;
    while(i<p-1){
        cnode = cnode->next;
        i++;
    }
    N = cnode->next;
    cnode->next = nn;
    cnode->next->next = N;
}
void solve()
{
     int n,x;
    cout<<"Enter the number of elements : ";
    cin>>n;
    while(n--){
        cin>>x;
        app(x);
    }
//    app(2);
//    app(30);
//    app(5);
//    app(2);
//    app(6);
//    app(7);
    cout<<"old list "<<endl;
    print();
    step1:
    cout<<"Enter the position and element for insert : ";
    int p,v;
    cin>>p>>v;
    int ls = listsize();
    if(ls<p){
        system("cls");
        cout<<"Invalid size "<<endl;
        goto step1 ;
    }
    cout<<"New list "<<endl;
    napp(p,v);
    print();
}
int main()
{
   while(1){
    solve();
   }
    return 0;
}
