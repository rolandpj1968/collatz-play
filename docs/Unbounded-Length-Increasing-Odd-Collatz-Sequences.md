# Background

https://en.wikipedia.org/wiki/Collatz_conjecture defines Collatz sequences and introduces the unproven Collatz Conjecture.

Here we assume familiarity with the above basic definitions, and consider a minor variant generator function that obviates consideration of even numbers.

Accordingly we consider odd integers only, and define the following (Odd-Collatz) generator function:

&nbsp;&nbsp;&nbsp;&nbsp;$`f_o(n) = m`$, where $`m`$ is odd and $`3n + 1 = 2^i.m`$, defined for odd positive $`n`$
 
An Odd-Collatz sequence starting with an odd positive integer $`n`$ is then generated as $`n, f_o(n), f_o((f_o(n)), \dots`$ and trivially comprises odd positive integers only.

Intuitively, the Odd-Collatz generator function computes the characteristic $`3n+1`$ Collatz generator function _and_ removes all multiples of $`2`$ in a single step.

It can be trivially seen that there is a 1:1 mapping between Odd-Collatz sequences and Collatz sequences starting with an odd number. In fact the Odd-Collatz sequence corresponding to a given Collatz sequence is exactly that Collatz sequence with all even numbers removed. On the other hand the Collatz sequence corresponding with a given Odd-Collatz sequence is that Odd-Collatz sequence with even numbers added in between each pair of sequence elements according to the (original) Collatz generator function.

It is also trivially observed that Collatz sequences starting with even numbers add nothing interesting to the problem space - they simply reduce to an initial odd number in the sequence once all possible divisions by $`2`$ are complete.

# Lemma A

$`f_o(n) < n`$ for $`n = 4m+1`$, where $`m`$ is a positive integer

## Proof

$`3n+1 = 3(4m+1) + 1 = 12m + 4 = 2^2.(3m+1)`$

Hence $`f_o(n) <= 3m+1 < 4m+1 = n`$.

QED.

Note that $`3m+1`$ might contain further factors of $`2`$, hence $`f_o(n) <= 3m+1`$ is an inequality.

Note too that we exclude the special case $`m = 0`$, i.e. $`n = 1`$, for which $`3m+1 = 4m+1`$, and $`n = f_o(n) = 1`$.

# Lemma B

$`f_o(n) > n`$ for $`n = 4m+3`$, where $`m`$ is a non-negative integer

## Proof

$`3n+1 = 3(4m+3) + 1 = 12m + 10 = 2(6m+5)`$

Since $`6m`$ is even, $`6m+5`$ is odd, hence $`f_o(n) = 6m+5 > 4m+3 = n`$.

QED

# Discussion of Lemma A and Lemma B

Lemma A and Lemma B allow us to partition $`f_o(n)`$ into three cases:
  1. $`n = 1`$, $`f_o(n) = n = 1`$
  2. $`n = 4m+1`$, $`m > 0`$, where $`f_o(n) < n`$
  3. $`n = 4m+3`$, $`m >= 0`$, where $`f_o(n) > n`$

Note that this covers all odd positive integers $`n`$.

We can further consider Odd-Collatz _sequences_, which will comprise the stationary (trailing) subsequence $`1, 1, 1, \dots`$, rising subsequences where $`f_o^i(n) < f_o^{i+1}(n) < f_o^{i+2}(n) < \dots`$, and falling subsequences where $`f_o^i(n) > f_o^{i+1}(n) > f_o^{i+2}(n) > \dots`$

For rising subsequences, all $`f_o^i(n)`$ within the rising subsequence are of the form $`4m_i+3`$ (except the last element of the sequence which starts a new falling sequence); similar for falling subsequences vis-a-vis $`4m_i+1`$.

Odd-Collatz sequences comprise alternating rising and falling subsequences, possibly followed by the stationary subsequence containing only the value $`1`$. The Collatz Conjecture is trivially equivalent to the conjecture that, regardless of the starting value $`n`$, _all_ infinite Odd-Collatz sequences have a (trailing) stationary sequence, which is again exactly equivalent to the conjecture that _every_ infinite Odd-Collatz sequence contains an element of value $`1`$.

# Lemma C

$`f_o(4n+3) = 4f_o(n)+3`$ if $`n = 4m+3`$

## Proof

Use the substitution $`n_{j} = 4m_{j}+3`$ and some elementary algebra...

# Theorem 1

There exist Odd-Collatz rising subsequences of arbitrary length $`l`$. Stated precisely, there is no positive integer $`j`$ for which there exists no Odd-Collatz rising subsequence of length $`j`$ (or greater).

Note that this does not disprove the Collatz Conjecture - while there is no upper bound to the length of a rising Odd-Collatz subsequence, it is still plausible - and indeed likely - that all rising subsequences are finite in length.

## Proof

Sketch for now...

Assume we have a rising Odd-Collatz subsequence $`s_1`$ of length $`k`$: $`n_{i}, n_{i+1}, \dots, n_{i+k-1}`$, where $`n_{j}`$ is thus of the form $`4m_{j}+3`$ for $`i <= j < i+k-1`$ by Lemma B.

Consider the sequence $`s_{2}`$: $`4n_{i}+3, 4n_{i+1}+3, \dots, 4n_{i+k-1}+3, f_o(4n_{i+k-1}+3)`$.

Clearly $`s_{2}`$ has length $`k+1`$.

We now show that $`s_{2}`$ is a rising Odd-Collatz subsequence.

  1. Since each element of $`s_{2}`$ except the last is induced from $`s_{1}`$ using the same element-wise positive monotonic formula, it is clearly rising.
  2. $`s_{2}`$ is a valid Odd-Collatz subsequence by Lemma C.
  3. The last entry of $`s_{2}`$ is rising, since $`4n_{i+k-1}+3`$ is of the form of Lemma B

Theorem 1 follows by induction starting with a length $`1`$ subsequence comprising any odd number; or alternatively by reductio ad absurdum assuming a longest rising subsequence length and then showing contradiction by building a longer rising subsequence via the above construction.

 
