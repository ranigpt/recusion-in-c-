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

//reverse of the array using recursion


#include <bits/stdc++.h>

using namespace std;




void f(int i,int arr[],int n)
{
    if(i>=n/2) return;
    
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    f(0,arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;
}



// check palindrom or not


#include <bits/stdc++.h>

using namespace std;

bool f(int i, string &s)
{
  if(i >= s.size()/2) return true;

  if(s[i]!=s[s.size()-i-1]) return false;

  return f(i+1,s);
  
}


int main() {
  
  string var;
  cin>>var;
cout<<f(0,var);

  return 0;
  //cin>>var;
}


//fibbonacci series in recursion or example of multiple recursion calls


#include <bits/stdc++.h>
using namespace std;

int f(int n){
  if(n<=1) return n;

  int last=f(n-1);
  int slast=f(n-2);

  return last+slast;
}

int main() {
 

  int num;
  cin>>num;
  int finbo;
  finbo=f(num);
  cout<<finbo;
}
