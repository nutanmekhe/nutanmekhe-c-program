#include<iostream>
using namespace std;

int swap(int &num1,int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
    int &a = temp;
    return a;
}

int main(){
    int a,b;
    a = 10;
    b = 20;
    cout << "a , b " << a << b << endl;
    swap(a,b) = a;
    cout << "a , b " << a << b << endl;
}



// int swap(int *num1,int *num2){
//     int temp = *num1;
//     *num1 = *num2;
//     *num2 = temp;
// }

// int main(){
//     int a,b;
//     a = 10;
//     b = 20;
//     cout << "a , b  " << a << b << endl;
//     swap(&a,&b);
//     cout << "a , b" << a << b;
// }
