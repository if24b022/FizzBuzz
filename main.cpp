#include <iostream>
#include <string>

using namespace std;

string fizzbuzz(int zahl){
    if(zahl % 3 == 0 && zahl % 5 == 0){
        return "FizzBuzz";
    }
    if(zahl % 3 == 0){
        return "Fizz";
    }
}

int main()
{
    for(int i = 0; i <= 150; i++){
        cout << fizzbuzz(i) << "\n";
    }
    return 0;
}
