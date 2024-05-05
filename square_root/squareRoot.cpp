/*
Given a non-negative integer x, return the square root of x rounded down to the
nearest integer. The returned integer should be non-negative as well.

Must not use any built-in exponent function or operator.
*/

class Solution {
private:
  long left, right, mid, square;

public:
  int mySqrt(int x) {
    if (x == 0 || x == 1) {
      return x;
    }

    left = 1;
    right = x;

    while (left < right) {
      mid = left + (right - left) / 2;
      square = mid * mid;

      if (square == x) {
        return mid;
      }

      else if (square < x) {
        left = mid + 1;
      }

      else {
        right = mid;
      }
    }

    return left - 1;
  }
};