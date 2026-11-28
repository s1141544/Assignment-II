# Code Review Report: UVa 11172 - Relational Operators

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11172
- **Problem Title:** Relational Operators
- **Problem Link:** https://onlinejudge.org/external/111/11172.pdf
- **Language / Version:** C++
- **Submission Result:** Not verified
- **Source Code (Initial/Fail):** Not available
- **Source Code (Final):** [src](./src)
- **Review Date:** 2026-11-28

## 2. Problem Statement in My Own Words

This problem asks us to compare two integers and
determine the relationship between them.

- The first input is an integer t, which represents
  the number of test cases.
- Each test case contains two integers, a and b.
- The number of test cases is less than 15.
- The absolute values of a and b are less than
  1000000001.
- If a is greater than b, print ">".
- If a is less than b, print "<".
- If a is equal to b, print "=".
- Each result must be printed on a separate line.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

- A simple approach is to compare the two integers
  using conditional statements.
- The program must handle three possible relationships.
- A possible mistake is forgetting to handle the case
  where both integers are equal.
- The first input represents the number of test cases,
  not one of the numbers being compared.

### Final Strategy

- Declare three integer variables: t, a, and b.
- Read the number of test cases using cin.
- Use a while loop to process all test cases.
- Read two integers in each iteration.
- Use if, else if, and else to compare the integers.
- Print the appropriate relational operator.
- Consider equal numbers, negative numbers, zero,
  and maximum or minimum input values.

### Complexity Analysis

- **Time Complexity:** O(t)
- **Space Complexity:** O(1)

The variable t represents the number of test cases.

Each test case requires at most two comparisons.
Therefore, the total execution time increases linearly
with the number of test cases.

The program only uses three integer variables,
so the additional memory usage is constant.

## 4. Pseudocode

```text
START
1. Declare integer variables t, a, and b.
2. Read the number of test cases t.
3. REPEAT t times:
       Read a and b.

       IF a > b:
           Print ">".
       ELSE IF a < b:
           Print "<".
       ELSE:
           Print "=".

4. END REPEAT.
END
```

## 5. Fail Code vs Correct Code

### Fail Code

The original failed source code is not available.

The following code is an example of a possible
incorrect approach, not an actual failed submission.

```cpp
#include <iostream>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;

    while (t--) {
        cin >> a >> b;

        if (a > b) {
            cout << ">" << endl;
        } else {
            cout << "<" << endl;
        }
    }

    return 0;
}
```

**Why it could fail:**

- The program only handles two possible relationships.
- It does not check whether both numbers are equal.
- If a and b are equal, the program incorrectly
  prints "<".
- For example, input 10 10 should produce "=",
  but this approach produces "<".

### Correct Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;

    while (t--) {
        cin >> a >> b;

        if (a > b) {
            cout << ">" << endl;
        } else if (a < b) {
            cout << "<" << endl;
        } else {
            cout << "=" << endl;
        }
    }

    return 0;
}
```

**Why it works:**

- The if statement checks whether a is greater than b.
- The else if statement checks whether a is less than b.
- The else statement handles equal numbers.
- All three possible relationships are covered.
- The int data type supports the required input range
  on a standard 32-bit system.
- The while loop processes exactly t test cases.

## 6. Test Evidence

Each row represents one pair of integers.
The complete input must begin with the number
of test cases.

| Test Category | Input Summary | Expected Result | Actual Result | Purpose |
|---|---|---|---|---|
| Normal case | 10 20 | < | Pending | Less than |
| Normal case | 20 10 | > | Pending | Greater than |
| Edge case | 10 10 | = | Pending | Equal numbers |
| Edge case | 0 0 | = | Pending | Zero values |
| Edge case | -10 -20 | > | Pending | Negative numbers |
| Edge case | -10 10 | < | Pending | Different signs |
| Boundary case | 1000000000 -1000000000 | > | Pending | Maximum and minimum values |
| Boundary case | -1000000000 1000000000 | < | Pending | Minimum and maximum values |

The test cases are designed to verify all three
relational operators, negative numbers, zero values,
and boundary values.

## 7. Difference and Reflection

### Key Differences

The following table compares a possible incorrect
approach with the proposed correct solution.

| Item | Fail Code Example | Correct Code |
|---|---|---|
| Logic | Uses if and else | Uses if, else if, and else |
| Edge Cases | Does not handle equal numbers | Handles all three relationships |
| Output Handling | Only prints > or < | Prints >, <, or = |
| Complexity | O(t) | O(t) |
| Code Quality | Incomplete conditions | Complete and clear conditions |

### Reflection

- **Root cause:** A possible mistake is forgetting
  to consider all possible relationships between
  two integers.

- **Lesson learned:** [Describe what I learned about
  relational operators and conditional statements.]

- **Next action:** [Describe how I will check all
  possible conditions and test edge cases before
  submitting my code.]

## 8. AI Usage Disclaimer

ChatGPT was used to help me understand the problem,
provide a C++ solution, explain how the code works,
and organize the explanation in Markdown format.

### AI Usage Record

| Problem ID / Title | AI Tool Used | How It Was Used | Verification Performed Independently |
|---|---|---|---|
| UVa 11172 - Relational Operators | ChatGPT | C++ solution, explanation of the algorithm, and Markdown formatting | Yes, i tested the code and checked the ouput.|

## 9. Final Re-review Checklist

- [ ] The problem information, source-code links, and submission result are accurate.
- [ ] The problem statement and reflection are written in my own words.
- [ ] The strategy, pseudocode, and complexity analysis match the final code.
- [ ] The fail-code explanation identifies a reproducible failing case or clearly explains what was incomplete.
- [ ] The test table includes actual evidence for normal, boundary, and edge cases.
- [ ] The AI usage record is complete and accurate.
