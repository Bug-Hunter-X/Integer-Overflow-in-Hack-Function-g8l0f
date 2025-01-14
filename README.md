# Integer Overflow Bug in Hack

This repository demonstrates a subtle integer overflow bug in a Hack program. The `baz` function, when given a sufficiently large negative integer, returns an incorrect result due to integer overflow in the `bar` function.

## Bug Description

The bug lies in the addition operation within the `bar` function. If the result of `foo(x) + 1` exceeds the maximum value representable by an `int`, integer overflow occurs, resulting in an unexpected value. This issue is particularly relevant when dealing with negative integers and can be difficult to detect.

## Solution

The solution involves using a larger integer type that can accommodate larger values, such as `int64`, or carefully checking for potential overflow before the addition operation.  This prevents integer overflow, ensuring the correctness of the function's return value.

## How to Reproduce

1. Clone this repository.
2. Compile and run the `bug.hh` file using a Hack compiler.
3. Observe the incorrect output for large negative inputs.
4. Compare the output with the corrected `bugSolution.hh` file which demonstrates the solution.