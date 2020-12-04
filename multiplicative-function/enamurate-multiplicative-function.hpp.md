---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"multiplicative-function/enamurate-multiplicative-function.hpp\"\
    \n\n\n\n// f(n, p, c) : n = pow(p, c), f is multiplicative function\ntemplate\
    \ <typename mint, typename F>\nvector<mint> enamurate_multiplicative_function(const\
    \ F& func, int n) {\n  assert(n < (1LL << 30));\n  vector<mint> f(n + 1, mint(0));\n\
    \  if (!p) {\n    f[0] = 1;\n    return std::move(f);\n  }\n  f[1] = 1;\n  vector<bool>\
    \ sieve(n + 1, false);\n  vector<int> ps;\n  for (int i = 2; i <= n; i++) {\n\
    \    if (!sieve[i]) {\n      f[i] = func(i, i, 1);\n      ps.push_back(i);\n \
    \   }\n    for (int j = 0; j < (int)ps.size() && i * ps[j] <= n; j++) {\n    \
    \  sieve[i * ps[j]] = 1;\n      if (i % ps[j] == 0) {\n        int c = 0, x =\
    \ i, y = 1;\n        while (x % ps[j] == 0) x /= ps[j], y *= ps[j], ++c;\n   \
    \     if (x == 1)\n          f[i * ps[j]] = func(i * ps[j], i, c + 1);\n     \
    \   else\n          f[i * ps[j]] = f[x] * f[y];\n        break;\n      } else\n\
    \        f[i * ps[j]] = f[i] * f[ps[j]];\n    }\n  }\n  return std::move(f);\n\
    }\n"
  code: "#pragma once\n\n\n\n// f(n, p, c) : n = pow(p, c), f is multiplicative function\n\
    template <typename mint, typename F>\nvector<mint> enamurate_multiplicative_function(const\
    \ F& func, int n) {\n  assert(n < (1LL << 30));\n  vector<mint> f(n + 1, mint(0));\n\
    \  if (!p) {\n    f[0] = 1;\n    return std::move(f);\n  }\n  f[1] = 1;\n  vector<bool>\
    \ sieve(n + 1, false);\n  vector<int> ps;\n  for (int i = 2; i <= n; i++) {\n\
    \    if (!sieve[i]) {\n      f[i] = func(i, i, 1);\n      ps.push_back(i);\n \
    \   }\n    for (int j = 0; j < (int)ps.size() && i * ps[j] <= n; j++) {\n    \
    \  sieve[i * ps[j]] = 1;\n      if (i % ps[j] == 0) {\n        int c = 0, x =\
    \ i, y = 1;\n        while (x % ps[j] == 0) x /= ps[j], y *= ps[j], ++c;\n   \
    \     if (x == 1)\n          f[i * ps[j]] = func(i * ps[j], i, c + 1);\n     \
    \   else\n          f[i * ps[j]] = f[x] * f[y];\n        break;\n      } else\n\
    \        f[i * ps[j]] = f[i] * f[ps[j]];\n    }\n  }\n  return std::move(f);\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: multiplicative-function/enamurate-multiplicative-function.hpp
  requiredBy: []
  timestamp: '2020-12-05 07:59:51+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: multiplicative-function/enamurate-multiplicative-function.hpp
layout: document
redirect_from:
- /library/multiplicative-function/enamurate-multiplicative-function.hpp
- /library/multiplicative-function/enamurate-multiplicative-function.hpp.html
title: multiplicative-function/enamurate-multiplicative-function.hpp
---