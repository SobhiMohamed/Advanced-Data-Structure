#include <iostream>
using namespace std;
template<class T>
struct node{
    node* left;
    node* right;
    node* parent;
    T data;
};

class B_Tree{
private:

};
int main()
{
    node<int>t,v,c;
    t.data=45;
    c.data=111;
    v.data=555;
    t.left=&v;
    t.left=&c;
    cout<<t.left->data;
}