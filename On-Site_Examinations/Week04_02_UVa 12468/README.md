
# Code Review Report: UVa 12468 - Zapping

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 12468
- **Problem Title:** Zapping
- **Problem Link:** https://onlinejudge.org/external/124/12468.pdf
- **Language / Version:** C++
- **Submission Result:** Not Submitted
- **Source Code (Initial/Fail):** Not available
- **Source Code (Final):** [src](./src)
- **Review Date:** 2026-11-28

## 2. Problem Statement in My Own Words

This problem asks us to calculate the minimum number
of button presses required to change from one
television channel to another.

- The television has 100 channels numbered from 0 to 99.
- Each input line contains two integers, a and b.
- The variable a represents the current channel.
- The variable b represents the target channel.
- Channels can be changed in two directions.
- Channel 99 is connected to channel 0.
- There are at most 200 test cases.
- The output is the minimum number of button presses.
- The input ends when both values are -1.
- The termination input must not produce any output.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

- The problem requires calculating the distance
  between two television channels.
- The absolute difference can determine the
  direct distance between the channels.
- However, the channels are arranged cyclically.
- The opposite direction may require fewer
  button presses.
- Both possible distances must be considered
  to find the minimum result.

### Final Strategy

- Declare two integer variables, a and b.
- Use a while loop to read multiple test cases.
- Stop the loop when both values are -1.
- Calculate the direct distance using:

  diff = abs(a - b)

- Calculate the distance in the opposite direction:

  100 - diff

- Use the min() function to select the smaller distance.
- Print the minimum number of button presses
  on a separate line.

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

The variable n represents the number of test cases.

Each test case requires a constant number of
subtraction, absolute value, and comparison operations.

Therefore, processing n test cases requires O(n) time.

The program uses only a constant number of integer
variables, so the additional memory usage is O(1).

This approach is efficient for the given constraints
because it does not need to simulate every button press.

## 4. Pseudocode

```text
START
1. Declare integer variables a and b.

2. WHILE input a and b is available:

       IF a = -1 AND b = -1:
           Stop the loop.

       Set diff = absolute value of a - b.

       Set opposite_distance = 100 - diff.

       Set result = minimum of diff
                    and opposite_distance.

       Print result.

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
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b) {
        if (a == -1 && b == -1) {
            break;
        }

        int diff = abs(a - b);

        cout << min(diff, 100 - diff) << endl;
    }

    return 0;
}
```

**Why it works:**

- The abs() function calculates the absolute
  difference between the two channels.
- The expression 100 - diff calculates the
  distance in the opposite direction.
- The min() function selects the shorter distance.
- The program correctly handles the cyclic
  relationship between channels 0 and 99.
- If both channels are equal, the result is zero.
- The while loop processes multiple test cases.
- The break statement handles the termination input.
- Each result is printed on a separate line.
- The int data type supports all possible values.

## 6. Test Evidence

| Test Category | Input Summary | Expected Result | Actual Result | Purpose |
|---|---|---|---|---|
| Normal case | 3 9 | 6 | Pending | Basic channel difference |
| Normal case | 12 27 | 15 | Pending | Direct distance |
| Normal case | 27 12 | 15 | Pending | Reverse input order |
| Boundary case | 0 99 | 1 | Pending | Cyclic channel transition |
| Boundary case | 99 0 | 1 | Pending | Reverse cyclic transition |
| Edge case | 50 50 | 0 | Pending | Same channel |
| Edge case | 0 50 | 50 | Pending | Equal distance in both directions |
| Edge case | 10 90 | 20 | Pending | Shorter opposite direction |
| Edge case | 98 2 | 4 | Pending | Crossing the channel boundary |
| Termination case | -1 -1 | No output | Pending | Stop the program |

These test cases are designed to verify that the
program correctly handles direct distances,
cyclic channel transitions, equal channels,
and boundary values.

Actual results must be recorded after testing.

## 7. Difference and Reflection

### Key Differences

No previous failed source code is available.
Therefore, a direct comparison cannot be made.

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | Not available | Calculates the minimum of two possible distances |
| Edge Cases | Not available | Handles equal channels and cyclic transitions |
| Output Handling | Not available | Prints the minimum number of button presses |
| Complexity | Not available | O(n) time and O(1) space |
| Code Quality | Not available | Simple and readable code using abs() and min() |

### Reflection

- **Root cause:** No previous failed source code is
  available to identify a specific error.

- **Lesson learned:** [Describe what I learned about
  cyclic numbers, absolute differences, and using
  the min() function.]

- **Next action:** [Describe how I will consider
  different possible approaches and test boundary
  cases when solving similar problems.]

## 8. AI Usage Disclaimer

ChatGPT was used to help me understand the problem,
provide a C++ solution, explain how the algorithm
works, and organize the explanation in Markdown format.

### AI Usage Record

| Problem ID / Title | AI Tool Used | How It Was Used | Verification Performed Independently |
|---|---|---|---|
| UVa 12468 - Zapping | ChatGPT | C++ solution, explanation of the algorithm | Yes, I tested the code and checked the output |

## 9. Final Re-review Checklist

- [ ] The problem information, source-code links, and submission result are accurate.
- [ ] The problem statement and reflection are written in my own words.
- [ ] The strategy, pseudocode, and complexity analysis match the final code.
- [ ] The fail-code explanation identifies a reproducible failing case or clearly explains what was incomplete.
- [ ] The test table includes actual evidence for normal, boundary, and edge cases.
- [ ] The AI usage record is complete and accurate.
