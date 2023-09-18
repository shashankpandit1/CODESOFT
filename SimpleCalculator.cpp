#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,result,choice;
    cout<<" input the numbers you want to perform the arithmetic operations on :"<<endl;
    cin>>a>>b;
    cout<<"choose the operation to be performed"<<endl;
    cout<<"1) additon"<<endl<<"2) subtraction"<<endl<<"3) multiplication"<<endl<<"4) division"<<endl;
    cin>>choice;
    switch(choice){
        case 1: result=a+b;
        cout<<"additon of "<<a<<" and "<<b<<" is "<<result;
        break;
        case 2: result=a-b;
        cout<<"subtraction of "<<a<<" and "<<b<<" is "<<result;
        break;
        case 3: result=a*b;
        cout<<"multiplication of "<<a<<" and "<<b<<" is "<<result;
        break;
        case 4: result=a/b;
        cout<<"division of "<<a<<" and "<<b<<" is "<<result;
        break;
    }
    
}