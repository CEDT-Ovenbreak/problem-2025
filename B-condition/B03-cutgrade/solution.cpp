#include<bits/stdc++.h>
using namespace std;

int main(){
    long a;
    cin>>a;
    if(a>=85){
        cout<<"A";
    }
    else if(a>=80){
        cout<<"B+";
    }
    else if(a>=75){
        cout<<"B";
    }
    else if(a>=70){
        cout<<"C+";
    }
    else if(a>=65){
        cout<<"C";
    }
    else if(a>=60){
        cout<<"D+";
    }
    else if(a>=50){
        cout<<"D";
    }
    else{
        cout<<"F";
    }
}