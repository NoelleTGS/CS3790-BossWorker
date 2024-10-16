# Boss and Worker
By Nolan Zahara  -  CS3790

There are two programs in this assignment. You can find the description of each below.

# Usage
If you have `git` and `make` installed:
```
git clone https://github.com/NoelleTGS/CS3790-BossWorker.git
cd CS3790-BossWorker
make
```

Otherwise, you can run this by downloading the repo and running the following `gcc` commands:
```
g++ worker.cpp -o worker
g++ boss.cpp -o boss
```

## Worker
The worker calculates all primes between two given arguments and outputs them to a file.
```
./worker <lower bound> <upper bound>
```

## Boss
The boss will calculate primes from 1 to a given argument by creating a specified amount of workers that will each calculate an even amount of primes.
```
./boss <no of workers> <upper bound>
```