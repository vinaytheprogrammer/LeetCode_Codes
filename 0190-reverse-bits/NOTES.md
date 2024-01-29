// Reverse 32 bit octal number
uint32_t reverseBits(uint32_t n) {
uint32_t result = 0;
​
for (int i = 0; i < 32; ++i) {
result = (result << 1) | (n & 1);     // Reverse Logic
n >>= 1;
}
​
return result;
}
​
​