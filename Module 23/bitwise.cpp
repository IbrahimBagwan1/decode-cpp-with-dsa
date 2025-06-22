#include<iostream>
#include<string>
#include<bitset>
using namespace std;

int main(){

  int a = 5;    // 0101 in binary
  int b = 9;    // 1001 in binary

  cout << "a = " << a << " (" << bitset<4>(a) << ")" << endl;
  cout << "b = " << b << " (" << bitset<4>(b) << ")" << endl;

  // Bitwise AND
  cout << "a & b = " << (a & b) << " (" << bitset<4>(a & b) << ")" << endl;
  // Bitwise OR
  cout << "a | b = " << (a | b) << " (" << bitset<4>(a | b) << ")" << endl;
  // Bitwise XOR
  cout << "a ^ b = " << (a ^ b) << " (" << bitset<4>(a ^ b) << ")" << endl;
  // Bitwise NOT
  cout << "~a = " << (~a) << " (" << bitset<8>(~a) << ")" << endl;
  // Left Shift
  cout << "a << 1 = " << (a << 1) << " (" << bitset<8>(a << 1) << ")" << endl;
  // Right Shift
  cout << "b >> 1 = " << (b >> 1) << " (" << bitset<8>(b >> 1) << ")" << endl;

  // Explanation:
  // & (AND): Each bit of the output is 1 if both corresponding bits of the operands are 1.
  // | (OR): Each bit of the output is 1 if at least one corresponding bit of the operands is 1.
  // ^ (XOR): Each bit of the output is 1 if only one of the corresponding bits is 1.
  // ~ (NOT): Inverts all the bits (1 becomes 0, 0 becomes 1).
  // << (Left Shift): Shifts bits to the left, inserting 0s from the right.
  // >> (Right Shift): Shifts bits to the right, discarding bits shifted off.
  return 0;
}