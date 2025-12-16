// Q; is 1,3,5,7,9,11,13,
// #include<iostream>
// using namespace std;
// int main() {
//     for(int i=1; i<=13; i+=2){
//         cout<<i<<" ";

//     }
// }
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a=4;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a=a+3;

    }
}