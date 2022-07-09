#include <iostream>
using namespace std;
#include<string>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

bool is_armstrong(int number){
    int tmp = 0;
    int div = 1;

    for (int i = 1; i<= to_string(number).length(); i++){
        tmp += pow((number/div)%10, 3);
        div *= 10;
    }
    if (number == tmp){
        return true;
    }
}


int main() {
    /*
    Armstrong numbers
    Write a program that prints all Armstrong numbers with three digits.

    */
    int upper_limit = 1000;

    for (int i = 1; i <= upper_limit; i++){
        if(is_armstrong(i)){
            cout << i << "\n";
        }
    }
}


