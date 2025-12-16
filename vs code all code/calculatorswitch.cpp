#include<iostream>
using namespace std;
int main() {
    int n1;
    cout<<"Enter n1"<<endl;
    cin>>n1;
    char op;
    cout<<"Enter opretor"<<endl;
    cin>>op;
    int n2;
    cout<<"Enter n2"<<endl;
    cin>>n2;
    switch(op) {
        case '+':
            cout<<'+'<<n1+n2;
            break;
        case '-':
            cout<<'-'<<n1-n2;
            break;
        case '*':
            cout<<'*'<<n1*n2;
            break;
            case '/':
            cout<<'/'<<n1/n2;
            break;
            default:
            cout<<"Invalid opretor"<<endl;

    }
}