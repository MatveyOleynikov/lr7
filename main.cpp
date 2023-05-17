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
    if (a > b){ //5, 7, 9
        return std::move(b); //5, 7
    } //5
    return std::move(a); //5, 7
} //5

template <typename T> //6
T&& mx(T&& a, T&& b){ //6
    if (int c = a - b; a > b){ //6, 8, 10, 11
        cout << c << endl; //11
         return std::move(a); //6, 8
    } //6
    return std::move(b); //6, 8
} //6

int main(){

    return 0;
}
