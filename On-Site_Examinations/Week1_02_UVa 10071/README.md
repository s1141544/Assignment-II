
# Code Review Report: UVa 10071 - Back to High School Physics

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10071
- **Problem Title:** Back to High School Physics
- **Problem Link:** https://onlinejudge.org/external/100/10071.pdf
- **Language / Version:** C++
- **Submission Result:** Not Accepted
- **Source Code (Initial/Fail):** Not available
- **Source Code (Final):** [src](./src)
- **Review Date:** 2026-11-28

## 2. Problem Statement in My Own Words

This problem asks us to calculate the displacement of a
particle in twice the given time.

- The input contains two integers, v and t, on each line.
- v represents the velocity of the particle at time t.
- The velocity ranges from -100 to 100.
- The time ranges from 0 to 200.
- The output is the displacement of the particle at time 2t.
- The program must continue reading input until EOF.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

- A possible approach is to use the formula for displacement.
- However, the initial velocity and acceleration are not given.
- Using v * t alone would not calculate the required
  displacement at twice the given time.

### Final Strategy

- Use two integer variables, v and t.
- Use a while loop to read input until EOF.
- Calculate the displacement using the formula 2 * v * t.
- Print the result on a separate line.
- Consider zero values, negative velocity, and maximum
  input values.

The formula works because, under constant acceleration:

v = u + a * t

The displacement at time 2t is:

s = u * (2t) + (1/2) * a * (2t)^2
s = 2 * t * (u + a * t)
s = 2 * v * t

Therefore, the initial velocity and acceleration
do not need to be calculated separately.

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

The variable n represents the number of input pairs.
Each input pair requires a constant number of
multiplication operations.

The program only uses two integer variables, so the
additional memory usage is constant.

## 4. Pseudocode

```text
START
1. Declare two integer variables, v and t.
2. WHILE input v and t is available:
3.     Calculate displacement = 2 * v * t.
4.     Print displacement.
5. END WHILE.
END
```

## 5. Fail Code vs Correct Code

### Fail Code

No previous failed source code is available for this problem

### Correct Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int v, t;

    while (cin >> v >> t) {
        cout << 2 * v * t << endl;
    }

    return 0;
}
```

**Why it works:**

- The formula 2 * v * t calculates the required displacement.
- The program supports positive and negative velocities.
- Zero input values are handled correctly.
- The maximum possible absolute result is 40000,
  which fits in a standard 32-bit int.
- The while loop processes all input pairs until EOF.

## 6. Test Evidence

| Test Category | Input Summary | Expected Result | Actual Result | Purpose |
|---|---|---|---|---|
| Normal case | 5 12 | 120 | Pending | Basic calculation |
| Normal case | 10 5 | 100 | Pending | Verify the formula |
| Boundary case | 100 200 | 40000 | Pending | Maximum input values |
| Boundary case | -100 200 | -40000 | Pending | Minimum velocity |
| Edge case | 0 0 | 0 | Pending | Zero input |
| Edge case | 10 0 | 0 | Pending | Zero time |
| Edge case | 0 100 | 0 | Pending | Zero velocity |
| Edge case | -5 12 | -120 | Pending | Negative velocity |

The test cases are designed to verify normal calculations,
boundary values, zero values, and negative velocities.

## 7. Difference and Reflection

### Key Differences

The following table compares a possible incorrect approach
with the proposed correct solution.

| Item | Fail Code Example | Correct Code |
|---|---|---|
| Logic | Uses v * t | Uses 2 * v * t |
| Edge Cases | Zero values work, but nonzero products are incorrect | Handles all valid inputs |
| Output Handling | Incorrect displacement | Correct displacement |
| Complexity | O(n) | O(n) |
| Code Quality | Simple but incorrect formula | Simple and correct formula |

### Reflection

- **Root cause:** A possible mistake is misunderstanding
  the required time and forgetting the multiplication by 2.

- **Lesson learned:** [Describe what I learned about
  converting mathematical formulas into C++ code.]

- **Next action:** [Describe how I will review mathematical
  formulas and test sample inputs before submitting code.]

## 8. AI Usage Disclaimer

ChatGPT was used to help me understand the problem,
provide a C++ solution, explain how the code works,
and organize the explanation in Markdown format.

### AI Usage Record

| Problem ID / Title | AI Tool Used | How It Was Used | Verification Performed Independently |
|---|---|---|---|
| UVa 10071 - Back to High School Physics | ChatGPT | C++ solution, explanation of the algorithm, and Markdown formatting | Not yet verified |

## 9. Final Re-review Checklist

- [ ] The problem information, source-code links, and submission result are accurate.
- [ ] The problem statement and reflection are written in my own words.
- [ ] The strategy, pseudocode, and complexity analysis match the final code.
- [ ] The fail-code explanation identifies a reproducible failing case or clearly explains what was incomplete.
- [ ] The test table includes actual evidence for normal, boundary, and edge cases.
- [ ] The AI usage record is complete and accurate.
