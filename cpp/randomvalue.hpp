// RandomValue in C++
// A mistake, carried through to perfection
// By Jacob Winters; released under CC0

#pragma once

#include <algorithm>
#include <cmath>
#include <cstdlib>

// Inclusive of the lower bound and exclusive of the upper bound
class RandomInt {
private:
	int base, range;
public:
	RandomInt(int x, int y=0) {
		this->base = std::min(x, y);
		this->range = std::abs(x - y);
	}
	operator int() {
		return this->base + (std::rand() % this->range);
	}
};

class RandomDouble {
private:
	double base, range;
public:
	RandomDouble(double x=1, double y=0) {
		this->base = std::min(x, y);
		this->range = std::abs(x - y);
	}
	operator double() {
		return this->base + (double(std::rand()) / RAND_MAX * this->range);
	}
};

class RandomBool {
public:
	operator bool() {
		return std::rand() & 1;
	}
};
