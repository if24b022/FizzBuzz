#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i <= 150; i++){
        if(i % 15 == 0){
            cout << "FizzBuzz\n";
        }else if(i % 3 == 0){
            cout << "Fizz\n";
        }else if(i % 5 == 0){
            cout << "Buzz\n";
        }
    }
    return 0;
}
