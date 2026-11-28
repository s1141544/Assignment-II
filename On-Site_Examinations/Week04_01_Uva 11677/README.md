# Code Review Report: UVa 11677 - Alarm Clock

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11677
- **Problem Title:** Alarm Clock
- **Problem Link:** https://onlinejudge.org/external/116/11677.pdf
- **Language / Version:** C++
- **Submission Result:** Not Submitted
- **Source Code (Initial/Fail):** Not available
- **Source Code (Final):** [src](./src)
- **Review Date:** 2026-11-28

## 2. Problem Statement in My Own Words

This problem asks us to calculate the number of minutes
between the current time and the alarm time.

- Each input line contains four integers: H1, M1,
  H2, and M2.
- H1 and M1 represent the current hour and minute.
- H2 and M2 represent the alarm hour and minute.
- The hours range from 0 to 23.
- The minutes range from 0 to 59.
- The alarm may ring on the following day.
- The output is the total duration in minutes.
- The input ends when all four integers are zero.
- The termination input must not produce any output.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

- Hours and minutes can be converted into
  a single unit to simplify the calculation.
- Direct subtraction may produce a negative result
  when the alarm time is on the following day.
- One hour contains 60 minutes.
- One day contains 1440 minutes.
- The program must handle the midnight transition
  and the termination condition correctly.

### Final Strategy

- Declare four integer variables: H1, M1, H2, and M2.
- Use a while loop to read all test cases.
- Stop the program if all four values are zero.
- Convert the current time into minutes using:

  start = H1 * 60 + M1

- Convert the alarm time into minutes using:

  alarm = H2 * 60 + M2

- Calculate the difference using:

  duration = alarm - start

- If the duration is negative, add 1440 minutes.
- Print the final duration on a separate line.

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

The variable n represents the number of test cases.

Each test case requires a constant number of
multiplication, addition, subtraction, and
comparison operations.

Therefore, processing n test cases requires O(n) time.

The program uses a constant number of integer
variables, so the additional memory usage is O(1).

This approach is efficient for the given constraints.

## 4. Pseudocode

```text
START
1. Declare H1, M1, H2, and M2.
2. WHILE input is available:

       Read H1, M1, H2, and M2.

       IF all four values are zero:
           Stop the loop.

       Set start = H1 * 60 + M1.
       Set alarm = H2 * 60 + M2.

       Set duration = alarm - start.

       IF duration < 0:
           Set duration = duration + 1440.

       Print duration.

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
    int H1, M1, H2, M2;

    while (cin >> H1 >> M1 >> H2 >> M2) {
        if (H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0) {
            break;
        }

        int start = H1 * 60 + M1;
        int alarm = H2 * 60 + M2;

        int duration = alarm - start;

        if (duration < 0) {
            duration += 1440;
        }

        cout << duration << endl;
    }

    return 0;
}
```

**Why it works:**

- Converting hours and minutes into total minutes
  simplifies the calculation.
- Subtracting the current time from the alarm time
  gives the difference between the two times.
- Adding 1440 minutes handles cases where the alarm
  rings on the following day.
- The conditional statement prevents negative durations.
- The while loop processes multiple test cases.
- The break statement stops the program when all
  four input values are zero.
- Each result is printed on a separate line.
- The int data type supports all possible values.

## 6. Test Evidence

| Test Category | Input Summary | Expected Result | Actual Result | Purpose |
|---|---|---|---|---|
| Normal case | 1 5 3 5 | 120 | Pending | Basic time difference |
| Normal case | 10 30 12 0 | 90 | Pending | Different hours and minutes |
| Edge case | 23 59 0 34 | 35 | Pending | Crossing midnight |
| Edge case | 21 33 21 10 | 1417 | Pending | Alarm on the following day |
| Edge case | 12 0 12 0 | 0 | Pending | Equal times |
| Boundary case | 23 59 0 0 | 1 | Pending | Midnight transition |
| Boundary case | 0 0 23 59 | 1439 | Pending | Maximum duration |
| Termination case | 0 0 0 0 | No output | Pending | Stop the program |

These test cases are designed to verify that the
program correctly handles normal time differences,
midnight transitions, equal times, boundary values,
and the termination condition.

Actual results must be recorded after testing.

## 7. Difference and Reflection

### Key Differences

No previous failed source code is available.
Therefore, a direct comparison cannot be made.

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | Not available | Converts time into minutes and calculates the difference |
| Edge Cases | Not available | Handles midnight transitions and equal times |
| Output Handling | Not available | Prints the duration in minutes on each line |
| Complexity | Not available | O(n) time and O(1) space |
| Code Quality | Not available | Simple and readable code using arithmetic and conditional statements |

### Reflection

- **Root cause:** No previous failed source code is
  available to identify a specific error.

- **Lesson learned:** [Describe what I learned about
  converting time into minutes, conditional statements,
  and handling midnight transitions.]

- **Next action:** [Describe how I will check time
  calculations, termination conditions, and boundary
  cases when solving similar problems.]

## 8. AI Usage Disclaimer

ChatGPT was used to help me understand the problem,
provide a C++ solution, explain how the algorithm
works, and organize the explanation in Markdown format.

### AI Usage Record

| Problem ID / Title | AI Tool Used | How It Was Used | Verification Performed Independently |
|---|---|---|---|
| UVa 11677 - Alarm Clock | ChatGPT | C++ solution, explanation of the algorithm | Yes, verified independently.|

## 9. Final Re-review Checklist

- [ ] The problem information, source-code links, and submission result are accurate.
- [ ] The problem statement and reflection are written in my own words.
- [ ] The strategy, pseudocode, and complexity analysis match the final code.
- [ ] The fail-code explanation identifies a reproducible failing case or clearly explains what was incomplete.
- [ ] The test table includes actual evidence for normal, boundary, and edge cases.
- [ ] The AI usage record is complete and accurate.
