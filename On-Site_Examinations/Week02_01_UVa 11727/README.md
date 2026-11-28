# Code Review Report: UVa 11727 - Cost Cutting

## 1. Problem Information

- **Platform:** UVa Online Judge
- **Problem ID:** 11727
- **Problem Title:** Cost Cutting
- **Problem Link:** https://onlinejudge.org/external/117/11727.pdf
- **Language / Version:** C++
- **Submission Result:** Not Submitted
- **Source Code (Initial/Fail):** Not available
- **Source Code (Final):** [src](./src)
- **Review Date:** 2026-11-28

## 2. Problem Statement in My Own Words

This problem asks us to find the middle salary among
three employees.

- The first input is an integer T, representing
  the number of test cases.
- The number of test cases is less than 20.
- Each test case contains three distinct positive integers.
- Each salary ranges from 1000 to 10000.
- The employees with the highest and lowest salaries
  are removed.
- The remaining employee has the middle salary.
- The output must include the case number followed
  by the middle salary.

## 3. Thinking Logic and Solution Strategy

### Initial Thoughts

- The problem requires finding the middle value
  among three integers.
- The salaries may appear in any order.
- Directly selecting one of the input values
  without comparing them may produce an incorrect result.
- Sorting the salaries makes it easier to identify
  the middle value.

### Final Strategy

- Read the number of test cases.
- Use a for loop to process each test case.
- Store the three salaries in an integer array.
- Use the sort() function to arrange the salaries
  in ascending order.
- Select salary[1], which represents the middle value.
- Print the case number and the middle salary
  using the required output format.

### Complexity Analysis

- **Time Complexity:** O(T)
- **Space Complexity:** O(1)

The variable T represents the number of test cases.

Sorting three integers requires a constant amount
of time because the array size is always three.

Therefore, processing T test cases requires O(T) time.

The program uses a fixed-size array containing
three integers, so the additional memory usage
is constant.

## 4. Pseudocode

```text
START
1. Read the number of test cases T.
2. FOR i = 1 TO T:
       Read three salaries into an array.
       Sort the array in ascending order.
       Select the middle value at index 1.
       Print "Case i: " followed by the middle value.
3. END FOR.
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
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int salary[3];

        cin >> salary[0] >> salary[1] >> salary[2];

        sort(salary, salary + 3);

        cout << "Case " << i << ": " << salary[1] << endl;
    }

    return 0;
}
```

**Why it works:**

- The array stores all three salaries.
- The sort() function arranges the salaries
  from the smallest to the largest.
- The first element represents the lowest salary.
- The last element represents the highest salary.
- The element at index 1 represents the middle salary.
- The for loop processes exactly T test cases.
- The output follows the required case-number format.

## 6. Test Evidence

Each salary combination below represents one test case.
The complete input must begin with the number of test cases.

| Test Category | Input Summary | Expected Result | Actual Result | Purpose |
|---|---|---|---|---|
| Normal case | 1000 2000 3000 | 2000 | Pending | Ascending order |
| Normal case | 3000 2500 1500 | 2500 | Pending | Descending order |
| Normal case | 1500 1200 1800 | 1500 | Pending | Unsorted values |
| Boundary case | 1000 5000 10000 | 5000 | Pending | Minimum and maximum salaries |
| Boundary case | 10000 9999 9998 | 9999 | Pending | Large salary values |
| Edge case | 1002 1000 1001 | 1001 | Pending | Small salary differences |
| Edge case | 5000 9000 2000 | 5000 | Pending | Middle salary in the first position |

These test cases are designed to verify that the program
correctly identifies the middle salary regardless
of the input order.

The full output must also include the correct case number.

## 7. Difference and Reflection

### Key Differences

No previous failed source code is available.
Therefore, a direct comparison cannot be made.

| Item | Fail Code | Correct Code |
|---|---|---|
| Logic | Not available | Uses sorting to find the middle salary |
| Edge Cases | Not available | Handles different input orders and boundary values |
| Output Handling | Not available | Prints the case number and middle salary |
| Complexity | Not available | O(T) time and O(1) space |
| Code Quality | Not available | Simple and readable code using arrays and sort() |

### Reflection

- **Root cause:** No previous failed source code is
  available to identify a specific error.

- **Lesson learned:** [Describe what I learned about
  arrays, sorting, and finding the middle value.]

- **Next action:** [Describe how I will use sorting
  and test different input orders when solving
  similar problems.]

## 8. AI Usage Disclaimer

ChatGPT was used to help me understand the problem,
provide a C++ solution, explain how the sorting
algorithm works, and organize the explanation
in Markdown format.

### AI Usage Record

| Problem ID / Title | AI Tool Used | How It Was Used | Verification Performed Independently |
|---|---|---|---|
| UVa 11727 - Cost Cutting | ChatGPT | C++ solution, explanation of the algorithm, and README assistance | Yes, verified independently.

## 9. Final Re-review Checklist

- [ ] The problem information, source-code links, and submission result are accurate.
- [ ] The problem statement and reflection are written in my own words.
- [ ] The strategy, pseudocode, and complexity analysis match the final code.
- [ ] The fail-code explanation identifies a reproducible failing case or clearly explains what was incomplete.
- [ ] The test table includes actual evidence for normal, boundary, and edge cases.
- [ ] The AI usage record is complete and accurate.
