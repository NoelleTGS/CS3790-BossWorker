#include <iostream>
#include <ostream>
#include <string>
using namespace std;

bool isPrime(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main(const int argc, char *argv[]) {
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <start> <end>" << endl;
        return 1;
    }


}