# iq_puzzle_solver
## Todo
- Documentation of everything used.
- CMake file.
- Code styling.
- Automated testing on upload.
- Math rendering on github.

## Run tests
Compile matrix tests:
```shell
g++ -std=c++14 -isystem /usr/include/gtest -pthread src/matrix.cpp test/test_matrix.cpp -l gtest -l gtest_main -o matrixTests
```
Execute matrix tests:
```shell
./matrixTests
```

Compile matrix and tile test:
```shell
g++ -std=c++14 -isystem /usr/include/gtest -pthread src/matrix.cpp src/tiles.cpp test/test_matrix.cpp test/test_tiles.cpp test/data/test_data_matrices.cpp -l gtest -l gtest_main -o matrixTileTest
```

Compile board test:
```shell
g++ -std=c++14 -isystem /usr/include/gtest -pthread src/matrix.cpp src/board.cpp test/test_board.cpp test/data/test_data_board.cpp -l gtest -l gtest_main -o boardTest
```

## Algorithm
#### Orientations
There are 12 tiles, with each tile having 8 possible states. I will illustrate these states using the $L$ tiles as an example:

- "Rotated" is interpreted as "rotated clockwise".
- "Flipped" is interpreted as "flipped vertically".

L tile:
$$ \begin{pmatrix}
    1 & 0 & 0 \\
    1 & 0 & 0 \\
    1 & 1 & 1 \\
    \end{pmatrix} $$

L tile rotated once:
$$ \begin{pmatrix}
    1 & 1 & 1 \\
    1 & 0 & 0 \\
    1 & 0 & 0 \\
    \end{pmatrix} $$

L tile rotated twice:
$$ \begin{pmatrix}
    1 & 1 & 1 \\
    0 & 0 & 1 \\
    0 & 0 & 1 \\
    \end{pmatrix} $$

L tile rotated thrice:
$$ \begin{pmatrix}
    0 & 0 & 1 \\
    0 & 0 & 1 \\
    1 & 1 & 1 \\
    \end{pmatrix} $$

L tile flipped:
$$ \begin{pmatrix}
    0 & 0 & 1 \\
    0 & 0 & 1 \\
    1 & 1 & 1 \\
    \end{pmatrix} $$

L tile rotated once and flipped:
$$ \begin{pmatrix}
    1 & 1 & 1 \\
    0 & 0 & 1 \\
    0 & 0 & 1 \\
    \end{pmatrix} $$

L tile rotated twice and flipped:
$$ \begin{pmatrix}
    1 & 1 & 1 \\
    1 & 0 & 0 \\
    1 & 0 & 0 \\
    \end{pmatrix} $$

L tile rotated thrice and flipped:
$$ \begin{pmatrix}
    1 & 0 & 0 \\
    1 & 0 & 0 \\
    1 & 1 & 1 \\
    \end{pmatrix} $$

#### Board
Here are some examples for board positions.
Board position "is empty":
$$ \begin{pmatrix}
    0 & 0 & 0 \\
    0 & 0 & 0 \\
    0 & 0 & 0 \\
    0 & 0 & 0 \\
    \end{pmatrix} $$

Board position "is full":
$$ \begin{pmatrix}
    1 & 1 & 1 \\
    1 & 1 & 1 \\
    1 & 1 & 1 \\
    1 & 1 & 1 \\
    \end{pmatrix} $$

Board position "one":
$$ \begin{pmatrix}
    1 & 0 & 0 \\
    1 & 0 & 0 \\
    1 & 1 & 1 \\
    0 & 0 & 0 \\
    \end{pmatrix} $$

Board position "two":
$$ \begin{pmatrix}
    1 & 1 & 1 \\
    1 & 1 & 1 \\
    1 & 1 & 1 \\
    0 & 0 & 0 \\
    \end{pmatrix} $$

Board position "three":
$$ \begin{pmatrix}
    1 & 1 & 1 \\
    1 & 1 & 1 \\
    1 & 1 & 1 \\
    1 & 1 & 0 \\
    \end{pmatrix} $$

Working math matrix:
$$ \begin{bmatrix} 
   a & b & c \\
   c & e & f \\
   g & h & i \\
   \end{bmatrix} $$
