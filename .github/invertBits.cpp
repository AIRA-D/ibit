#include <bitset>


void invertBits(unsigned char* memLocation, size_t length) {
    for (size_t i = 0; i < length; ++i) {
        memLocation[i] ^= (1 << 3); // XOR с 00001000
    }
}


