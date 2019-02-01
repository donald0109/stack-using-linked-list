#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class List
{
    private:
        struct node *top;
    public:
        List()
        {
            top=NULL;
        }
        node* cnode(int num)
        {
            struct node *temp;
            temp=new (struct node);
            temp->data=num;
            temp->next=NULL;
            return temp;
        }
        void push(int num)
        {
            struct node *temp;
            temp=cnode(num);
            if(top==NULL)
                top=temp;
            else
            {
                temp->next=top;
                top=temp;
            }
        }

        void pop()
        {
            struct node *a;
            a=top;
            top=top->next;
            delete(a);
        }

        void display()
        {
            struct node *temp;
            temp=top;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
};
int main()
{
    List l;
    int ch,a;
    while(1)
    {
    cout<<"Enter the choice \n 1. push 2. pop 3. display \n";
    cin>>ch;
    switch(ch)
    {
    	case 1:
    	cout<<"Enter the element to insert \n";
    	cin>>a;
    	l.push(a);
    	break;
    	case 2:
    	l.pop();
    	break;
    	case 3:
    	l.display();
    	break;
    	default:
    	return 0;
    }
        }
}
