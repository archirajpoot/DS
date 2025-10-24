#include <bits/stdc++.h>
using namespace std;

struct node {
    char data;
    node *next;
};
node *first,*temp,*ttemp,*p;
void init(){
    first=temp=ttemp=p=NULL;
}
void createfirst(char c){
   first=new node;
   first->data=c;
   first->next=NULL;
}
  void add_node(char x) {
    temp = first;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    ttemp = new node;
    ttemp->data = x;
    ttemp->next = NULL;
    temp->next = ttemp;
}
void display(){
    temp=first;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void palindrome(char s[]){
    int n=strlen(s);
     for(int i=0;i<n;i++){
        if(s[i]==s[n-i-1]){
          
        }
     }
}
int main(){
    char s[100]="ramram";
    for(int i=0;i<6;i++){
        if(first==NULL)
        createfirst(s[i]);
        else
        add_node(s[i]);
    }
    display();
    palindrome(s);

}