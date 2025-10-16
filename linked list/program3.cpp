#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *first,*temp,*ttemp,*p;
node *evenFirst, *oddFirst;  // new linked lists

void init(){
    first=temp=ttemp=p=NULL;
    evenFirst=oddFirst=NULL;
}
void create_first(int x){
    first=new node;
    first->data=x;
    first->next=NULL;
}
void add_node(int x){
    temp=first;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    ttemp=new node;
    ttemp->data=x;
    ttemp->next=NULL;
    temp->next=ttemp;
}
void split_even_odd() {
    temp = first;        // start from first node
    node *evenLast = NULL, *oddLast = NULL;

    while (temp != NULL) {
        ttemp = new node;
        ttemp->data = temp->data;
        ttemp->next = NULL;

        if (temp->data % 2 == 0) {    // even number
            if (evenFirst == NULL) {
                evenFirst = ttemp;
                evenLast = ttemp;
            } else {
                evenLast->next = ttemp;
                evenLast = ttemp;
            }
        } else {                      // odd number
            if (oddFirst == NULL) {
                oddFirst = ttemp;
                oddLast = ttemp;
            } else {
                oddLast->next = ttemp;
                oddLast = ttemp;
            }
        }
        temp = temp->next;
    }
}

int main(){
    init();
    create_first(1);
    for(int i=2;i<=10;i++){
        add_node(i);
    }


}