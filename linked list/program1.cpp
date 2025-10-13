#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *first ,*temp,*ttemp,*p;
void init(){
    first=temp=ttemp=NULL;
}
void create_first(int n){
    first=new node;
    first->next=NULL;
    first->data=n;

}
void add_node(int n){
    temp=first;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    ttemp=new node;
    ttemp->next=NULL;
    ttemp->data=n;
    temp->next=ttemp;
}
void display(){
    temp=first;
    while(temp!=NULL){
    cout<<temp->data;
    cout<<endl;
    temp=temp->next;
    }
}
void after_add(int x,int y){
 while(temp->data!=x){
    temp=temp->next;
    ttemp=temp->next;
 }
  p= new node;
 p->data=y;
 p->next=ttemp;
 temp->next=p;

}
void add_before(int x,int y){
    temp=first;
    while(temp->data!=x){
        ttemp=temp;
        temp=temp->next;
    }
    p=new node;
    p->data=y;
    ttemp->next=p;
    p->next=temp;
}
//adding a new node before the very first node of a linked list
void add_before_first(int x){
    temp=new node;
    temp->data=x;
    temp->next=first;
    first=temp;
}
void add_before_last(int x){
    while(temp->next!=NULL){
        ttemp=temp;
        temp=temp->next;
    }
    p=new node;
    p->data=x;
    p->next=temp;
    ttemp->next=p;
}
int main(){
init();
create_first(10);
add_node(20);
add_node(30);
add_node(40);
after_add(30,70);
add_before(40,35);
add_before_first(1);
add_before_last(1);
display();
 return 0;

}
