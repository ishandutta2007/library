## Binary GCD

高速なGCDの高速な実装に関する実験。

#### 概要・結果

$10^7$回ずつ計算したものを速度比較した。

- CPU: Intel core i5-8350U
- コンパイルオプション : `-Wl,-stack,1073741824 -O2`

| アルゴリズム | $\sim 2^{16}$ | $\sim 2^{32}$ | $\sim 2^{64}$    |
| -------- | -------- | -------- | --- |
| std::__gcd()  | 1066    | 2037     | 3960   |
| naive  | 1074    | 2040     |  3977   |
| binary-gcd  | 292 | 512 |  953   |

結論：binary-gcd一択