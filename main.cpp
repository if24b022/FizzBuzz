#include <iostream>

using namespace std;

void fizzbuzz(int zahl){
    if(zahl % 15 == 0){
        cout << "FizzBuzz\n";
    }else if(zahl % 3 == 0){
        cout << "Fizz\n";
    }
}

int main()
{
    for(int i = 0; i <= 150; i++){
        fizzbuzz(i);
    }
    return 0;
}
