#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:        
        Node * p= NULL;
      Node* insert(Node *head,int data)
      {
          Node n = Node(data);
          cout<<"n.data="<<n.data<<endl;
          if(head==NULL){
              head = &n;
              p = &n;
              return head;
          } else {
              // need to get prev n.next and point to this n
              p->next = &n;
              return head;
          }
      }
      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}