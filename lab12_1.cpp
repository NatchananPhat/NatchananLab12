#include<iostream>
using namespace std;

long long int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

long long int fibonacci(int n){
    long long int N;
    if(n == 0){
        N = 0 ;
    }
    if(n == 1){
        N = 1;
    }
    if(n > 1){
        N = fibonacci(n-1) + fibonacci(n-2);
    }
    return N;
}