/*Given a 32 - bit signed integer, reverse digits of an integer.

Example 1:
Input: 123
Output : 321

Example 2 :
Input : -123
Output : -321

Example 3 :
Input : 120
Output : 21

Note :
Assume we are dealing with an environment which could only hold integers within
the 32 - bit signed integer range.For the purpose of this problem, assume that your
function returns 0 when the reversed integer overflows.
*/


#include<iostream>
using namespace std;

class solution {

public:
	int reverse(int x) {   

		bool flag = false;
		if (x < 0) { x = -x; flag = true; }

		int result = 0;
		int remainder;
		while (x != 0)
		{
			if (result > INT_MAX / 10 || result < INT_MIN / 10)return 0;   //考虑溢出
			remainder = x % 10;
			x = x / 10;
			result = result * 10 + remainder;		
		}
		if (flag) return -result;
		return result;
	}
};