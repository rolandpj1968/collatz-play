# Chapter 2 - Monotonically Increasing Odd-Collatz Subsequences Are Finite in Length

In [Chapter 1](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md) we introduced the [definition of the Odd-Collatz generator function $`f_o`$](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md#definition-1a) which produces _Odd-Collatz_ sequences and proved the result that there are monotonically increasing Odd-Collatz subsequences of arbitrarily length.

In this chapter we will show that although there is no upper bound on the length of a monotonically increasing Odd-Collatz subsequence, all monotonically increasing Odd-Collatz subsequences are finite length.

We first establish a precise closed-form formula for all elements of a monotonically increasing Odd-Collatz subsequence.

## Lemma 2A

For $`n = 2^{i+1}m + 2^{i+1} - 1`$ where $`m \geq 0`$, $`i \geq 1`$, we have that $`f_o^j(n) = 3^j(2^{i-j+1}m + 2^{i-j+1}) - 1`$ for all $`0 <= j <= i`$.

Note that we use the common convention that $`f_o^0`$ is the *identity* function, i.e. $`f_o^0(n) = n`$. In addition $`f_o^1(n) = f_o(n)`$, $`f_o^2(n) = f_o(f_o(n))`$ and in general $`f_o^j(n)`$ is the result of (recursively) applying $`f_o`$ exactly $`j`$ times repeatedly.

### Proof

By induction over $`j`$.

For $`j = 0`$, we have trivially that $`3^j(2^{i-j+1}m + 2^{i-j+1}) - 1 = 2^{i+1}m + 2^{i+1}) - 1`$. Now $`f_o^0(n) = n = 2^{i+1}m + 2^{i+1} - 1`$ by definition. Hence for the base case $`j = 0`$ we have that $`f_o^j(n) = 3^j(2^{i-j+1}m + 2^{i-j+1}) - 1`$, as required.

Now assume that $`f_o^k(n) = 3^k(2^{i-k+1}m + 2^{i-k+1}) - 1`$ holds for all $`0 <= k < j`$, where we only consider $`k < i`$, since we only need to prove the result for $`j <= i`$.

We have therefore that $`f_o^{j-1}(n) = 3^{j-1}(2^{i-(j-1)+1}m + 2^{i-(j-1)+1}) - 1`$ holds, where we use $`k = j-1`$.

-------------
Going in the wrong direction
-------------

## Lemma YYY

$`n`$ is the first value of a monotonically increasing Odd-Collatz subsequence of length $`i > 2`$ *iff* $`n = 2^{i}m + 2^{i} - 1`$, $`f_o^i(n) = 2.3^{i}m + 2.3^{i} - 1`$ for some $`m \geq 0`$.

*Note: $`i > 0`$ implicitly since a (sub)sequence of length less than one is not well-defined. We additionally explicitly exclude the trivial case of length one Odd-Collatz sequences here. We further do not here consider the case $`i = 2`$, which does not obey the above formulae and is already covered by [Lemma 1B']().*

### Proof

By induction on $`i`$.

#### Base Case

Take $`i = 3`$, the base case for $`i > 2`$ and consider the Odd-Collatz subsequence $`n, f_o(n), f_o^2(n)`$.

We first prove the forwards direction of the base case, so assume $`n, f_o(n), f_o^2(n)`$ is a monotonically increasing Odd-Collatz sequence, i.e. $`n < f_o(n) < f_o^2(n)`$. From [Lemma 1B']() we have that $`n < f_o(n)`$ only if $`n = 4m'+3` for some $`m' \geq 0`$ and $`f_o(n) = 6m'+5`$. Now consider $`3f_o(n) + 1 = 3(6m'+5) + 1 = 18m' + 16 = 2(9m' + 8)`$. Hence $`f_o(f_o(n)) = 9m'+8`$ only if $`m'`$ is odd so that $`9m'+8`$ is odd, i.e. $`m' = 2m+1`$ for some $`m \get 0`$. From this we get that $`n = 4m'+3 = 4(2m+1) + 3 = 8m+7 = 2^{3}m + 2^3 - 1`$ as required for $`i = 3`$. In addition, $`f_o^2(n) = 9m'+8 = 9(2m+1) + 8 = 18m + 17 = 2.3^{3-1}m + 2.3^{3-1} - 1`$ as required for $`i = 3`$.

For the reverse direction of the base case, assume for $`i = 3`$ that we have $`n = 2^{3}m + 2^3 - 1`$. We now show that $`n < f_o(n) < f_o^2(n)`$. Firstly, $`n = 2^{3}m + 2^3 - 1 = 2^{3}m + 2^3 - 4 + 3 = 4(2m+1) + 3`$ and by [Lemma 1B]() we have that $`n < f_o(n)`$ and $`f_o(n) = 6(2m+1) + 5 = 12m + 11 = 12m + 8 + 3 = 4(3m+2) + 3`$. Again by [Lemma 1B]() we have that $`f_o(n) < f_o^2(n)`$, and put together we have that $`n < f_o(n) < f_o^2(n)`$, i.e. $`n, f_o(n), f_o^2(n)`$ is a monotonically increasing Odd-Collatz subsequence of length 3 as required for $`i = 3`$.

#### Inductive Step

We now prove the inductive step. 

Accordingly, assume that the lemma is true for all $`j < i`$.

We first prove the forwards direction of the inductive case. Assume that $`n, f_o(n), \dots, f_o^{i-1}(n)`$ is a monotonically increasing Odd-Collatz subsequence of length $`i`$. Now $`n, f_o(n), \dots, f_o^{i-2}(n)`$ is a monotonically increasing Odd-Collatz subsequence of length $`i-1`$ and hence by the inductive assumption with $`j = i-1`$ we have that $`n = 2^{i-1}m' + 2^{i-1} - 1`$, $`f_o^{i-1}(n) = 2.3^{i-1}m' + 2.3^{i-1} - 1`$ for some $`m' \geq 0`$ by the inductive assumption.

Consider $`3f_o^{i-1}(n) + 1 = 3(2.3^{i-1}m' + 2.3^{i-1} - 1) + 1 = 2.3^{i}m' + 2.3^{i} - 3 + 1 = 2(3^{i}m' + 3^{i} - 1)`$. Hence $`f_o^i(n) = 3^{i}m' + 3^{i} - 1`$ only if $`m'`$ is odd, since $`3^{i}`$ is odd and $`3^{i} - 1`$ is even given that $`i > 0`$.

It follows that $`m' = 2m+1`$ for some $`m > 0`$, and substituting this expression back, we get $`n = 2^{i-1}(2m+1) + 2^{i-1} - 1 = 2^{i}m + 2^{i-1} + 2^{i-1} - 1 = 2^{i}m + 2^{i} - 1`$ as required. In addition, $`f_o^i(n) = 3^{i}(2m+1) + 3^{i} - 1 = 2.3^{i}m + 3^{i} + 3^{i} - 1 = 2.3^{i} + 2.3^{i} - 1`$ as required.

This proves the forwards direction of the inductive case.

We now prove the reverse direction. Assume that $`n = 2^{i}m + 2^{i} - 1`$ for some $`m \geq 0`$. Then $`n = 2^{i-1}.2m + 2^{i-1} + 2^{i-1} - 1 = 2^{i-1}(2m+1) + 2^{i-1} - 1 = 2^{i-1}m' + 2^{i-1} - 1`$ where $`m' = 2m+1`$. By the inductive assumption we then have that $`n, f_o(n), \dots, f_o^{i-2}(n)`$ is a monotonically increasing Odd-Collatz subsequence of length $`i-1`$, and then, also by the inductive assumption, we have that $`f_o^{i-2}(n) = 2.3^{i-1}m' + 2.3^{i-1} - 1`$.

It follows that $`f_o^{i-2}(n) = 2.3^{i-1}(2m+1) + 2.3^{i-1} - 1 = 4(3^{i-1}m + 3^{i-1} - 1) + 3`$ and by [Lemma 1B] we have that $`f_o^{i-2}(n) < f_o^{i-1}(n)`$, and so $`n, f_o(n), \dots, f_o^{i-2}(n), f_o^{i-1}(n)`$ is a monotonically increasing Collatz sequence as required.

Now consider $`3f_o^{i-2}(n) + 1 = 3(2.3^{i-1}m' + 2.3^{i-1} - 1) + 1 = 2.3^{i}m' + 2.3^{i} - 3 + 1 = 2.3^{i}(2m+12(3^{i}m' + 3^{i} - 1)`$. However, $`m' = 2m+1`$ which is odd and then so is $`3^{i}m' + 3^{i} - 1`$. Therefore $`f_o^{i-1}(n) = 3^{i}m' + 3^{i} - 1`$ and 

--------------

Consider $`3n+1 = 3(2^{i-1}m + 2^{i-1} - 1) + 1 = 3(2^{i-1}m + 2^{i-1}) - 3 + 1 = 2.3(2^{i-2}m + 2^{i-2}) - 2 = 2[3(2^{i-2}m + 2^{i-2}) - 1]`$.

Accordingly, $`f_o(n') = 3(2^{i-2}m + 2^{i-2}) - 1`$ only if $`3(2^{i-2}m + 2^{i-2}) - 1`$ is odd (by definition of $`f_o`), i.e. $``$2^{i-2}m +  2^{i-2}`$ is even. However, $`i > 2`$ and so $`2^{i-2}` is even - in which case we require $`m`$ to be even...

I've got concerns of off by one out of my wazoo!!!

-------------

Then assume that the lemma is true for all $`i < j`$. For the case $`i = j-1`$ we have that $`n`$ is the first value of a monotonically increasing Odd-Collatz subsequence of length $`j-1`$ only if $`n = 2^{j-1}m + 2^{j-1} - 1`$ for some $`m \geq 0`$.

We need to prove that n can start a j sequence (NO - we need to prove that this assumption holds) ... BS #$%#$%i.e. n' can only start a mono.. quence of length j if n' = $`n = 2^{j}m' + 2^{j} - 1`$ for some $`m' \geq 0`$

From Lemma ZZZ (2A? reverse) we have $`n' = f_o^{j-1}(n) = 3^{j-$$%^#}(2^{j-1}m + 2^{j-1}) - 1`$.

Consider $`3n'+1 = 3.[3^{j-$$%^#}(2^{j-1}m + 2^{j-1}) - 1] = 3^{j-$$%^# + 1}(2^{j-1}m + 2^{j-1}) - 3 + 1 = 2.[3^{j-$$%^# + 1}(2^{j-2}m + 2^{j-2}) - 1]`$

The [] are always odd dammit, not progress.


## Lemma XXX

The smallest first value $`n`$ of a monotonically increasing Odd-Collatz subsequence of length $`i > 2`$ is $`n = 2^i - 1`$.

### Proof

[Lemma YYY]() states that $`n`$ is the first value of a monotonically increasing Odd-Collatz subsequence of length $`i > 2`$ only if $`n = 2^{i}m + 2^{i} - 1`$ for some positive integer $`m`$.

Since $`2^{i}m + 2^{i} - 1`$ is a positive linear function of $`m`$ for all real $`i`$, its minimum value occurs at the minimum value of $`m = 0`$ for which $`n = 2^{i} - 1`$.

QED

## Theorem 2

All monotonically increasing Odd-Collatz subsequences are finite in length.

### Proof

By reductio ad absurdum.

Assume that there exists a monotonically increasing Odd-Collatz subsequence of infinite length, and consider the first value, $`n`$ of this subsequence.

$`n > 2^3`$ by [trivial empiricism](Chapter-1-Unbounded-Length-Increasing-Odd-Collatz-Sequences.md#definition-1a), hence we only need to consider the case $`n > 2^i`$, where $`i >= 3`$. 

Let $`i = \lfloor log_2(n) \rfloor + 2`$, where $`\lfloor \rfloor`$ is the integer *floor* function defined as $`\lfloor x \rfloor`$, for real x, is the largest integer less than or equal to $`x`$.

By [Lemma XXX]() we have that the smallest value $`n'`$ for which $`n'`$ is the initial value of a monotonically increasing Odd-Collatz subsequence of length $`i`$, is $`n' = 2^{i} - 1`$.

Moreover $`log_2(n) < i-1`$, by the definition of $`i`$, and hence $`n < 2^{i-1} < 2^i - 1 = n'`$.

Lastly, since we assumed that $`n`$ is the first value of an infinite monotonically increasing Odd-Collatz subsequence, it is also the first value of a monotonically increasing Odd-Collatz subsequence of length $`i`$. This is a clear contradiction, since $`n`$ is smaller than the minimum required first value of such a subsequence.

Hence our assumption is wrong, and there exists no monotonically increasing Odd-Collatz subsequence of infinite length.

QED



# Abandoned

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







