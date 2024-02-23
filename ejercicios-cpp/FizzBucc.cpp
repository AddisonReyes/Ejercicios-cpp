#include <iostream>

using namespace std;

int main(){
    for (int i = 0; i < 101; i++){
        if (i % 3 == 0)
            cout << "Fizz" << endl;
        else if (i % 5 == 0)
            cout << "Buzz" << endl;
        else if (i % 5 == 0 && i % 3 == 0)
            cout << "FizzBuzz" << endl;
        else
            cout << i << endl;
    }
       
    return 0;
}