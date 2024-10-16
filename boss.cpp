#include <iostream>
using namespace std;

int main(const int argc, char *argv[]) {
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <no of workers> <end>" << endl;
        return 1;
    }

    return 0;
}