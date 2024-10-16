#include <iostream>
#include <ostream>
#include <string>
#include <fstream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) return false;
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

    string filename = "primes";
    filename += argv[1];
    filename += "to";
    filename += argv[2];
    filename += ".txt";

    ofstream file(filename);

    file << "Primes between " << argv[1] << " and " << argv[2] << ":" << endl;
    for(int i = stoi(argv[1]); i <= stoi(argv[2]); i++) {
        if (isPrime(i)) {
            file << i << endl;
        }
    }

    return 0;
}