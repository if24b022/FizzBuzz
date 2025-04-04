#include <iostream>

using namespace std;

string fizzbuzz(int zahl){
    if(zahl % 3 == 0){
        return "FizzBuzz";
    }
}

int main()
{
    for(int i = 0; i <= 150; i++){
        fizzbuzz(i);
    }
    return 0;
}
