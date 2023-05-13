#pragma once

#include <vector>
#include <set>

typedef std::vector<std::vector<int>> Matrix;

extern Matrix L;
extern Matrix L_rotated;
extern Matrix L_rotated_twice;
extern Matrix L_rotated_thrice;

extern Matrix L_flipped;
extern Matrix L_rotated_flipped;
extern Matrix L_rotated_twice_flipped;
extern Matrix L_rotated_thrice_flipped;

extern Matrix L_prime;
extern Matrix L_prime_aligned_x;
extern Matrix L_prime_aligned_y;
extern Matrix L_prime_aligned_xy;

extern Matrix M;
extern Matrix M_prime;

extern Matrix N;

extern Matrix K;

extern Matrix Q;
extern Matrix Q_aligned_x;
extern Matrix Q_aligned_y;
extern Matrix Q_aligned_xy;

extern std::vector<Matrix> all_L_tiles;
extern std::set<Matrix> all_unique_L_tiles;