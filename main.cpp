#include <iostream>

void swp(int& a, int& b){ //1
    int tmp = a; //1
    a = b; //1
    b = tmp; //1
} //1

int mn(int& a, int& b){ //1
    if (a < b){ //1
        return a; //1
    } //1
    return b; //1
} //1

int mx(int& a, int& b){ //1
    if (a > b){ //1
        return a; //1
    } //1
    return b; //1
} //1

int main(){

    return 0;
}
