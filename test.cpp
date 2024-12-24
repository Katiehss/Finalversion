#include <iostream>
using namespace std;

void rev(char *str){
    if (*str){
        rev(str+1);
        cout<<*str;
    }
}

int main(){
    char a[]="hello!";
    rev(a);
    return 0;
}