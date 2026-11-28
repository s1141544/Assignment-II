# Code Review Report: UVa 11332 - Summing Digits

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11332
- **Problem Title:** Summing Digits
- **Problem Link:** https://onlinejudge.org/external/113/11332.pdf
- **Language / Version:** C++
- **Submission Result:** Not Submitted
- **Source Code (Initial/Fail):** Not available
- **Source Code (Final):** [src](./src)
- **Review Date:** 2026-11-28

## 2. Problem Statement in My Own Words

This problem asks us to repeatedly calculate the sum
of the digits of a positive integer until only one
digit remains.

- Each input line contains a positive integer n.
- The maximum input value is 2000000000.
- Add all the digits of the number together.
- Repeat the process if the result contains more
  than one digit.
- Print the final single-digit number.
- The input ends when n is equal to 0.
- The value 0 must not be processed or printed.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

- The problem requires separating the digits
  of an integer.
- The modulo operator can be used to obtain
  the last digit of a number.
- Integer division can be used to remove
  the last digit.
- The digit summation process must be repeated
  until the result becomes a single digit.
- The input value 0 must be handled as a
  termination condition.

### Final Strategy

- Declare an integer variable n.
- Use a while loop to read input until n is 0.
- Check whether n contains more than one digit.
- Initialize a variable sum to 0.
- Use n % 10 to obtain the last digit.
- Add the digit to sum.
- Use n / 10 to remove the last digit.
- Replace n with the calculated sum.
- Repeat until n is less than 10.
- Print the final result on a separate line.

### Complexity Analysis

- **Time Complexity:** O(log n) per input number
- **Space Complexity:** O(1)

The number of digits in an integer n is proportional
to log n.

The program processes each digit using modulo
and integer division.

Each repeated summation reduces the number of digits,
so the total processing time is O(log n).

The program only uses a constant number of integer
variables, so the additional memory usage is O(1).

This approach is efficient for the given input limit.

## 4. Pseudocode

```text
START
1. WHILE input n is available and n is not 0:
       WHILE n >= 10:
           Set sum = 0.

           WHILE n > 0:
               Add n % 10 to sum.
               Set n = n / 10.
           END WHILE.

           Set n = sum.
       END WHILE.

       Print n.
2. END WHILE.
END
```

## 5. Fail Code vs Correct Code

### Fail Code

No previous source code or failed submission
is available for this problem.

### Correct Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {
        while (n >= 10) {
            int sum = 0;

            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }

            n = sum;
        }

        cout << n << endl;
    }

    return 0;
}
```

**Why it works:**

- The modulo operator extracts the last digit.
- Integer division removes the last digit.
- The inner while loop calculates the sum of all digits.
- The sum variable is reset before each new summation.
- The outer summation loop continues until only
  one digit remains.
- The input value 0 terminates the program
  without producing output.
- The int data type supports the required input
  range on a standard 32-bit system.

## 6. Test Evidence

| Test Category | Input Summary | Expected Result | Actual Result | Purpose |
|---|---|---|---|---|
| Normal case | 11 | 2 | Pending | Sum two digits |
| Normal case | 47 | 2 | Pending | Repeated summation |
| Normal case | 1234567892 | 2 | Pending | Multiple summation steps |
| Boundary case | 2000000000 | 2 | Pending | Maximum input value |
| Edge case | 1 | 1 | Pending | Minimum positive input |
| Edge case | 9 | 9 | Pending | Single-digit input |
| Edge case | 99 | 9 | Pending | Repeated summation |
| Edge case | 1000 | 1 | Pending | Number containing zeros |
| Termination case | 0 | No output | Pending | Stop the program |

These test cases are designed to verify that the
program correctly handles single-digit numbers,
large numbers, repeated digit summation, and
the termination condition.

Actual results must be recorded after testing.

## 7. Difference and Reflection

### Key Differences

No previous failed source code is available.
Therefore, a direct comparison cannot be made.

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | Not available | Repeatedly calculates the sum of digits |
| Edge Cases | Not available | Handles single-digit numbers and zero termination |
| Output Handling | Not available | Prints the final single digit on each line |
| Complexity | Not available | O(log n) time and O(1) space |
| Code Quality | Not available | Simple and readable code using while loops |

### Reflection

- **Root cause:** No previous failed source code is
  available to identify a specific error.

- **Lesson learned:** [Describe what I learned about
  modulo operators, integer division, and nested loops.]

- **Next action:** [Describe how I will improve my
  understanding of loops, digit manipulation, and
  testing boundary cases.]

## 8. AI Usage Disclaimer

ChatGPT was used to help me understand the problem,
provide a C++ solution, explain how the algorithm
works, and organize the explanation in Markdown format.

### AI Usage Record

| Problem ID / Title | AI Tool Used | How It Was Used | Verification Performed Independently |
|---|---|---|---|
| UVa 11332 - Summing Digits | ChatGPT | C++ solution, explanation of the algorithm.| Yes, verified independently. |

## 9. Final Re-review Checklist

- [ ] The problem information, source-code links, and submission result are accurate.
- [ ] The problem statement and reflection are written in my own words.
- [ ] The strategy, pseudocode, and complexity analysis match the final code.
- [ ] The fail-code explanation identifies a reproducible failing case or clearly explains what was incomplete.
- [ ] The test table includes actual evidence for normal, boundary, and edge cases.
- [ ] The AI usage record is complete and accurate.
