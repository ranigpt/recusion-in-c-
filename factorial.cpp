//factorial of number using recursion

#include <iostream>

using namespace std;

int f(int n){
    if(n==0) return 1;
    
    return n*f(n-1);
}

int main()
{
    cout<<"Hello World";
    int n;
    cin>>n;
    int factorial=f(n);
    cout<<factorial;

    return 0;
}
