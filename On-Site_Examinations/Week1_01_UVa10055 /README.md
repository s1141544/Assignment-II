
# Code Review Report: UVa 10055 - Hashmat the Brave Warrior

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10055
- **Problem Title:** Hashmat the Brave Warrior
- **Problem Link:** https://onlinejudge.org/external/100/10055.pdf
- **Language / Version:** C++
- **Submission Result:** Not Submitted
- **Source Code (Initial/Fail):** Not available
- **Source Code (Final):** [src](./src)
- **Review Date:** 2026-11-28

## 2. Problem Statement in My Own Words

This problem asks us to calculate the absolute difference
between two numbers.

- The input contains two integers on each line.
- The output is the difference between the two integers.
- The input numbers can be as large as 2^32.
- The order of the two numbers may be different.
- The result must always be non-negative.
- The program continues reading input until EOF.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

- The problem can be solved using subtraction.
- The order of the two numbers must be considered.
- Subtracting a larger number from a smaller number
  would produce a negative result.
- A suitable data type is needed because the input
  numbers can be very large.

### Final Strategy

- Declare two variables, a and b, using long long.
- Use a while loop to read input until EOF.
- Compare the two numbers using an if-else statement.
- Subtract the smaller number from the larger number.
- Print the result on a separate line.
- Consider equal numbers, zero values, reversed input,
  and large numbers.

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

The variable n represents the number of input pairs.

Each input pair requires one comparison and one
subtraction. Therefore, the execution time increases
linearly with the number of input pairs.

The program only uses two variables, so the additional
memory usage is constant.

## 4. Pseudocode

```text
START
1. Declare two variables, a and b, using long long.
2. WHILE input a and b is available:
       IF a > b:
           Print a - b.
       ELSE:
           Print b - a.
3. END WHILE.
END
```

## 5. Fail Code vs Correct Code

### Fail Code

No previous source code or failed submission is
available for this problem.

### Correct Code

The following is the proposed solution.

```cpp
#include <iostream>
using namespace std;

int main() {
    long long a, b;

    while (cin >> a >> b) {
        if (a > b) {
            cout << a - b << endl;
        } else {
            cout << b - a << endl;
        }
    }

    return 0;
}
```

**Why it works:**

- The if-else statement compares the two numbers.
- The smaller number is subtracted from the larger number.
- The result is always non-negative.
- The long long data type supports large input values.
- Equal numbers produce a result of zero.
- The while loop processes all input pairs until EOF.

## 6. Test Evidence

| Test Category | Input Summary | Expected Result | Actual Result | Purpose |
|---|---|---|---|---|
| Normal case | 10 12 | 2 | Pending | Basic subtraction |
| Normal case | 10 14 | 4 | Pending | Basic subtraction |
| Normal case | 100 200 | 100 | Pending | Basic subtraction |
| Boundary case | 0 4294967296 | 4294967296 | Pending | Large numbers |
| Edge case | 50 50 | 0 | Pending | Equal numbers |
| Edge case | 12 10 | 2 | Pending | Reversed input |
| Edge case | 0 0 | 0 | Pending | Zero values |

These test cases are designed to verify that the program
handles different input orders, equal numbers, zero values,
and large integers.

Actual results must be recorded after testing the program.

## 7. Difference and Reflection

### Key Differences

No previous failed source code is available.
Therefore, a direct comparison cannot be made.

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | Not available | Calculates the absolute difference |
| Edge Cases | Not available | Handles equal numbers, zero, and reversed input |
| Output Handling | Not available | Prints non-negative results on separate lines |
| Complexity | Not available | O(n) time and O(1) space |
| Code Quality | Not available | Simple and readable code using long long |

### Reflection

- **Root cause:** No previous failed source code is
  available to identify a specific error.

- **Lesson learned:** [Describe what I learned about
  conditional statements, integer data types, and
  absolute differences.]

- **Next action:** [Describe how I will check input
  constraints and test different input cases before
  submitting my code.]

## 8. AI Usage Disclaimer

ChatGPT was used to help me understand the problem,
provide a C++ solution, explain how the code works,
and prepare the Markdown explanation.

### AI Usage Record

| Problem ID / Title | AI Tool Used | How It Was Used | Verification Performed Independently |
|---|---|---|---|
| UVa 10055 - Hashmat the Brave Warrior | ChatGPT | C++ solution, explanation of the algorithm, and README assistance | Not yet verified |

## 9. Final Re-review Checklist

- [ ] The problem information, source-code links, and submission result are accurate.
- [ ] The problem statement and reflection are written in my own words.
- [ ] The strategy, pseudocode, and complexity analysis match the final code.
- [ ] The fail-code explanation identifies a reproducible failing case or clearly explains what was incomplete.
- [ ] The test table includes actual evidence for normal, boundary, and edge cases.
- [ ] The AI usage record is complete and accurate.
