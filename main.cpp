#include <iostream>

void swp(int& a, int& b){ //1
    int tmp = std::move(a); //1, 4
    a = b; //1
    b = tmp; //1
} //1

template <typename T> //2
T mn(T& a, T& b){ //1, 2
    if (a < b){ //1
        return a; //1
    } //1
    return b; //1
} //1

template <typename T> //2
T mx(T& a, T& b){ //1, 2
    if (a > b){ //1
        return a; //1
    } //1
    return b; //1
} //1

template <typename T> //5
T&& mn(T&& a, T&& b){ //5
} //5

int main(){

    return 0;
}
