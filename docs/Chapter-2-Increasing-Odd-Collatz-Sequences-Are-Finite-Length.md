# Chapter 2 - Increasing Odd-Collatz Subsequences Are Finite Length

In [Chapter 1](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md) we introduced the definition of _Odd-Collatz_ sequences and proved the result that there are monotonically increasing Odd-Collatz subsequences of arbitrarily length.

In this chapter we will show that although there is no upper bound on the length of a monotonically increasing Odd-Collatz subsequence, all monotonically increasing Odd-Collatz subsequences are finite length.

## Lemma 2A

The Odd-Collatz (sub)sequence $`n_0, f_o(n_0), f_o(f_o(n_0)), \dots, f_o^{i}(n_0)`$ where $`i \geq 1`$ is monotonically increasing _iff_ $`n_0 = 2^{i+1}m + 2^{i+1} - 1`$ for some $`m \geq 0`$.

### Proof

We first show the reverse direction. Let $`n_0 = 2^{i+1}m + 2^{i+1} - 1`$ for some $`i \geq 1`$ and $`m \geq 0`$.

Consider $`3n_0+1 = 3(2^{i+1}m + 2^{i+1} - 1) + 1 = 3(2^{i+1}m + 2^{i+1}) - 3 + 1 = 2.3(2^{i}m + 2^{i}) - 2 = 2.[3(2^{i}m + 2^{i}) - 1]`$.

Since $`i \geq 1`$, we have that $`3(2^{i}m + 2^{i})`$ is even, and hence $`3(2^{i}m + 2^{i}) - 1`$ is odd.

Accordingly, $`f_o(n_0) = 3(2^{i}m + 2^{i}) - 1`$ and since we had only one factor of 2 in the computation of $`f_o(n_0)`$, we have that $`n_0 < f_o(n_0)`$.

If $`i = 1`$ we have shown that $`n_0, f_o(n_0)`$ is a monotonically increasing Odd-Collatz subsequence and we are done - note that $`f_o(n_0)`$ is $`f_o^1(n_0)`$ which is $`f_o^i(n_0)`$ when $`i = 1`$. 

Otherwise $`i > 1`'$ and we continue.

We further consider $`3f_o(n_0) + 1 = 3[3(2^{i}m + 2^{i}) - 1] + 1 = 3^2(2^{i}m + 2^{i}) - 3 + 1 = 2.3^2(2^{i-1}m + 2^{i-1}) - 2 = 2.[3^2(2^{i-1}m + 2^{i-1}) - 1]`$.

Since $`i > 1`$ we have that $`3^2(2^{i-1}m + 2^{i-1})`$ is even, and hence $`3^2(2^{i-1}m + 2^{i-1}) - 1`$ is odd.

Accordingly, $`f_o(f_o(n_0)) = 3^2(2^{i-1}m + 2^{i-1}) - 1`$ and since we had only one factor of 2 in the computation of $`f_o(f_o(n_0))`$, we have that $`f_o(n_0) < f_o(f_o(n_0))`$.

If $`i = 2`$ we have shown that $`n_0, f_o(n_0), f_o^2(n_0)`$ is a monotonically increasing Odd-Collatz subsequence and we are done, otherwise we carry on.

In general we find, for $`0 \leq j \leq i`$, that $`f_o^j(n_0) = 3^j(2^{i-j+1}m + 2^{i-j+1}) - 1`$, and that $`f_o^j(n_0) < f_o^{j+1}(n_0)`$ for $`0 \leq j < i`$ - note the strict inequality here, and we use the common convention that $`f_o^0(n)`$ is just convenient notation for $`n`$. The formal proof is by induction on $`j`$ using the same approach as presented above for the special cases of $`j = 1`$ and $`j = 2`$.

We have thus shown that the reverse direction of the Lemma holds.

The last element of the subsequence $`f_o^i(n_0) = 3^i(2^{1}m + 2^{1}) - 1`$. From this, we have that $`3f_o^i(n_0) + 1 = 3[3^i(2^{1}m + 2^{1}) - 1] + 1 = 3^{i+1}(2m + 2) - 3 + 1 = 2.3^{i+1}(m + 1) - 2 = 2[3^{i+1}(m + 1) - 1]`$ Here we have that $`3^{i+1}(m + 1) - 1`$ is not necessarily odd - in fact it is even and hence has further factors of 2 if $`m`$ is even. From this we see that $`f_o^{i+1}(n_0)`$ does not necessarily continue monotonically increasing.

After that digression we show that the forward direction of the Lemma holds.

Firstly, we know from [Lemma 1a](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md#lemma-1a) in Chapter 1 that $`n_0, f_o(n_0)`$ is decreasing if $`n_0 = 4m+1`$, and is stationary for the case $`n_0 = 1`$. Hence, $`n_0 = 4m+3`$ which is trivially rewritten as 







