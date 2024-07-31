#include<bits/stdc++.h>
int binaryToInteger(int n, Node *head) {
    //    Write your code here
    Node *T=head;
    int c=0;
    while(T!=NULL){
        c+=T->data*pow(2,n-1);
        n--;
        T=T->next;
        
        }
    return c;

    }
