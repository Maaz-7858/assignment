Q1 : Write a function to print squares of first n natural numbers, taking n as argument to the function

#include<bits/stdc++.h>
using namespace std;
void squares_of_1st_n_natural_numbers(int n){
    for(int i=1;i<=n;i++){
        cout<<i*i<<endl;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    squares_of_1st_n_natural_numbers(n);
    return 0;
}
// ---------------------------------------------
Q2 : Write a function that takes the radius of a circle as an argument and returns its area.

#include<bits/stdc++.h>
using namespace std;
int area_of_circle(int r){
    int pi=3.1415;
    int area= pi*r*r;
    return area;
}
int main(){
    int radius;
    cin>>radius;
    cout<<area_of_circle(radius);
    return 0;
}
// ---------------------------------------------------
Q3: Given two numbers a and b, write a function to print all odd numbers between them.

#include<bits/stdc++.h>
using namespace std;
void print_odd(int a,int b){
    if(a%2!=0){
        for(int i=a+2;i<b;i+=2){
            cout<<i<<" ";
        }
    }
    else{
        for(int i=a+1;i<b;i+=2){
            cout<<i<<" ";
        }
    }
    return;
}
int main(){
    int a,b;
    cin>>a>>b;
    print_odd(a,b);
    return 0;
}
// -----------------------------------------------------
Q4: Write a function to count the number of digits in a number and then print the square of this number.

#include<bits/stdc++.h>
using namespace std;
int count_no_digits(int n){
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int a=count_no_digits(n);
    cout<<a*a;
    return 0;
}
// -------------------------------------------------------------
Q5: The minimum number of functions present in any C++ program is:one.
// ------------------------------------------------------------
Q6: State True and False:

1. A function may be called more than once from any other function--True
2. It is necessary for a function to return some value--False
// ----------------------------------------------------------
Q7: Explore:
Can the same function name be used for different functions without any conflict?
Yes, the same function name can be used for different functions without any conflict
in certain programming languages. This is known as function overloading.This achieved
through passing different arguments to the functions having same name.