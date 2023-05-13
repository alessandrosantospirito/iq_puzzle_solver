# iq_puzzle_solver
## Run tests
Compile matrix tests:
```shell
g++ -std=c++14 -isystem /usr/include/gtest -pthread src/matrix.cpp test/test_matrix.cpp -l gtest -l gtest_main -o matrixTests
```
Execute matrix tests:
```shell
./matrixTests
```