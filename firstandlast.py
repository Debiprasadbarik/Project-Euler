# Python3 program to find first
# and last digits of a number
import math

# Find the first digit
def firstDigit(n) :
	
	# Find total number of digits - 1
	#digits = (int)(math.log10(n))
	# Find first digit
	n = (int)(n / pow(10, 10))

	# Return first digit
	return n;

n = 67898562980;
print(firstDigit(n), end = " ")

# This code is contributed by rishabh_jain
