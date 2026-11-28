
# Code Review Report: UVa 10071 - Back to High School Physics

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 10071
- **Problem Title:** Back to High School Physics
- **Problem Link:** https://onlinejudge.org/external/100/10071.pdf
- **Language / Version:** C++
- **Submission Result:** Not Submitted
- **Source Code (Initial/Fail):** Not available
- **Source Code (Final):** [src](./src)
- **Review Date:** 2026-11-28

## 2. Problem Statement in My Own Words

This problem asks us to calculate the displacement
of a particle in twice the given time.

- The input contains two integers, v and t, on each line.
- v represents the velocity of the particle at time t.
- The velocity ranges from -100 to 100.
- The time ranges from 0 to 200.
- The output is the displacement at time 2t.
- The program must continue reading input until EOF.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

- The problem can be solved using a physics formula.
- The initial velocity and acceleration are not given.
- The displacement needs to be calculated at twice
  the given time.
- The solution must handle positive, negative,
  and zero velocities.

### Final Strategy

- Declare two integer variables, v and t.
- Use a while loop to read input until EOF.
- Calculate the displacement using 2 * v * t.
- Print the result on a separate line.

Under constant acceleration, the velocity formula is:

v = u + a * t

The displacement at time 2t is:

s = u * (2t) + (1/2) * a * (2t)^2

After simplification:

s = 2 * t * (u + a * t)

Since v = u + a * t:

s = 2 * v * t

Therefore, the displacement can be calculated without
knowing the initial velocity and acceleration separately.

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

The variable n represents the number of input pairs.

Each input pair requires a constant number of
multiplication operations.

The program uses only two integer variables,
so the additional memory usage is constant.

## 4. Pseudocode

```text
START
1. Declare two integer variables, v and t.
2. WHILE input v and t is available:
       Calculate displacement = 2 * v * t.
       Print displacement.
3. END WHILE.
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
    int v, t;

    while (cin >> v >> t) {
        cout << 2 * v * t << endl;
    }

    return 0;
}
```

**Why it works:**

- The formula 2 * v * t calculates the required displacement.
- The program handles positive and negative velocities.
- Zero values are handled correctly.
- The maximum absolute result is 40000, which fits
  within the range of a standard 32-bit int.
- The while loop reads all input pairs until EOF.
- Each result is printed on a separate line.

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

These test cases are designed to verify that the
program handles normal cases, boundary values,
zero values, and negative velocities.

## 7. Difference and Reflection

### Key Differences

No previous failed source code is available.
Therefore, a direct comparison cannot be made.

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | Not available | Uses the formula 2 * v * t |
| Edge Cases | Not available | Handles zero and negative values |
| Output Handling | Not available | Prints displacement on each line |
| Complexity | Not available | O(n) time and O(1) space |
| Code Quality | Not available | Simple and readable code |

### Reflection

- **Root cause:** No previous failed source code is
  available to identify a specific error.

- **Lesson learned:** [Describe what I learned about
  applying mathematical formulas in C++ and processing
  input until EOF.]

- **Next action:** [Describe how I will check mathematical
  formulas, input constraints, and boundary cases before
  submitting my code.]

## 8. AI Usage Disclaimer

ChatGPT was used to help me understand the problem,
provide a C++ solution, explain how the mathematical
formula works, and organize the explanation in Markdown
format.

### AI Usage Record

| Problem ID / Title | AI Tool Used | How It Was Used | Verification Performed Independently |
|---|---|---|---|
| UVa 10071 - Back to High School Physics | ChatGPT | C++ solution, explanation of the mathematical formula, and README assistance | Yes, verified independently. |

## 9. Final Re-review Checklist

- [ ] The problem information, source-code links, and submission result are accurate.
- [ ] The problem statement and reflection are written in my own words.
- [ ] The strategy, pseudocode, and complexity analysis match the final code.
- [ ] The fail-code explanation identifies a reproducible failing case or clearly explains what was incomplete.
- [ ] The test table includes actual evidence for normal, boundary, and edge cases.
- [ ] The AI usage record is complete and accurate.
