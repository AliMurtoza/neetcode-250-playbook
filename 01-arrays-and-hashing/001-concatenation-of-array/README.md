````markdown
# Concatenation of Array

## Problem

You are given an integer array `nums` of length `n`.

Create an array `ans` of length `2n` where:

```text
ans[i] = nums[i]
ans[i + n] = nums[i]
````

for `0 <= i < n`.

In other words, `ans` is the concatenation of `nums` with itself.

### Example 1

```text
Input:
nums = [1, 4, 1, 2]

Output:
[1, 4, 1, 2, 1, 4, 1, 2]
```

### Example 2

```text
Input:
nums = [22, 21, 20, 1]

Output:
[22, 21, 20, 1, 22, 21, 20, 1]
```

---

## Constraints

* `1 <= nums.length <= 1000`
* `1 <= nums[i] <= 1000`

---

## Prerequisites

Before attempting this problem, you should be comfortable with:

* Arrays
* Array indexing
* Basic iteration
* Creating and populating an array

---

# Approach 1 — Iteration (Two Pass)

## Intuition

To concatenate an array with itself, we need to create a new array containing all elements of the original array twice, maintaining the same order.

We can simply iterate through `nums` twice and append every element to the result array during each iteration.

For example:

```text
nums = [1, 2, 3]

First pass:
[1, 2, 3]

Second pass:
[1, 2, 3]

Result:
[1, 2, 3, 1, 2, 3]
```

## Algorithm

1. Initialize an empty result array.
2. Run an outer loop twice.
3. During each iteration of the outer loop, traverse every element of `nums`.
4. Append each element to the result array.
5. Return the result array.

## Code

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result_array;

        // We need two copies of nums,
        // so iterate through the input array twice.
        for (int iteration = 1; iteration <= 2; iteration++) {

            // Append every element of nums
            // during each pass.
            for (int num : nums) {
                result_array.push_back(num);
            }
        }

        return result_array;
    }
};
```

Implementation file: `solution-01-two-pass.cpp`

## Complexity

* **Time:** `O(n)`

  The input array is traversed twice, resulting in `2n` operations, which is `O(n)`.

* **Space:** `O(n)`

  The result array contains `2n` elements, so the output requires `O(n)` space.

---

# Approach 2 — Iteration (One Pass)

## Intuition

The first approach traverses `nums` twice.

However, the problem explicitly tells us where each element needs to go:

```text
ans[i] = nums[i]
ans[i + n] = nums[i]
```

This means that while traversing `nums` only once, we can place each element into both of its required positions in `ans`.

For example:

```text
nums = [1, 2, 3]
```

For `i = 0`:

```text
ans[0] = nums[0]
ans[3] = nums[0]
```

For `i = 1`:

```text
ans[1] = nums[1]
ans[4] = nums[1]
```

For `i = 2`:

```text
ans[2] = nums[2]
ans[5] = nums[2]
```

Result:

```text
[1, 2, 3, 1, 2, 3]
```

## Algorithm

1. Determine `n`, the length of `nums`.
2. Create a result array of size `2n`.
3. Iterate through `nums` using index `i`.
4. Set `result_array[i] = nums[i]`.
5. Set `result_array[i + n] = nums[i]`.
6. Return the result array.

## Code

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();

        // The result contains two copies of nums.
        vector<int> result_array(2 * n);

        for (int i = 0; i < n; i++) {

            // Place nums[i] in the first copy.
            result_array[i] = nums[i];

            // Place nums[i] in the second copy.
            result_array[i + n] = nums[i];
        }

        return result_array;
    }
};
```

Implementation file: `solution-02-one-pass.cpp`

## Complexity

* **Time:** `O(n)`

  We traverse `nums` once and perform two output assignments for each element. This results in `2n` writes, which is `O(n)`.

* **Space:** `O(n)`

  The result array contains `2n` elements, so the output requires `O(n)` space.

---

# Comparison of the Two Approaches

|                     | Two Pass               | One Pass                    |
| ------------------- | ---------------------- | --------------------------- |
| Traversal           | `nums` traversed twice | `nums` traversed once       |
| Result construction | Repeated `push_back()` | Direct index assignment     |
| Time                | `O(n)`                 | `O(n)`                      |
| Output space        | `O(n)`                 | `O(n)`                      |
| Main idea           | Repeat the traversal   | Use the given index mapping |
| Simplicity          | Very straightforward   | Slightly more deliberate    |

Both approaches have the same asymptotic time and space complexity.

The second approach is preferable because it directly uses the relationship defined by the problem.

---

# Key Observation

Each element `nums[i]` appears exactly twice in the result:

```text
nums[i] → result_array[i]
nums[i] → result_array[i + n]
```

Once this index relationship is recognized, the two-pass traversal is no longer necessary.

---

# Recognition

When a problem explicitly defines where an input element should appear in the output, look for a **direct index mapping**.

Here, the important mapping is:

```text
i
i + n
```

Both positions receive `nums[i]`.

---

# Common Pitfalls

## 1. Incorrect Result Size

The result must have size `2n`, not `n`.

```cpp
// Wrong
vector<int> result_array(n);

// Correct
vector<int> result_array(2 * n);
```

## 2. Incorrect Offset

The second copy begins at index `n`.

Therefore:

```cpp
result_array[i + n] = nums[i];
```

not an arbitrary offset.

## 3. Off-by-One Errors

Because arrays are zero-indexed, the valid indices of `nums` are:

```text
0 ... n - 1
```

---

# Takeaway

The first solution is straightforward because it directly models the idea of repeating the array twice.

The second solution uses the index relationship provided by the problem and constructs both copies simultaneously.

Both solutions have:

```text
Time:  O(n)
Space: O(n)
```

The important improvement is therefore **not asymptotic complexity**, but recognizing that the problem already tells us exactly where each element belongs.

---

## Solutions

* `solution-01-two-pass.cpp` — Two-pass iteration
* `solution-02-one-pass.cpp` — One-pass iteration using direct index mapping

```
```
