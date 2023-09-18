# Chapter 2 - Monotonically Increasing Odd-Collatz Subsequences Are Finite in Length

In [Chapter 1](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md) we introduced the [definition of the Odd-Collatz generator function](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md#definition-1a) $`f_o`$ which produces _Odd-Collatz_ sequences, and proved the result that there are monotonically increasing Odd-Collatz subsequences of arbitrarily length.

In this chapter we will show that although there is no upper bound on the length of a monotonically increasing Odd-Collatz subsequence, all monotonically increasing Odd-Collatz subsequences are finite in length.

We first establish a precise closed-form formula for all elements of a monotonically increasing Odd-Collatz subsequence.

## Lemma 2A

$`n`$ is the first value of a monotonically increasing Odd-Collatz subsequence of length $`i > 2`$ *iff* $`n = 2^{i}m + 2^{i} - 1`$, $`f_o^i(n) = 2.3^{i}m + 2.3^{i} - 1`$ for some $`m \geq 0`$.

*Note: $`i > 0`$ implicitly since a (sub)sequence of length less than one is not well-defined. We explicitly exclude the trivial case of length one Odd-Collatz sequences here. We further do not here consider the case $`i = 2`$, which does not obey the above formulae and is already covered by [Lemma 1B'](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md#lemma-1b-1).*

### Proof

By induction on $`i`$.

#### Base Case

Take $`i = 3`$, the base case for $`i > 2`$ and consider the Odd-Collatz subsequence $`n, f_o(n), f_o^2(n)`$.

We first prove the forwards direction of the base case, so assume $`n, f_o(n), f_o^2(n)`$ is a monotonically increasing Odd-Collatz sequence, i.e. $`n < f_o(n) < f_o^2(n)`$. From [Lemma 1B'](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md#lemma-1b-1) we have that $`n < f_o(n)`$ only if $`n = 4m'+3`$ for some $`m' \geq 0`$ and then $`f_o(n) = 6m'+5`$. Now consider $`3f_o(n) + 1 = 3(6m'+5) + 1 = 18m' + 16 = 2(9m' + 8)`$. Hence $`f_o(f_o(n)) = 9m'+8`$ only if $`m'`$ is odd so that $`9m'+8`$ is odd, i.e. $`m' = 2m+1`$ for some $`m \geq 0`$. From this we get that $`n = 4m'+3 = 4(2m+1) + 3 = 8m+7 = 2^{3}m + 2^3 - 1`$ as required for $`i = 3`$. In addition, $`f_o^2(n) = 9m'+8 = 9(2m+1) + 8 = 18m + 17 = 2.3^{3-1}m + 2.3^{3-1} - 1`$ as required for $`i = 3`$.

For the reverse direction of the base case, assume for $`i = 3`$ that we have $`n = 2^{3}m + 2^3 - 1`$. We now show that $`n < f_o(n) < f_o^2(n)`$. Firstly, $`n = 2^{3}m + 2^3 - 1 = 2^{3}m + 2^3 - 4 + 3 = 4(2m+1) + 3`$ and by [Lemma 1B](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md#lemma-1b) we have that $`n < f_o(n)`$ and $`f_o(n) = 6(2m+1) + 5 = 12m + 11 = 12m + 8 + 3 = 4(3m+2) + 3`$. Again by [Lemma 1B](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md#lemma-1b) we have that $`f_o(n) < f_o^2(n)`$, and put together we have that $`n < f_o(n) < f_o^2(n)`$, i.e. $`n, f_o(n), f_o^2(n)`$ is a monotonically increasing Odd-Collatz subsequence of length 3 as required for $`i = 3`$.

#### Inductive Step

We now prove the inductive step. 

Accordingly, assume that the lemma is true for all $`j < i`$.

We first prove the forwards direction of the inductive case. Assume that $`n, f_o(n), \dots, f_o^{i-1}(n)`$ is a monotonically increasing Odd-Collatz subsequence of length $`i`$. Now $`n, f_o(n), \dots, f_o^{i-2}(n)`$ is a monotonically increasing Odd-Collatz subsequence of length $`i-1`$ and hence with $`j = i-1`$ we have that $`n = 2^{i-1}m' + 2^{i-1} - 1`$, and $`f_o^{i-2}(n) = 2.3^{i-1}m' + 2.3^{i-1} - 1`$ for some $`m' \geq 0`$ by the inductive assumption.

Consider $`3f_o^{i-2}(n) + 1 = 3(2.3^{i-1}m' + 2.3^{i-1} - 1) + 1 = 2.3^{i}m' + 2.3^{i} - 3 + 1 = 2(3^{i}m' + 3^{i} - 1)`$. Hence $`f_o^{i-1}(n) = 3^{i}m' + 3^{i} - 1`$ only if $`m'`$ is odd, since $`3^{i}`$ is odd and $`3^{i} - 1`$ is even given that $`i > 0`$.

It follows that $`m' = 2m+1`$ for some $`m > 0`$, and substituting this expression back, we get $`n = 2^{i-1}(2m+1) + 2^{i-1} - 1 = 2^{i}m + 2^{i-1} + 2^{i-1} - 1 = 2^{i}m + 2^{i} - 1`$ as required. In addition, $`f_o^{i-1}(n) = 3^{i}(2m+1) + 3^{i} - 1 = 2.3^{i}m + 3^{i} + 3^{i} - 1 = 2.3^{i}m + 2.3^{i} - 1`$ as required.

This proves the forwards direction of the inductive case.

We now prove the reverse direction. Assume that $`n = 2^{i}m + 2^{i} - 1`$ for some $`m \geq 0`$. Then $`n = 2^{i-1}.2m + 2^{i-1} + 2^{i-1} - 1 = 2^{i-1}(2m+1) + 2^{i-1} - 1 = 2^{i-1}m' + 2^{i-1} - 1`$ where $`m' = 2m+1`$. By the inductive assumption we then have that $`n, f_o(n), \dots, f_o^{i-2}(n)`$ is a monotonically increasing Odd-Collatz subsequence of length $`i-1`$, and then, also by the inductive assumption, we have that $`f_o^{i-2}(n) = 2.3^{i-1}m' + 2.3^{i-1} - 1`$.

It follows that $`f_o^{i-2}(n) = 2.3^{i-1}(2m+1) + 2.3^{i-1} - 1 = 4(3^{i-1}m + 3^{i-1} - 1) + 3`$ and by [Lemma 1B](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md#lemma-1b) we have that $`f_o^{i-2}(n) < f_o^{i-1}(n)`$, and so $`n, f_o(n), \dots, f_o^{i-2}(n), f_o^{i-1}(n)`$ is a monotonically increasing Collatz sequence of length $`i`$ as required.

QED

## Lemma 2B

The smallest first value $`n`$ of a monotonically increasing Odd-Collatz subsequence of length $`i > 2`$ is $`n = 2^i - 1`$.

### Proof

[Lemma 2A](#lemma-2a) states that $`n`$ is the first value of a monotonically increasing Odd-Collatz subsequence of length $`i > 2`$ only if $`n = 2^{i}m + 2^{i} - 1`$ for some positive integer $`m`$.

Since $`2^{i}m + 2^{i} - 1`$ is a positive linear function of $`m`$ for all $`i`$, its minimum value occurs at the minimum value of $`m = 0`$ for which $`n = 2^{i} - 1`$.

QED

## Theorem 2

All monotonically increasing Odd-Collatz subsequences are finite in length.

### Proof

By reductio ad absurdum.

Assume that there exists a monotonically increasing Odd-Collatz subsequence of infinite length, and consider the first value, $`n`$ of this subsequence.

Let $`i = \lfloor log_2(n) \rfloor + 2`$, where $`\lfloor \rfloor`$ is the integer *floor* function defined as $`\lfloor x \rfloor`$, for real x, is the largest integer less than or equal to $`x`$.

$`n > 2`$ by [trivial empiricism](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md#definition-1a), hence we only need to consider the case $`i > 2`$ and so [Lemma 2B](#lemma-2b) applies .

By [Lemma 2B](#lemma-2b) we have that the smallest value $`n'`$ for which $`n'`$ is the initial value of a monotonically increasing Odd-Collatz subsequence of length $`i`$, is $`n' = 2^{i} - 1`$.

Moreover $`log_2(n) \leq i-2`$, i.e. $`log_2(n) < i-1`$ by the definition of $`i`$, and hence $`n < 2^{i-1} < 2^i - 1 = n'`$.

Lastly, since we assumed that $`n`$ is the first value of an infinite monotonically increasing Odd-Collatz subsequence, it is also the first value of a monotonically increasing Odd-Collatz subsequence of length $`i`$. This is a clear contradiction, since $`n`$ is smaller than the minimum required first value of such a subsequence.

Hence our assumption is wrong, and there exists no monotonically increasing Odd-Collatz subsequence of infinite length.

QED





