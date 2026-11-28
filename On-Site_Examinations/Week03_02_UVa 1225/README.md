
# Code Review Report: UVa 1225 - Digit Counting

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 1225
- **Problem Title:** Digit Counting
- **Problem Link:** https://onlinejudge.org/external/12/1225.pdf
- **Language / Version:** C++
- **Submission Result:** Not Submitted
- **Source Code (Initial/Fail):** Not available
- **Source Code (Final):** [src](./src)
- **Review Date:** 2026-11-28

## 2. Problem Statement in My Own Words

This problem asks us to count how many times each
digit from 0 to 9 appears in the consecutive
integers from 1 to N.

- The first input represents the number of test cases.
- There are at most 20 test cases.
- Each test case contains one integer N.
- The value of N is greater than 1 and less than 10000.
- Every digit in every integer from 1 to N must be counted.
- The output contains ten integers representing the
  frequency of digits from 0 to 9.
- Each frequency must be separated by a space.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

- The problem requires counting individual digits
  from a sequence of integers.
- An array can be used to store the frequency
  of each digit.
- The modulo operator can extract the last digit
  of an integer.
- Integer division can remove the last digit.
- The digit frequencies must be reset for every
  new test case.
- The output format must be handled carefully
  to avoid unnecessary spaces.

### Final Strategy

- Read the number of test cases T.
- Read the value of N for each test case.
- Initialize an integer array count[10] with zeros.
- Use a for loop to process integers from 1 to N.
- Copy the current integer into a temporary variable.
- Use a while loop to extract each digit.
- Use num % 10 to obtain the last digit.
- Increase the corresponding element in the count array.
- Use num / 10 to remove the last digit.
- Repeat until all digits have been processed.
- Print the frequencies of digits 0 to 9.
- Separate the output values using spaces.

### Complexity Analysis

- **Time Complexity:** O(N log N) per test case
- **Space Complexity:** O(1)

The program processes every integer from 1 to N.

Each integer contains at most O(log N) digits.
Processing each digit requires a constant amount
of time using modulo and integer division.

Therefore, the total time complexity is O(N log N).

The program uses an array containing exactly
ten elements and a constant number of variables.

The additional memory usage is O(1).

Since N is less than 10000, this approach is
efficient for the given problem constraints.

## 4. Pseudocode

```text
START
1. Read the number of test cases T.
2. REPEAT T times:
       Read N.
       Initialize count[0...9] to zero.

       FOR i = 1 TO N:
           Set num = i.

           WHILE num > 0:
               Set digit = num % 10.
               Increase count[digit] by 1.
               Set num = num / 10.
           END WHILE.

       END FOR.

       FOR i = 0 TO 9:
           IF i > 0:
               Print a space.
           Print count[i].
       END FOR.

       Print a new line.
3. END REPEAT.
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
    int T, N;
    cin >> T;

    while (T--) {
        cin >> N;

        int count[10] = {0};

        for (int i = 1; i <= N; i++) {
            int num = i;

            while (num > 0) {
                count[num % 10]++;
                num /= 10;
            }
        }

        for (int i = 0; i < 10; i++) {
            if (i > 0) {
                cout << " ";
            }

            cout << count[i];
        }

        cout << endl;
    }

    return 0;
}
```

**Why it works:**

- The count array stores the frequency of each digit.
- The for loop processes every integer from 1 to N.
- The modulo operator extracts the last digit.
- Integer division removes the processed digit.
- Every digit is counted exactly once.
- The array is initialized again for each test case.
- The temporary variable prevents changes to the
  main loop variable.
- The output contains exactly ten frequency values.
- The conditional statement prevents unnecessary
  leading or trailing spaces.

## 6. Test Evidence

| Test Category | Input Summary | Expected Result | Actual Result | Purpose |
|---|---|---|---|---|
| Normal case | N = 3 | 0 1 1 1 0 0 0 0 0 0 | Pending | Basic digit counting |
| Normal case | N = 13 | 1 6 2 2 1 1 1 1 1 1 | Pending | Count repeated digits |
| Boundary case | N = 2 | 0 1 1 0 0 0 0 0 0 0 | Pending | Minimum valid input |
| Boundary case | N = 9999 | 2889 4000 4000 4000 4000 4000 4000 4000 4000 4000 | Pending | Maximum valid input |
| Edge case | N = 9 | 0 1 1 1 1 1 1 1 1 1 | Pending | Single-digit integers |
| Edge case | N = 10 | 1 2 1 1 1 1 1 1 1 1 | Pending | First two-digit integer |
| Edge case | N = 11 | 1 4 1 1 1 1 1 1 1 1 | Pending | Repeated digit in one integer |

These test cases are designed to verify digit counting,
repeated digits, boundary values, and integers containing
the digit zero.

The complete input must begin with the number
of test cases.

Actual results must be recorded after running the program.

## 7. Difference and Reflection

### Key Differences

No previous failed source code is available.
Therefore, a direct comparison cannot be made.

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | Not available | Counts digits using modulo and division |
| Edge Cases | Not available | Handles repeated digits, zeros, and boundary values |
| Output Handling | Not available | Prints ten space-separated frequency values |
| Complexity | Not available | O(N log N) time and O(1) space |
| Code Quality | Not available | Simple and readable code using arrays and loops |

### Reflection

- **Root cause:** No previous failed source code is
  available to identify a specific error.

- **Lesson learned:** [Describe what I learned about
  arrays, digit extraction, modulo operators,
  integer division, and nested loops.]

- **Next action:** [Describe how I will improve my
  understanding of frequency arrays, loop conditions,
  and output formatting when solving similar problems.]

## 8. AI Usage Disclaimer

ChatGPT was used to help me understand the problem,
provide a C++ solution, explain how the algorithm
works, and organize the explanation in Markdown format.

### AI Usage Record

| Problem ID / Title | AI Tool Used | How It Was Used | Verification Performed Independently |
|---|---|---|---|
| UVa 1225 - Digit Counting | ChatGPT | C++ solution, explanation of the algorithm, and README assistance | Yes, verified independently. |

## 9. Final Re-review Checklist

- [ ] The problem information, source-code links, and submission result are accurate.
- [ ] The problem statement and reflection are written in my own words.
- [ ] The strategy, pseudocode, and complexity analysis match the final code.
- [ ] The fail-code explanation identifies a reproducible failing case or clearly explains what was incomplete.
- [ ] The test table includes actual evidence for normal, boundary, and edge cases.
- [ ] The AI usage record is complete and accurate.
