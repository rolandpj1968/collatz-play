# Chapter 2 - Monotonically Increasing Odd-Collatz Subsequences Are Finite in Length

In [Chapter 1](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md) we introduced the [definition of the Odd-Collatz generator function](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md#definition-1a) $`f_o`$ which produces _Odd-Collatz_ sequences, and proved the result that there are monotonically increasing Odd-Collatz subsequences of arbitrarily length.

In this chapter we will show that although there is no upper bound on the length of a monotonically increasing Odd-Collatz subsequence, all monotonically increasing Odd-Collatz subsequences are finite in length.

We first establish a closed-form expression for all elements of a monotonically increasing Odd-Collatz subsequence.

## Lemma 2A

The Odd-Collatz subsequence $`n, \dots, f_o^{i-1}(n)`$  of length $`i > 1`$ is monotonically increasing *iff* $`n = 2^{i}m + 2^{i} - 1`$, $`f_o^{i-1}(n) = 2.3^{i-1}m + 2.3^{i-1} - 1`$ for some $`m \geq 0`$.

*Note: $`i > 0`$ implicitly since a (sub)sequence of length less than one is not well-defined. We explicitly exclude the trivial case of length one Odd-Collatz sequences here.*

### Proof

By induction on $`i`$.

#### Base Case

The proof for the base case $`i = 2`$ is a restatement of [Lemma 1B'](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md#lemma-1b-1') which states that $`n < f_o(n)`$ *iff* $`n = 4m+3 = 2^{2}m + 2^{2} - 1`$ for some $`m \geq 0`$. Moreover, for $`n = 4m+3`$ the proof of [Lemma 1B](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md#lemma-1b') shows that $`f_o(n) = 6m+5 = 2.3^{2-1}m + 2.3^{2-1} - 1`$.

#### Inductive Step

We now prove the inductive step. 

Accordingly, assume that the lemma is true for all $`j < i`$.

We first prove the forwards direction of the inductive case. Assume that $`n, f_o(n), \dots, f_o^{i-1}(n)`$ is a monotonically increasing Odd-Collatz subsequence of length $`i`$. Now $`n, f_o(n), \dots, f_o^{i-2}(n)`$ is a monotonically increasing Odd-Collatz subsequence of length $`i-1`$ and hence by the inductive assumption with $`j = i-1`$ we have that $`n = 2^{i-1}m' + 2^{i-1} - 1`$, and $`f_o^{i-2}(n) = 2.3^{i-2}m' + 2.3^{i-2} - 1`$ for some $`m' \geq 0`$.

Consider $`3f_o^{i-2}(n) + 1 = 3(2.3^{i-2}m' + 2.3^{i-2} - 1) + 1 = 2.3^{i-1}m' + 2.3^{i-1} - 3 + 1 = 2(3^{i-1}m' + 3^{i-1} - 1)`$. From that we see that $`f_o^{i-1}(n) = 3^{i-1}m' + 3^{i-1} - 1`$ only if $`m'`$ is odd, since $`3^{i-1}`$ is odd and $`3^{i-1} - 1`$ is even for any $`i`$.

It follows that $`m' = 2m+1`$ for some $`m > 0`$, and substituting this expression back, we get $`n = 2^{i-1}(2m+1) + 2^{i-1} - 1 = 2^{i}m + 2^{i-1} + 2^{i-1} - 1 = 2^{i}m + 2^{i} - 1`$ as required. In addition, $`f_o^{i-1}(n) = 3^{i-1}(2m+1) + 3^{i-1} - 1 = 2.3^{i-1}m + 3^{i-1} + 3^{i-1} - 1 = 2.3^{i-1}m + 2.3^{i-1} - 1`$ as required.

This proves the forwards direction for the inductive step.

We now prove the reverse direction. Assume that $`n = 2^{i}m + 2^{i} - 1`$ for some $`m \geq 0`$. Then $`n = 2^{i-1}.2m + 2^{i-1} + 2^{i-1} - 1 = 2^{i-1}(2m+1) + 2^{i-1} - 1 = 2^{i-1}m' + 2^{i-1} - 1`$ where $`m' = 2m+1`$. By the inductive assumption we then have that $`n, f_o(n), \dots, f_o^{i-2}(n)`$ is a monotonically increasing Odd-Collatz subsequence of length $`i-1`$, and then, also by the inductive assumption, we have that $`f_o^{i-2}(n) = 2.3^{i-2}m' + 2.3^{i-2} - 1`$.

It follows that $`f_o^{i-2}(n) = 2.3^{i-2}(2m+1) + 2.3^{i-2} - 1 = 4(3^{i-2}m + 3^{i-2} - 1) + 3`$ and by [Lemma 1B](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md#lemma-1b) we have that $`f_o^{i-2}(n) < f_o^{i-1}(n)`$, and so $`n, f_o(n), \dots, f_o^{i-2}(n), f_o^{i-1}(n)`$ is a monotonically increasing Collatz sequence of length $`i`$ as required.

QED

## Lemma 2B

The smallest first value $`n`$ of a monotonically increasing Odd-Collatz subsequence of length $`i > 1`$ is $`n = 2^i - 1`$.

### Proof

[Lemma 2A](#lemma-2a) states that $`n`$ is the first value of a monotonically increasing Odd-Collatz subsequence of length $`i > 1`$ only if $`n = 2^{i}m + 2^{i} - 1`$ for some positive integer $`m`$.

Since $`2^{i}m + 2^{i} - 1`$ is a positive linear function of $`m`$ for all $`i`$, its minimum value occurs at the minimum value of $`m = 0`$ for which $`n = 2^{i} - 1`$.

QED

## Theorem 2

All monotonically increasing Odd-Collatz subsequences are finite in length.

### Proof

By reductio ad absurdum.

Assume that there exists a monotonically increasing Odd-Collatz subsequence of infinite length, and consider the first value, $`n`$ of this subsequence.

Let $`i = \lfloor log_2(n) \rfloor + 2`$, where $`\lfloor x \rfloor`$ is the integer *floor* function defined as $`\lfloor x \rfloor`$, for real x, is the largest integer less than or equal to $`x`$.

We already know that $`n > 2`$ by [trivial empiricism](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md#definition-1a), hence we only need to consider the case $`i > 2`$ and so [Lemma 2B](#lemma-2b) applies .

By [Lemma 2B](#lemma-2b) we have that the smallest value $`n'`$ for which $`n'`$ is the initial value of a monotonically increasing Odd-Collatz subsequence of length $`i`$, is $`n' = 2^{i} - 1`$.

Moreover $`log_2(n) \leq i-2`$, i.e. $`log_2(n) < i-1`$, by the definition of $`i`$, and hence $`n < 2^{i-1} < 2^i - 1 = n'`$.

Lastly, since we assumed that $`n`$ is the first value of an infinite monotonically increasing Odd-Collatz subsequence, it is also the first value of a monotonically increasing Odd-Collatz subsequence of length $`i`$. This is a clear contradiction, since $`n`$ is smaller than the minimum required first value of such a subsequence.

Hence our assumption is wrong, and there exists no monotonically increasing Odd-Collatz subsequence of infinite length.

QED
