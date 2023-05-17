#include <iostream>

<<<<<<< HEAD
void swp(int& a, int& b){ //1
    int tmp = a; //1
=======
template <typename T> //3
void swp(T& a, T& b){ //1, 3
    T tmp = std::move(a); //1, 3, 4
>>>>>>> 75d76d6 (move swap 4)
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

<<<<<<< HEAD
<<<<<<< HEAD
=======
template <typename T> //5
T&& mn(T&& a, T&& b){ //5
    if (a < b){ //5, 7, 9
        return std::move(a); //5, 7
    } //5
    return std::move(b); //5, 7
} //5

template <typename T> //6
T&& mx(T&& a, T&& b){ //6
<<<<<<< HEAD
<<<<<<< HEAD
    if (a >= b){ //6, 8
=======
    if (true && a > b){ //6, 8, 10, 11
>>>>>>> 481a455 (True on if 11)
=======
    if (a > b){ //6, 8, 10
>>>>>>> bb6ab6e (rvalue-ref max 10)
         return std::move(a); //6, 8
    } //6
    return std::move(b); //6, 8
} //6

>>>>>>> 5b8f87c (rvalue-ref min with = 7)
=======
template <typename T> //5
T&& mn(T&& a, T&& b){ //5
    if (a > b){ //5
        return a; //5
    } //5
    return b; //5
} //5

<<<<<<< HEAD
>>>>>>> 4b277c6 (rvalue-ref min with bug 5)
=======
template <typename T> //6
T&& mx(T&& a, T&& b){ //6
    if (a < b){ //6
        return a; //6
    } //6
    return b; //6
} //6

>>>>>>> d51f1fd (rvalue-ref max with bug 6)
int main(){

    return 0;
}
