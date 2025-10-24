#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
};

node *first, *temp, *ttemp, *p;

void init() {
    first = temp = ttemp = p = NULL;
}

void create_first(int n) {
    first = new node;
    first->data = n;
    first->next = NULL;
}

void add_node(int x) {
    temp = first;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    ttemp = new node;
    ttemp->data = x;
    ttemp->next = NULL;
    temp->next = ttemp;
}

void display() {
    temp = first;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    init();
    int num;
    cout << "Enter a n";
    cin >> num;
    int rev = 0, n = num;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    int digit;
    while (rev > 0) {
    int digit = rev % 10;

    if (first == NULL)
        create_first(digit);
    else
        add_node(digit);

    rev /= 10;
}
    cout << "Linked list :\n";
    display();

    return 0;
}
