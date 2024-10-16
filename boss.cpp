#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;

int main(const int argc, char *argv[]) {
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <no of workers> <end>" << endl;
        return 1;
    }

    int range = stoi(argv[2]) / stoi(argv[1]);
    cout << range << " per worker" << endl;

    int status;
    for (int i = 0; i < stoi(argv[1]); i++) {
        int endRange = (i+1)*range;
        if (i == stoi(argv[1]) - 1) endRange = stoi(argv[2]);

        int pid = fork();
        if (pid == 0) {
            execl("./worker", "./worker", to_string((i*range)+1).c_str(), to_string(endRange).c_str(), (char *) NULL);
        } else {
            wait(&status);
            printf("child returned status code : %d\n", status);
        }
    }

    return 0;
}