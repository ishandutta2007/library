---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/verify-yosupo-math/yosupo-prime-enumerate-sieve.test.cpp
    title: verify/verify-yosupo-math/yosupo-prime-enumerate-sieve.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"prime/prime-sieve.hpp\"\n\n\n\n// Prime -> {0, 0, 1, 1,\
    \ 0, 1, 0, 1, ...}\nvector<bool> prime_sieve(int N) {\n  vector<bool> sieve(max(1,\
    \ N) + 1, 1);\n  sieve[0] = sieve[1] = false;\n  for (int i = 2; i * i <= N; i++)\n\
    \    if (sieve[i] == true)\n      for (int j = i * i; j <= N; j += i) sieve[j]\
    \ = false;\n  return sieve;\n}\n"
  code: "#pragma once\n\n\n\n// Prime -> {0, 0, 1, 1, 0, 1, 0, 1, ...}\nvector<bool>\
    \ prime_sieve(int N) {\n  vector<bool> sieve(max(1, N) + 1, 1);\n  sieve[0] =\
    \ sieve[1] = false;\n  for (int i = 2; i * i <= N; i++)\n    if (sieve[i] == true)\n\
    \      for (int j = i * i; j <= N; j += i) sieve[j] = false;\n  return sieve;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: prime/prime-sieve.hpp
  requiredBy: []
  timestamp: '2020-12-05 07:59:51+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/verify-yosupo-math/yosupo-prime-enumerate-sieve.test.cpp
documentation_of: prime/prime-sieve.hpp
layout: document
redirect_from:
- /library/prime/prime-sieve.hpp
- /library/prime/prime-sieve.hpp.html
title: prime/prime-sieve.hpp
---