---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify/verify-aoj-dsl/aoj-dsl-1-b.test.cpp
    title: verify/verify-aoj-dsl/aoj-dsl-1-b.test.cpp
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"data-structure/union-find-with-potential.hpp\"\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\ntemplate <class T>\nstruct UnionFindWithPotential\
    \ {\n  vector<int> dat;\n  vector<T> pot;\n\n  UnionFindWithPotential(int N, T\
    \ I_ = 0) : dat(N, -1), pot(N, T()) {}\n\n  int root(int x) {\n    if (dat[x]\
    \ < 0) return x;\n    if (pot[dat[x]] >= 0) pot[x] += pot[dat[x]];\n    return\
    \ dat[x] = root(dat[x]);\n  }\n\n  // return P(x) - P(root(x))\n  T potential(int\
    \ x) {\n    root(x);\n    return pot[x];\n  }\n\n  bool same(int x, int y) { return\
    \ root(x) == root(y); }\n\n  // return P(x) - P(y)\n  T diff(int x, int y) {\n\
    \    assert(same(x, y));\n    return potential(x) - potential(y);\n  }\n\n  //\
    \ s.t. P(x) = P(y) + p\n  // return Satisfiablility\n  bool merge(int x, int y,\
    \ T p) {\n    p += potential(y) - potential(x);\n    x = root(x), y = root(y);\n\
    \    if (x == y) return p == T();\n    if (dat[x] < dat[y]) swap(x, y), p = -p;\n\
    \    dat[y] += dat[x];\n    dat[x] = y;\n    pot[x] = p;\n    return true;\n \
    \ }\n\n  int size(int x) { return -dat[root(x)]; }\n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <class T>\nstruct UnionFindWithPotential {\n  vector<int> dat;\n  vector<T>\
    \ pot;\n\n  UnionFindWithPotential(int N, T I_ = 0) : dat(N, -1), pot(N, T())\
    \ {}\n\n  int root(int x) {\n    if (dat[x] < 0) return x;\n    if (pot[dat[x]]\
    \ >= 0) pot[x] += pot[dat[x]];\n    return dat[x] = root(dat[x]);\n  }\n\n  //\
    \ return P(x) - P(root(x))\n  T potential(int x) {\n    root(x);\n    return pot[x];\n\
    \  }\n\n  bool same(int x, int y) { return root(x) == root(y); }\n\n  // return\
    \ P(x) - P(y)\n  T diff(int x, int y) {\n    assert(same(x, y));\n    return potential(x)\
    \ - potential(y);\n  }\n\n  // s.t. P(x) = P(y) + p\n  // return Satisfiablility\n\
    \  bool merge(int x, int y, T p) {\n    p += potential(y) - potential(x);\n  \
    \  x = root(x), y = root(y);\n    if (x == y) return p == T();\n    if (dat[x]\
    \ < dat[y]) swap(x, y), p = -p;\n    dat[y] += dat[x];\n    dat[x] = y;\n    pot[x]\
    \ = p;\n    return true;\n  }\n\n  int size(int x) { return -dat[root(x)]; }\n\
    };"
  dependsOn: []
  isVerificationFile: false
  path: data-structure/union-find-with-potential.hpp
  requiredBy: []
  timestamp: '2020-11-19 22:59:27+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify/verify-aoj-dsl/aoj-dsl-1-b.test.cpp
documentation_of: data-structure/union-find-with-potential.hpp
layout: document
redirect_from:
- /library/data-structure/union-find-with-potential.hpp
- /library/data-structure/union-find-with-potential.hpp.html
title: data-structure/union-find-with-potential.hpp
---