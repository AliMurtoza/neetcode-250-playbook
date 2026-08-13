# Methodology

This document defines how problems are approached, solved, and documented in the NeetCode 250 Playbook.

## 1. Understand the Problem

Before thinking about implementation, determine:

- What is given?
- What must be returned?
- What are the constraints?
- What are the important edge cases?
- What does the structure of the input suggest?

The goal is to understand the problem independently of any particular algorithm.

## 2. Develop an Initial Approach

Start with the most straightforward approach that comes to mind.

Do not immediately search for the optimal solution.

The purpose is to understand:

- What would a naive solution do?
- What is its complexity?
- What makes it inefficient?
- Which constraint prevents it from being sufficient?

## 3. Identify the Bottleneck

Determine what makes the initial approach inefficient.

Common bottlenecks include:

- Repeated searching
- Repeated computation
- Duplicate work
- Unnecessary traversal
- Inefficient lookup
- An unnecessarily large search space

## 4. Find the Key Observation

Look for the observation that eliminates the bottleneck.

This is often the most important part of the problem.

The documentation should capture:

> What changed the way I looked at this problem?

## 5. Identify the Pattern

Connect the key observation to an algorithmic pattern or data structure.

Possible patterns include:

- Hashing
- Two Pointers
- Sliding Window
- Stack
- Binary Search
- DFS
- BFS
- Heap / Priority Queue
- Backtracking
- Union Find
- Topological Sort
- Shortest Path
- Dynamic Programming
- Greedy Algorithms
- Intervals
- Bit Manipulation

The pattern should be explicitly identified in the problem documentation.

## 6. Implement

Write the solution in C++.

The implementation should prioritize:

- Correctness
- Readability
- Appropriate data structures
- Clear naming
- Avoiding unnecessary cleverness

## 7. Analyze Complexity

Record:

- Time complexity
- Space complexity

The explanation should make clear where the complexity comes from.

## 8. Verify the Solution

Consider:

- Normal cases
- Boundary cases
- Minimal inputs
- Empty inputs where applicable
- Duplicate values where applicable
- Large inputs
- Cases suggested by the constraints

## 9. Extract the Lesson

Every completed problem should leave behind something reusable.

Ask:

> If I encountered a different problem tomorrow, what clue from this problem would help me recognize the same technique?

This becomes the problem's recognition rule or takeaway.

## 10. Update the Playbook

When multiple problems reveal a recurring idea, that idea can be promoted into the higher-level `playbook/` documentation.

The playbook should therefore grow from the problems rather than exist separately from them.