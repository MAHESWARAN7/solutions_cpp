#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    string words []={"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i=a; i<=b ; i++){
        if ( a>=0 && b<=9){
            cout<<words[i]<<endl;
        }
        else if(i<9){
            if(i%2==0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd";
        }
    }
    }
    return 0;
}