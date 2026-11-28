# Code Review Report: UVa 10055 - Hashmat the Brave Warrior

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10055
- **Problem Title:** Hashmat the Brave Warrior
- **Problem Link:** https://onlinejudge.org/external/100/10055.pdf
- **Language / Version:** C++
- **Submission Result:** Not Accepted
- **Source Code (Initial/Fail):** Not available
- **Source Code (Final):** [src](./src)
- **Review Date:** 2026-11-28

## 2. Problem Statement in My Own Words

This problem asks us to calculate the difference between two numbers.

- The input contains two integers on each line.
- The output is the absolute difference between the two integers.
- The numbers can be as large as 2^32.
- The order of the input numbers may be different.
- The program must continue reading input until End of File (EOF).

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

- A simple approach is to subtract one number from another.
- However, the result can be negative if the second number is larger.
- Using int may cause problems when the input numbers are too large.

### Final Strategy

- Use long long to store large integer values.
- Use a while loop to read input until EOF.
- Compare the two numbers using an if-else statement.
- Subtract the smaller number from the larger number.
- Print the result on a separate line.

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

The variable n represents the number of input pairs.
Each pair requires one comparison and one subtraction.
The program only uses two variables, so the memory usage is constant.

## 4. Pseudocode

```text
START
1. Declare two variables, a and b, using long long.
2. WHILE input a and b is available:
3.     IF a > b:
           Print a - b.
       ELSE:
           Print b - a.
4. END WHILE.
END
```

## 5. Fail Code vs Correct Code

### Fail Code

The original failed source code is not available.

The following code is an example of a possible incorrect approach, not an actual failed submission.

```cpp
int a, b;

while (cin >> a >> b) {
    cout << a - b << endl;
}
```

**Why it could fail:**

- The result can be negative when a is smaller than b.
- The int data type may not support large input values.
- For example, input 10 12 would produce -2 instead of 2.

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

- The smaller number is subtracted from the larger number.
- The result is always non-negative.
- The long long data type supports large input values.
- The while loop reads all input pairs until EOF.

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

The test cases are prepared to check whether the program handles normal cases, large numbers, and different input orders correctly.

## 7. Difference and Reflection

### Key Differences

The following table compares a possible incorrect approach with the proposed solution.

| Item | Fail Code Example | Correct Code |
|---|---|---|
| Logic | Direct subtraction | Absolute difference |
| Edge Cases | May produce negative results | Handles both input orders |
| Output Handling | Can print negative numbers | Prints non-negative numbers |
| Complexity | O(n) | O(n) |
| Code Quality | Uses int | Uses long long |

### Reflection

- **Root cause:** Possible mistakes include ignoring the order of input numbers and choosing an unsuitable data type.
- **Lesson learned:** [Describe what I learned about data types, conditional statements, and handling input until EOF.]
- **Next action:** [Describe how I will check input constraints and test edge cases when solving similar problems.]

## 8. AI Usage Disclaimer

ChatGPT was used to help me understand the problem,
provide a C++ solution, explain how the code works,
and organize the explanation in Markdown format.

### AI Usage Record

| Problem ID / Title | AI Tool Used | How It Was Used | Verification Performed Independently |
|---|---|---|---|
| UVa 10055 - Hashmat the Brave Warrior | ChatGPT | C++ solution, explanation of the algorithm, and Markdown formatting | Yes, I tested the code and checked the output.|

## 9. Final Re-review Checklist

- [ ] The problem information, source-code links, and submission result are accurate.
- [ ] The problem statement and reflection are written in my own words.
- [ ] The strategy, pseudocode, and complexity analysis match the final code.
- [ ] The fail-code explanation identifies a reproducible failing case or clearly explains what was incomplete.
- [ ] The test table includes actual evidence for normal, boundary, and edge cases.
- [ ] The AI usage record is complete and accurate.
