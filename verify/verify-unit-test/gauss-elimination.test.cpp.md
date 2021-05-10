---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: matrix/gauss-elimination.hpp
    title: matrix/gauss-elimination.hpp
  - icon: ':heavy_check_mark:'
    path: matrix/linear-equation.hpp
    title: matrix/linear-equation.hpp
  - icon: ':heavy_check_mark:'
    path: matrix/matrix.hpp
    title: "\u884C\u5217\u30E9\u30A4\u30D6\u30E9\u30EA"
  - icon: ':heavy_check_mark:'
    path: misc/rng.hpp
    title: misc/rng.hpp
  - icon: ':heavy_check_mark:'
    path: modint/montgomery-modint.hpp
    title: modint/montgomery-modint.hpp
  - icon: ':heavy_check_mark:'
    path: modint/simd-montgomery.hpp
    title: modint/simd-montgomery.hpp
  - icon: ':heavy_check_mark:'
    path: modulo/gauss-elimination-fast.hpp
    title: modulo/gauss-elimination-fast.hpp
  - icon: ':heavy_check_mark:'
    path: template/bitop.hpp
    title: template/bitop.hpp
  - icon: ':heavy_check_mark:'
    path: template/debug.hpp
    title: template/debug.hpp
  - icon: ':heavy_check_mark:'
    path: template/inout.hpp
    title: template/inout.hpp
  - icon: ':heavy_check_mark:'
    path: template/macro.hpp
    title: template/macro.hpp
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: template/template.hpp
  - icon: ':heavy_check_mark:'
    path: template/util.hpp
    title: template/util.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/aplusb
    links:
    - https://judge.yosupo.jp/problem/aplusb
  bundledCode: "#line 1 \"verify/verify-unit-test/gauss-elimination.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/aplusb\"\n//\n#line 2 \"template/template.hpp\"\
    \nusing namespace std;\n\n// intrinstic\n#include <immintrin.h>\n\n#include <algorithm>\n\
    #include <array>\n#include <bitset>\n#include <cassert>\n#include <cctype>\n#include\
    \ <cfenv>\n#include <cfloat>\n#include <chrono>\n#include <cinttypes>\n#include\
    \ <climits>\n#include <cmath>\n#include <complex>\n#include <cstdarg>\n#include\
    \ <cstddef>\n#include <cstdint>\n#include <cstdio>\n#include <cstdlib>\n#include\
    \ <cstring>\n#include <deque>\n#include <fstream>\n#include <functional>\n#include\
    \ <initializer_list>\n#include <iomanip>\n#include <ios>\n#include <iostream>\n\
    #include <istream>\n#include <iterator>\n#include <limits>\n#include <list>\n\
    #include <map>\n#include <memory>\n#include <new>\n#include <numeric>\n#include\
    \ <ostream>\n#include <queue>\n#include <random>\n#include <set>\n#include <sstream>\n\
    #include <stack>\n#include <streambuf>\n#include <string>\n#include <tuple>\n\
    #include <type_traits>\n#include <typeinfo>\n#include <unordered_map>\n#include\
    \ <unordered_set>\n#include <utility>\n#include <vector>\n\n// utility\n#line\
    \ 1 \"template/util.hpp\"\nnamespace Nyaan {\nusing ll = long long;\nusing i64\
    \ = long long;\nusing u64 = unsigned long long;\nusing i128 = __int128_t;\nusing\
    \ u128 = __uint128_t;\n\ntemplate <typename T>\nusing V = vector<T>;\ntemplate\
    \ <typename T>\nusing VV = vector<vector<T>>;\nusing vi = vector<int>;\nusing\
    \ vl = vector<long long>;\nusing vd = V<double>;\nusing vs = V<string>;\nusing\
    \ vvi = vector<vector<int>>;\nusing vvl = vector<vector<long long>>;\n\ntemplate\
    \ <typename T, typename U>\nstruct P : pair<T, U> {\n  template <typename... Args>\n\
    \  P(Args... args) : pair<T, U>(args...) {}\n\n  using pair<T, U>::first;\n  using\
    \ pair<T, U>::second;\n\n  T &x() { return first; }\n  const T &x() const { return\
    \ first; }\n  U &y() { return second; }\n  const U &y() const { return second;\
    \ }\n\n  P &operator+=(const P &r) {\n    first += r.first;\n    second += r.second;\n\
    \    return *this;\n  }\n  P &operator-=(const P &r) {\n    first -= r.first;\n\
    \    second -= r.second;\n    return *this;\n  }\n  P &operator*=(const P &r)\
    \ {\n    first *= r.first;\n    second *= r.second;\n    return *this;\n  }\n\
    \  P operator+(const P &r) const { return P(*this) += r; }\n  P operator-(const\
    \ P &r) const { return P(*this) -= r; }\n  P operator*(const P &r) const { return\
    \ P(*this) *= r; }\n};\n\nusing pl = P<ll, ll>;\nusing pi = P<int, int>;\nusing\
    \ vp = V<pl>;\n\nconstexpr int inf = 1001001001;\nconstexpr long long infLL =\
    \ 4004004004004004004LL;\n\ntemplate <typename T>\nint sz(const T &t) {\n  return\
    \ t.size();\n}\n\ntemplate <typename T, typename U>\ninline bool amin(T &x, U\
    \ y) {\n  return (y < x) ? (x = y, true) : false;\n}\ntemplate <typename T, typename\
    \ U>\ninline bool amax(T &x, U y) {\n  return (x < y) ? (x = y, true) : false;\n\
    }\n\ntemplate <typename T>\ninline T Max(const vector<T> &v) {\n  return *max_element(begin(v),\
    \ end(v));\n}\ntemplate <typename T>\ninline T Min(const vector<T> &v) {\n  return\
    \ *min_element(begin(v), end(v));\n}\ntemplate <typename T>\ninline long long\
    \ Sum(const vector<T> &v) {\n  return accumulate(begin(v), end(v), 0LL);\n}\n\n\
    template <typename T>\nint lb(const vector<T> &v, const T &a) {\n  return lower_bound(begin(v),\
    \ end(v), a) - begin(v);\n}\ntemplate <typename T>\nint ub(const vector<T> &v,\
    \ const T &a) {\n  return upper_bound(begin(v), end(v), a) - begin(v);\n}\n\n\
    constexpr long long TEN(int n) {\n  long long ret = 1, x = 10;\n  for (; n; x\
    \ *= x, n >>= 1) ret *= (n & 1 ? x : 1);\n  return ret;\n}\n\ntemplate <typename\
    \ T, typename U>\npair<T, U> mkp(const T &t, const U &u) {\n  return make_pair(t,\
    \ u);\n}\n\ntemplate <typename T>\nvector<T> mkrui(const vector<T> &v, bool rev\
    \ = false) {\n  vector<T> ret(v.size() + 1);\n  if (rev) {\n    for (int i = int(v.size())\
    \ - 1; i >= 0; i--) ret[i] = v[i] + ret[i + 1];\n  } else {\n    for (int i =\
    \ 0; i < int(v.size()); i++) ret[i + 1] = ret[i] + v[i];\n  }\n  return ret;\n\
    };\n\ntemplate <typename T>\nvector<T> mkuni(const vector<T> &v) {\n  vector<T>\
    \ ret(v);\n  sort(ret.begin(), ret.end());\n  ret.erase(unique(ret.begin(), ret.end()),\
    \ ret.end());\n  return ret;\n}\n\ntemplate <typename F>\nvector<int> mkord(int\
    \ N, F f) {\n  vector<int> ord(N);\n  iota(begin(ord), end(ord), 0);\n  sort(begin(ord),\
    \ end(ord), f);\n  return ord;\n}\n\ntemplate <typename T>\nvector<int> mkinv(vector<T>\
    \ &v) {\n  int max_val = *max_element(begin(v), end(v));\n  vector<int> inv(max_val\
    \ + 1, -1);\n  for (int i = 0; i < (int)v.size(); i++) inv[v[i]] = i;\n  return\
    \ inv;\n}\n\n}  // namespace Nyaan\n#line 58 \"template/template.hpp\"\n\n// bit\
    \ operation\n#line 1 \"template/bitop.hpp\"\nnamespace Nyaan {\n__attribute__((target(\"\
    popcnt\"))) inline int popcnt(const u64 &a) {\n  return _mm_popcnt_u64(a);\n}\n\
    inline int lsb(const u64 &a) { return a ? __builtin_ctzll(a) : 64; }\ninline int\
    \ ctz(const u64 &a) { return a ? __builtin_ctzll(a) : 64; }\ninline int msb(const\
    \ u64 &a) { return a ? 63 - __builtin_clzll(a) : -1; }\ntemplate <typename T>\n\
    inline int gbit(const T &a, int i) {\n  return (a >> i) & 1;\n}\ntemplate <typename\
    \ T>\ninline void sbit(T &a, int i, bool b) {\n  if (gbit(a, i) != b) a ^= T(1)\
    \ << i;\n}\nconstexpr long long PW(int n) { return 1LL << n; }\nconstexpr long\
    \ long MSK(int n) { return (1LL << n) - 1; }\n}  // namespace Nyaan\n#line 61\
    \ \"template/template.hpp\"\n\n// inout\n#line 1 \"template/inout.hpp\"\nnamespace\
    \ Nyaan {\n\ntemplate <typename T, typename U>\nostream &operator<<(ostream &os,\
    \ const pair<T, U> &p) {\n  os << p.first << \" \" << p.second;\n  return os;\n\
    }\ntemplate <typename T, typename U>\nistream &operator>>(istream &is, pair<T,\
    \ U> &p) {\n  is >> p.first >> p.second;\n  return is;\n}\n\ntemplate <typename\
    \ T>\nostream &operator<<(ostream &os, const vector<T> &v) {\n  int s = (int)v.size();\n\
    \  for (int i = 0; i < s; i++) os << (i ? \" \" : \"\") << v[i];\n  return os;\n\
    }\ntemplate <typename T>\nistream &operator>>(istream &is, vector<T> &v) {\n \
    \ for (auto &x : v) is >> x;\n  return is;\n}\n\nvoid in() {}\ntemplate <typename\
    \ T, class... U>\nvoid in(T &t, U &... u) {\n  cin >> t;\n  in(u...);\n}\n\nvoid\
    \ out() { cout << \"\\n\"; }\ntemplate <typename T, class... U, char sep = ' '>\n\
    void out(const T &t, const U &... u) {\n  cout << t;\n  if (sizeof...(u)) cout\
    \ << sep;\n  out(u...);\n}\n\nvoid outr() {}\ntemplate <typename T, class... U,\
    \ char sep = ' '>\nvoid outr(const T &t, const U &... u) {\n  cout << t;\n  outr(u...);\n\
    }\n\nstruct IoSetupNya {\n  IoSetupNya() {\n    cin.tie(nullptr);\n    ios::sync_with_stdio(false);\n\
    \    cout << fixed << setprecision(15);\n    cerr << fixed << setprecision(7);\n\
    \  }\n} iosetupnya;\n\n}  // namespace Nyaan\n#line 64 \"template/template.hpp\"\
    \n\n// debug\n#line 1 \"template/debug.hpp\"\nnamespace DebugImpl {\n\ntemplate\
    \ <typename U, typename = void>\nstruct is_specialize : false_type {};\ntemplate\
    \ <typename U>\nstruct is_specialize<\n    U, typename conditional<false, typename\
    \ U::iterator, void>::type>\n    : true_type {};\ntemplate <typename U>\nstruct\
    \ is_specialize<\n    U, typename conditional<false, decltype(U::first), void>::type>\n\
    \    : true_type {};\ntemplate <typename U>\nstruct is_specialize<U, enable_if_t<is_integral<U>::value,\
    \ void>> : true_type {\n};\n\nvoid dump(const char& t) { cerr << t; }\n\nvoid\
    \ dump(const string& t) { cerr << t; }\n\nvoid dump(const bool& t) { cerr << (t\
    \ ? \"true\" : \"false\"); }\n\ntemplate <typename U,\n          enable_if_t<!is_specialize<U>::value,\
    \ nullptr_t> = nullptr>\nvoid dump(const U& t) {\n  cerr << t;\n}\n\ntemplate\
    \ <typename T>\nvoid dump(const T& t, enable_if_t<is_integral<T>::value>* = nullptr)\
    \ {\n  string res;\n  if (t == Nyaan::inf) res = \"inf\";\n  if constexpr (is_signed<T>::value)\
    \ {\n    if (t == -Nyaan::inf) res = \"-inf\";\n  }\n  if constexpr (sizeof(T)\
    \ == 8) {\n    if (t == Nyaan::infLL) res = \"inf\";\n    if constexpr (is_signed<T>::value)\
    \ {\n      if (t == -Nyaan::infLL) res = \"-inf\";\n    }\n  }\n  if (res.empty())\
    \ res = to_string(t);\n  cerr << res;\n}\n\ntemplate <typename T, typename U>\n\
    void dump(const pair<T, U>&);\ntemplate <typename T>\nvoid dump(const pair<T*,\
    \ int>&);\n\ntemplate <typename T>\nvoid dump(const T& t,\n          enable_if_t<!is_void<typename\
    \ T::iterator>::value>* = nullptr) {\n  cerr << \"[ \";\n  for (auto it = t.begin();\
    \ it != t.end();) {\n    dump(*it);\n    cerr << (++it == t.end() ? \"\" : \"\
    , \");\n  }\n  cerr << \" ]\";\n}\n\ntemplate <typename T, typename U>\nvoid dump(const\
    \ pair<T, U>& t) {\n  cerr << \"( \";\n  dump(t.first);\n  cerr << \", \";\n \
    \ dump(t.second);\n  cerr << \" )\";\n}\n\ntemplate <typename T>\nvoid dump(const\
    \ pair<T*, int>& t) {\n  cerr << \"[ \";\n  for (int i = 0; i < t.second; i++)\
    \ {\n    dump(t.first[i]);\n    cerr << (i == t.second - 1 ? \"\" : \", \");\n\
    \  }\n  cerr << \" ]\";\n}\n\nvoid trace() { cerr << endl; }\ntemplate <typename\
    \ Head, typename... Tail>\nvoid trace(Head&& head, Tail&&... tail) {\n  cerr <<\
    \ \" \";\n  dump(head);\n  if (sizeof...(tail) != 0) cerr << \",\";\n  trace(forward<Tail>(tail)...);\n\
    }\n\n}  // namespace DebugImpl\n\n#ifdef NyaanDebug\n#define trc(...)        \
    \                    \\\n  do {                                      \\\n    cerr\
    \ << \"## \" << #__VA_ARGS__ << \" = \"; \\\n    DebugImpl::trace(__VA_ARGS__);\
    \          \\\n  } while (0)\n#else\n#define trc(...) (void(0))\n#endif\n#line\
    \ 67 \"template/template.hpp\"\n\n// macro\n#line 1 \"template/macro.hpp\"\n#define\
    \ each(x, v) for (auto&& x : v)\n#define each2(x, y, v) for (auto&& [x, y] : v)\n\
    #define all(v) (v).begin(), (v).end()\n#define rep(i, N) for (long long i = 0;\
    \ i < (long long)(N); i++)\n#define repr(i, N) for (long long i = (long long)(N)-1;\
    \ i >= 0; i--)\n#define rep1(i, N) for (long long i = 1; i <= (long long)(N);\
    \ i++)\n#define repr1(i, N) for (long long i = (N); (long long)(i) > 0; i--)\n\
    #define reg(i, a, b) for (long long i = (a); i < (b); i++)\n#define regr(i, a,\
    \ b) for (long long i = (b)-1; i >= (a); i--)\n#define fi first\n#define se second\n\
    #define ini(...)   \\\n  int __VA_ARGS__; \\\n  in(__VA_ARGS__)\n#define inl(...)\
    \         \\\n  long long __VA_ARGS__; \\\n  in(__VA_ARGS__)\n#define ins(...)\
    \      \\\n  string __VA_ARGS__; \\\n  in(__VA_ARGS__)\n#define in2(s, t)    \
    \                       \\\n  for (int i = 0; i < (int)s.size(); i++) { \\\n \
    \   in(s[i], t[i]);                         \\\n  }\n#define in3(s, t, u)    \
    \                    \\\n  for (int i = 0; i < (int)s.size(); i++) { \\\n    in(s[i],\
    \ t[i], u[i]);                   \\\n  }\n#define in4(s, t, u, v)            \
    \         \\\n  for (int i = 0; i < (int)s.size(); i++) { \\\n    in(s[i], t[i],\
    \ u[i], v[i]);             \\\n  }\n#define die(...)             \\\n  do {  \
    \                     \\\n    Nyaan::out(__VA_ARGS__); \\\n    return;       \
    \           \\\n  } while (0)\n#line 70 \"template/template.hpp\"\n\nnamespace\
    \ Nyaan {\nvoid solve();\n}\nint main() { Nyaan::solve(); }\n#line 4 \"verify/verify-unit-test/gauss-elimination.test.cpp\"\
    \n//\n#line 2 \"matrix/matrix.hpp\"\n\ntemplate <class T>\nstruct Matrix {\n \
    \ vector<vector<T> > A;\n\n  Matrix() = default;\n  Matrix(int n, int m) : A(n,\
    \ vector<T>(m, T())) {}\n  Matrix(int n) : A(n, vector<T>(n, T())){};\n\n  int\
    \ H() const { return A.size(); }\n\n  int W() const { return A[0].size(); }\n\n\
    \  int size() const { return A.size(); }\n\n  inline const vector<T> &operator[](int\
    \ k) const { return A[k]; }\n\n  inline vector<T> &operator[](int k) { return\
    \ A[k]; }\n\n  static Matrix I(int n) {\n    Matrix mat(n);\n    for (int i =\
    \ 0; i < n; i++) mat[i][i] = 1;\n    return (mat);\n  }\n\n  Matrix &operator+=(const\
    \ Matrix &B) {\n    int n = H(), m = W();\n    assert(n == B.H() && m == B.W());\n\
    \    for (int i = 0; i < n; i++)\n      for (int j = 0; j < m; j++) (*this)[i][j]\
    \ += B[i][j];\n    return (*this);\n  }\n\n  Matrix &operator-=(const Matrix &B)\
    \ {\n    int n = H(), m = W();\n    assert(n == B.H() && m == B.W());\n    for\
    \ (int i = 0; i < n; i++)\n      for (int j = 0; j < m; j++) (*this)[i][j] -=\
    \ B[i][j];\n    return (*this);\n  }\n\n  Matrix &operator*=(const Matrix &B)\
    \ {\n    int n = H(), m = B.W(), p = W();\n    assert(p == B.H());\n    vector<vector<T>\
    \ > C(n, vector<T>(m, T{}));\n    for (int i = 0; i < n; i++)\n      for (int\
    \ k = 0; k < p; k++)\n        for (int j = 0; j < m; j++) C[i][j] += (*this)[i][k]\
    \ * B[k][j];\n    A.swap(C);\n    return (*this);\n  }\n\n  Matrix &operator^=(long\
    \ long k) {\n    Matrix B = Matrix::I(H());\n    while (k > 0) {\n      if (k\
    \ & 1) B *= *this;\n      *this *= *this;\n      k >>= 1LL;\n    }\n    A.swap(B.A);\n\
    \    return (*this);\n  }\n\n  Matrix operator+(const Matrix &B) const { return\
    \ (Matrix(*this) += B); }\n\n  Matrix operator-(const Matrix &B) const { return\
    \ (Matrix(*this) -= B); }\n\n  Matrix operator*(const Matrix &B) const { return\
    \ (Matrix(*this) *= B); }\n\n  Matrix operator^(const long long k) const { return\
    \ (Matrix(*this) ^= k); }\n\n  bool operator==(const Matrix &B) const {\n    assert(H()\
    \ == B.H() && W() == B.W());\n    for (int i = 0; i < H(); i++)\n      for (int\
    \ j = 0; j < W(); j++)\n        if (A[i][j] != B[i][j]) return false;\n    return\
    \ true;\n  }\n\n  bool operator!=(const Matrix &B) const {\n    assert(H() ==\
    \ B.H() && W() == B.W());\n    for (int i = 0; i < H(); i++)\n      for (int j\
    \ = 0; j < W(); j++)\n        if (A[i][j] != B[i][j]) return true;\n    return\
    \ false;\n  }\n\n  friend ostream &operator<<(ostream &os, const Matrix &p) {\n\
    \    int n = p.H(), m = p.W();\n    for (int i = 0; i < n; i++) {\n      os <<\
    \ (i ? \"   \" : \"\") << \"[\";\n      for (int j = 0; j < m; j++) {\n      \
    \  os << p[i][j] << (j + 1 == m ? \"]\\n\" : \",\");\n      }\n    }\n    return\
    \ (os);\n  }\n\n  T determinant() const {\n    Matrix B(*this);\n    assert(H()\
    \ == W());\n    T ret = 1;\n    for (int i = 0; i < H(); i++) {\n      int idx\
    \ = -1;\n      for (int j = i; j < W(); j++) {\n        if (B[j][i] != 0) {\n\
    \          idx = j;\n          break;\n        }\n      }\n      if (idx == -1)\
    \ return 0;\n      if (i != idx) {\n        ret *= T(-1);\n        swap(B[i],\
    \ B[idx]);\n      }\n      ret *= B[i][i];\n      T inv = T(1) / B[i][i];\n  \
    \    for (int j = 0; j < W(); j++) {\n        B[i][j] *= inv;\n      }\n     \
    \ for (int j = i + 1; j < H(); j++) {\n        T a = B[j][i];\n        if (a ==\
    \ 0) continue;\n        for (int k = i; k < W(); k++) {\n          B[j][k] -=\
    \ B[i][k] * a;\n        }\n      }\n    }\n    return ret;\n  }\n};\n\n/**\n *\
    \ @brief \u884C\u5217\u30E9\u30A4\u30D6\u30E9\u30EA\n */\n#line 6 \"verify/verify-unit-test/gauss-elimination.test.cpp\"\
    \n//\nnamespace Normal {\n#line 2 \"matrix/gauss-elimination.hpp\"\n\n#line 4\
    \ \"matrix/gauss-elimination.hpp\"\n\ntemplate <typename mint>\nstd::pair<int,\
    \ mint> GaussElimination(vector<vector<mint>> &a,\n                          \
    \            bool LE = false) {\n  int H = a.size(), W = a[0].size();\n  int rank\
    \ = 0, je = LE ? W - 1 : W;\n  mint det = 1;\n  for (int j = 0; j < je; j++) {\n\
    \    int idx = -1;\n    for (int i = rank; i < H; i++) {\n      if (a[i][j] !=\
    \ mint(0)) {\n        idx = i;\n        break;\n      }\n    }\n    if (idx ==\
    \ -1) {\n      det = 0;\n      continue;\n    }\n    if (rank != idx) {\n    \
    \  det = -det;\n      swap(a[rank], a[idx]);\n    }\n    det *= a[rank][j];\n\
    \    if (LE && a[rank][j] != mint(1)) {\n      mint coeff = a[rank][j].inverse();\n\
    \      for (int k = j; k < W; k++) a[rank][k] *= coeff;\n    }\n    int is = LE\
    \ ? 0 : rank + 1;\n    for (int i = is; i < H; i++) {\n      if (i == rank) continue;\n\
    \      if (a[i][j] != mint(0)) {\n        mint coeff = a[i][j] / a[rank][j];\n\
    \        for (int k = j; k < W; k++) a[i][k] -= a[rank][k] * coeff;\n      }\n\
    \    }\n    rank++;\n  }\n  return make_pair(rank, det);\n}\n#line 2 \"matrix/linear-equation.hpp\"\
    \n\n#line 4 \"matrix/linear-equation.hpp\"\n\n\ntemplate <typename mint>\nvector<vector<mint>>\
    \ LinearEquation(vector<vector<mint>> a, vector<mint> b) {\n  int H = a.size(),\
    \ W = a[0].size();\n  for (int i = 0; i < H; i++) a[i].push_back(b[i]);\n  auto\
    \ p = GaussElimination(a, true);\n  int rank = p.first;\n\n  for (int i = rank;\
    \ i < H; ++i) {\n    if (a[i][W] != 0) return vector<vector<mint>>{};\n  }\n\n\
    \  vector<vector<mint>> res(1, vector<mint>(W));\n  vector<int> pivot(W, -1);\n\
    \  for (int i = 0, j = 0; i < rank; ++i) {\n    while (a[i][j] == 0) ++j;\n  \
    \  res[0][j] = a[i][W], pivot[j] = i;\n  }\n  for (int j = 0; j < W; ++j) {\n\
    \    if (pivot[j] == -1) {\n      vector<mint> x(W);\n      x[j] = 1;\n      for\
    \ (int k = 0; k < j; ++k) {\n        if (pivot[k] != -1) x[k] = -a[pivot[k]][j];\n\
    \      }\n      res.push_back(x);\n    }\n  }\n  return res;\n}\n#line 10 \"verify/verify-unit-test/gauss-elimination.test.cpp\"\
    \n}  // namespace Normal\nnamespace Fast {\n#line 2 \"modulo/gauss-elimination-fast.hpp\"\
    \n\n#line 2 \"modint/simd-montgomery.hpp\"\n\n#line 4 \"modint/simd-montgomery.hpp\"\
    \n\n__attribute__((target(\"sse4.2\"))) inline __m128i my128_mullo_epu32(\n  \
    \  const __m128i &a, const __m128i &b) {\n  return _mm_mullo_epi32(a, b);\n}\n\
    \n__attribute__((target(\"sse4.2\"))) inline __m128i my128_mulhi_epu32(\n    const\
    \ __m128i &a, const __m128i &b) {\n  __m128i a13 = _mm_shuffle_epi32(a, 0xF5);\n\
    \  __m128i b13 = _mm_shuffle_epi32(b, 0xF5);\n  __m128i prod02 = _mm_mul_epu32(a,\
    \ b);\n  __m128i prod13 = _mm_mul_epu32(a13, b13);\n  __m128i prod = _mm_unpackhi_epi64(_mm_unpacklo_epi32(prod02,\
    \ prod13),\n                                    _mm_unpackhi_epi32(prod02, prod13));\n\
    \  return prod;\n}\n\n__attribute__((target(\"sse4.2\"))) inline __m128i montgomery_mul_128(\n\
    \    const __m128i &a, const __m128i &b, const __m128i &r, const __m128i &m1)\
    \ {\n  return _mm_sub_epi32(\n      _mm_add_epi32(my128_mulhi_epu32(a, b), m1),\n\
    \      my128_mulhi_epu32(my128_mullo_epu32(my128_mullo_epu32(a, b), r), m1));\n\
    }\n\n__attribute__((target(\"sse4.2\"))) inline __m128i montgomery_add_128(\n\
    \    const __m128i &a, const __m128i &b, const __m128i &m2, const __m128i &m0)\
    \ {\n  __m128i ret = _mm_sub_epi32(_mm_add_epi32(a, b), m2);\n  return _mm_add_epi32(_mm_and_si128(_mm_cmpgt_epi32(m0,\
    \ ret), m2), ret);\n}\n\n__attribute__((target(\"sse4.2\"))) inline __m128i montgomery_sub_128(\n\
    \    const __m128i &a, const __m128i &b, const __m128i &m2, const __m128i &m0)\
    \ {\n  __m128i ret = _mm_sub_epi32(a, b);\n  return _mm_add_epi32(_mm_and_si128(_mm_cmpgt_epi32(m0,\
    \ ret), m2), ret);\n}\n\n__attribute__((target(\"avx2\"))) inline __m256i my256_mullo_epu32(\n\
    \    const __m256i &a, const __m256i &b) {\n  return _mm256_mullo_epi32(a, b);\n\
    }\n\n__attribute__((target(\"avx2\"))) inline __m256i my256_mulhi_epu32(\n   \
    \ const __m256i &a, const __m256i &b) {\n  __m256i a13 = _mm256_shuffle_epi32(a,\
    \ 0xF5);\n  __m256i b13 = _mm256_shuffle_epi32(b, 0xF5);\n  __m256i prod02 = _mm256_mul_epu32(a,\
    \ b);\n  __m256i prod13 = _mm256_mul_epu32(a13, b13);\n  __m256i prod = _mm256_unpackhi_epi64(_mm256_unpacklo_epi32(prod02,\
    \ prod13),\n                                       _mm256_unpackhi_epi32(prod02,\
    \ prod13));\n  return prod;\n}\n\n__attribute__((target(\"avx2\"))) inline __m256i\
    \ montgomery_mul_256(\n    const __m256i &a, const __m256i &b, const __m256i &r,\
    \ const __m256i &m1) {\n  return _mm256_sub_epi32(\n      _mm256_add_epi32(my256_mulhi_epu32(a,\
    \ b), m1),\n      my256_mulhi_epu32(my256_mullo_epu32(my256_mullo_epu32(a, b),\
    \ r), m1));\n}\n\n__attribute__((target(\"avx2\"))) inline __m256i montgomery_add_256(\n\
    \    const __m256i &a, const __m256i &b, const __m256i &m2, const __m256i &m0)\
    \ {\n  __m256i ret = _mm256_sub_epi32(_mm256_add_epi32(a, b), m2);\n  return _mm256_add_epi32(_mm256_and_si256(_mm256_cmpgt_epi32(m0,\
    \ ret), m2),\n                          ret);\n}\n\n__attribute__((target(\"avx2\"\
    ))) inline __m256i montgomery_sub_256(\n    const __m256i &a, const __m256i &b,\
    \ const __m256i &m2, const __m256i &m0) {\n  __m256i ret = _mm256_sub_epi32(a,\
    \ b);\n  return _mm256_add_epi32(_mm256_and_si256(_mm256_cmpgt_epi32(m0, ret),\
    \ m2),\n                          ret);\n}\n#line 4 \"modulo/gauss-elimination-fast.hpp\"\
    \n\nnamespace Gauss {\nuint32_t a_buf_[4096][4096] __attribute__((aligned(64)));\n\
    \n// return value: (rank, (-1) ^ (number of swap time))\ntemplate <typename mint>\n\
    __attribute__((target(\"avx2\"))) pair<int, mint> GaussianElimination(\n    const\
    \ vector<vector<mint>> &m, int LinearEquation = false) {\n  mint(&a)[4096][4096]\
    \ = *reinterpret_cast<mint(*)[4096][4096]>(a_buf_);\n  int H = m.size(), W = m[0].size(),\
    \ rank = 0;\n  mint det = 1;\n  for (int i = 0; i < H; i++)\n    for (int j =\
    \ 0; j < W; j++) a[i][j].a = m[i][j].a;\n\n  __m256i r = _mm256_set1_epi32(mint::r);\n\
    \  __m256i m0 = _mm256_set1_epi32(0);\n  __m256i m1 = _mm256_set1_epi32(mint::get_mod());\n\
    \  __m256i m2 = _mm256_set1_epi32(mint::get_mod() << 1);\n\n  for (int j = 0;\
    \ j < (LinearEquation ? (W - 1) : W); j++) {\n    // find basis\n    if (rank\
    \ == H) break;\n    int idx = -1;\n    for (int i = rank; i < H; i++) {\n    \
    \  if (a[i][j].get() != 0) {\n        idx = i;\n        break;\n      }\n    }\n\
    \    if (idx == -1) {\n      det = 0;\n      continue;\n    }\n\n    // swap\n\
    \    if (rank != idx) {\n      det = -det;\n      for (int l = j; l < W; l++)\
    \ swap(a[rank][l], a[idx][l]);\n    }\n    det *= a[rank][j];\n\n    // normalize\n\
    \    if (LinearEquation) {\n      if (a[rank][j].get() != 1) {\n        mint coeff\
    \ = a[rank][j].inverse();\n        __m256i COEFF = _mm256_set1_epi32(coeff.a);\n\
    \        for (int i = j / 8 * 8; i < W; i += 8) {\n          __m256i R = _mm256_load_si256((__m256i\
    \ *)(a[rank] + i));\n          __m256i RmulC = montgomery_mul_256(R, COEFF, r,\
    \ m1);\n          _mm256_store_si256((__m256i *)(a[rank] + i), RmulC);\n     \
    \   }\n      }\n    }\n\n    // elimination\n    for (int k = (LinearEquation\
    \ ? 0 : rank + 1); k < H; k++) {\n      if (k == rank) continue;\n      if (a[k][j].get()\
    \ != 0) {\n        mint coeff = a[k][j] / a[rank][j];\n        __m256i COEFF =\
    \ _mm256_set1_epi32(coeff.a);\n        for (int i = j / 8 * 8; i < W; i += 8)\
    \ {\n          __m256i R = _mm256_load_si256((__m256i *)(a[rank] + i));\n    \
    \      __m256i K = _mm256_load_si256((__m256i *)(a[k] + i));\n          __m256i\
    \ RmulC = montgomery_mul_256(R, COEFF, r, m1);\n          __m256i KmnsR = montgomery_sub_256(K,\
    \ RmulC, m2, m0);\n          _mm256_store_si256((__m256i *)(a[k] + i), KmnsR);\n\
    \        }\n      }\n    }\n    rank++;\n  }\n  return {rank, det};\n}\n\n// calculate\
    \ determinant\ntemplate <typename mint>\nmint determinant(const vector<vector<mint>>\
    \ &mat) {\n  return GaussianElimination(mat).second;\n}\n\n// return V<V<mint>>\n\
    // 0 column ... one of solutions\n// 1 ~ (W - rank) column ... bases\n// if not\
    \ exist, return empty vector\ntemplate <typename mint>\nvector<vector<mint>> LinearEquation(vector<vector<mint>>\
    \ A, vector<mint> B) {\n  int H = A.size(), W = A[0].size();\n  for (int i = 0;\
    \ i < H; i++) A[i].push_back(B[i]);\n\n  auto p = GaussianElimination(A, true);\n\
    \n  mint(&a)[4096][4096] = *reinterpret_cast<mint(*)[4096][4096]>(a_buf_);\n \
    \ int rank = p.first;\n\n  // check if solutions exist\n  for (int i = rank; i\
    \ < H; ++i)\n    if (a[i][W] != 0) return vector<vector<mint>>{};\n\n  vector<vector<mint>>\
    \ res(1, vector<mint>(W));\n  vector<int> pivot(W, -1);\n  for (int i = 0, j =\
    \ 0; i < rank; ++i) {\n    while (a[i][j] == 0) ++j;\n    res[0][j] = a[i][W],\
    \ pivot[j] = i;\n  }\n  for (int j = 0; j < W; ++j) {\n    if (pivot[j] == -1)\
    \ {\n      vector<mint> x(W);\n      x[j] = 1;\n      for (int k = 0; k < j; ++k)\n\
    \        if (pivot[k] != -1) x[k] = -a[pivot[k]][j];\n      res.push_back(x);\n\
    \    }\n  }\n  return res;\n}\n\n}  // namespace Gauss\n\nusing Gauss::determinant;\n\
    using Gauss::LinearEquation;\n#line 13 \"verify/verify-unit-test/gauss-elimination.test.cpp\"\
    \n}  // namespace Fast\n\n#line 2 \"misc/rng.hpp\"\n\nnamespace my_rand {\n\n\
    // [0, 2^64 - 1)\nuint64_t rng() {\n  static uint64_t x_ =\n      uint64_t(chrono::duration_cast<chrono::nanoseconds>(\n\
    \                   chrono::high_resolution_clock::now().time_since_epoch())\n\
    \                   .count()) *\n      10150724397891781847ULL;\n  x_ ^= x_ <<\
    \ 7;\n  return x_ ^= x_ >> 9;\n}\n\n// [l, r)\nint64_t randint(int64_t l, int64_t\
    \ r) {\n  assert(l < r);\n  return l + rng() % (r - l);\n}\n\n// choose n numbers\
    \ from [l, r) without overlapping\nvector<int64_t> randset(int64_t l, int64_t\
    \ r, int64_t n) {\n  assert(l <= r && n <= r - l);\n  unordered_set<int64_t> s;\n\
    \  for (int64_t i = n; i; --i) {\n    int64_t m = randint(l, r + 1 - i);\n   \
    \ if (s.find(m) != s.end()) m = r - i;\n    s.insert(m);\n  }\n  vector<int64_t>\
    \ ret;\n  for (auto& x : s) ret.push_back(x);\n  return ret;\n}\n\n// [0.0, 1.0)\n\
    double rnd() {\n  union raw_cast {\n    double t;\n    uint64_t u;\n  };\n  constexpr\
    \ uint64_t p = uint64_t(1023 - 64) << 52;\n  return rng() * ((raw_cast*)(&p))->t;\n\
    }\n\ntemplate <typename T>\nvoid randshf(vector<T>& v) {\n  int n = v.size();\n\
    \  for (int loop = 0; loop < 2; loop++)\n    for (int i = 0; i < n; i++) swap(v[i],\
    \ v[randint(0, n)]);\n}\n\n}  // namespace my_rand\n\nusing my_rand::randint;\n\
    using my_rand::randset;\nusing my_rand::randshf;\nusing my_rand::rnd;\nusing my_rand::rng;\n\
    #line 2 \"modint/montgomery-modint.hpp\"\n\n\n\ntemplate <uint32_t mod>\nstruct\
    \ LazyMontgomeryModInt {\n  using mint = LazyMontgomeryModInt;\n  using i32 =\
    \ int32_t;\n  using u32 = uint32_t;\n  using u64 = uint64_t;\n\n  static constexpr\
    \ u32 get_r() {\n    u32 ret = mod;\n    for (i32 i = 0; i < 4; ++i) ret *= 2\
    \ - mod * ret;\n    return ret;\n  }\n\n  static constexpr u32 r = get_r();\n\
    \  static constexpr u32 n2 = -u64(mod) % mod;\n  static_assert(r * mod == 1, \"\
    invalid, r * mod != 1\");\n  static_assert(mod < (1 << 30), \"invalid, mod >=\
    \ 2 ^ 30\");\n  static_assert((mod & 1) == 1, \"invalid, mod % 2 == 0\");\n\n\
    \  u32 a;\n\n  constexpr LazyMontgomeryModInt() : a(0) {}\n  constexpr LazyMontgomeryModInt(const\
    \ int64_t &b)\n      : a(reduce(u64(b % mod + mod) * n2)){};\n\n  static constexpr\
    \ u32 reduce(const u64 &b) {\n    return (b + u64(u32(b) * u32(-r)) * mod) >>\
    \ 32;\n  }\n\n  constexpr mint &operator+=(const mint &b) {\n    if (i32(a +=\
    \ b.a - 2 * mod) < 0) a += 2 * mod;\n    return *this;\n  }\n\n  constexpr mint\
    \ &operator-=(const mint &b) {\n    if (i32(a -= b.a) < 0) a += 2 * mod;\n   \
    \ return *this;\n  }\n\n  constexpr mint &operator*=(const mint &b) {\n    a =\
    \ reduce(u64(a) * b.a);\n    return *this;\n  }\n\n  constexpr mint &operator/=(const\
    \ mint &b) {\n    *this *= b.inverse();\n    return *this;\n  }\n\n  constexpr\
    \ mint operator+(const mint &b) const { return mint(*this) += b; }\n  constexpr\
    \ mint operator-(const mint &b) const { return mint(*this) -= b; }\n  constexpr\
    \ mint operator*(const mint &b) const { return mint(*this) *= b; }\n  constexpr\
    \ mint operator/(const mint &b) const { return mint(*this) /= b; }\n  constexpr\
    \ bool operator==(const mint &b) const {\n    return (a >= mod ? a - mod : a)\
    \ == (b.a >= mod ? b.a - mod : b.a);\n  }\n  constexpr bool operator!=(const mint\
    \ &b) const {\n    return (a >= mod ? a - mod : a) != (b.a >= mod ? b.a - mod\
    \ : b.a);\n  }\n  constexpr mint operator-() const { return mint() - mint(*this);\
    \ }\n\n  constexpr mint pow(u64 n) const {\n    mint ret(1), mul(*this);\n   \
    \ while (n > 0) {\n      if (n & 1) ret *= mul;\n      mul *= mul;\n      n >>=\
    \ 1;\n    }\n    return ret;\n  }\n  \n  constexpr mint inverse() const { return\
    \ pow(mod - 2); }\n\n  friend ostream &operator<<(ostream &os, const mint &b)\
    \ {\n    return os << b.get();\n  }\n\n  friend istream &operator>>(istream &is,\
    \ mint &b) {\n    int64_t t;\n    is >> t;\n    b = LazyMontgomeryModInt<mod>(t);\n\
    \    return (is);\n  }\n  \n  constexpr u32 get() const {\n    u32 ret = reduce(a);\n\
    \    return ret >= mod ? ret - mod : ret;\n  }\n\n  static constexpr u32 get_mod()\
    \ { return mod; }\n};\n#line 17 \"verify/verify-unit-test/gauss-elimination.test.cpp\"\
    \n\nusing namespace Nyaan;\n\nusing mint = LazyMontgomeryModInt<998244353>;\n\n\
    void test(int n, int m, bool sparse) {\n  Matrix<mint> a(n, m);\n  each(v, a.A)\
    \ {\n    each(x, v) {\n      if (sparse) {\n        if (randint(0, m) == 0) x\
    \ = rng();\n      } else {\n        x = rng();\n      }\n    }\n  }\n  trc(n,\
    \ m, sparse);\n  // trc(a);\n\n  if (n == m) {\n    mint det1, det2, det3;\n \
    \   {\n      auto b = a;\n      det1 = b.determinant();\n    }\n    {\n      auto\
    \ b = a;\n      det2 = Normal::GaussElimination<mint>(b.A, false).second;\n  \
    \  }\n    {\n      auto b = a;\n      det3 = Fast::determinant(b.A);\n    }\n\
    \    // trc(det1, det2, det3);\n    assert(det1 == det2 and det2 == det3);\n \
    \ }\n  vector<mint> c(n);\n  if (rng() & 1) each(x, c) x = rng();\n\n  vector<vector<mint>>\
    \ sol1, sol2;\n  {\n    auto b = a;\n    sol1 = Normal::LinearEquation<mint>(b.A,\
    \ c);\n    // trc(sol1);\n  }\n  {\n    auto b = a;\n    sol2 = Fast::LinearEquation<mint>(b.A,\
    \ c);\n    // trc(sol2);\n  }\n  assert(sol1 == sol2);\n}\n\nvoid Nyaan::solve()\
    \ {\n  rep(i, TEN(5)) test(randint(1, 17), randint(1, 17), rng() % 2 == 1);\n\n\
    \  int a, b;\n  cin >> a >> b;\n  cout << a + b << endl;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/aplusb\"\n//\n#include\
    \ \"../../template/template.hpp\"\n//\n#include \"../../matrix/matrix.hpp\"\n\
    //\nnamespace Normal {\n#include \"../../matrix/gauss-elimination.hpp\"\n#include\
    \ \"../../matrix/linear-equation.hpp\"\n}  // namespace Normal\nnamespace Fast\
    \ {\n#include \"../../modulo/gauss-elimination-fast.hpp\"\n}  // namespace Fast\n\
    \n#include \"../../misc/rng.hpp\"\n#include \"../../modint/montgomery-modint.hpp\"\
    \n\nusing namespace Nyaan;\n\nusing mint = LazyMontgomeryModInt<998244353>;\n\n\
    void test(int n, int m, bool sparse) {\n  Matrix<mint> a(n, m);\n  each(v, a.A)\
    \ {\n    each(x, v) {\n      if (sparse) {\n        if (randint(0, m) == 0) x\
    \ = rng();\n      } else {\n        x = rng();\n      }\n    }\n  }\n  trc(n,\
    \ m, sparse);\n  // trc(a);\n\n  if (n == m) {\n    mint det1, det2, det3;\n \
    \   {\n      auto b = a;\n      det1 = b.determinant();\n    }\n    {\n      auto\
    \ b = a;\n      det2 = Normal::GaussElimination<mint>(b.A, false).second;\n  \
    \  }\n    {\n      auto b = a;\n      det3 = Fast::determinant(b.A);\n    }\n\
    \    // trc(det1, det2, det3);\n    assert(det1 == det2 and det2 == det3);\n \
    \ }\n  vector<mint> c(n);\n  if (rng() & 1) each(x, c) x = rng();\n\n  vector<vector<mint>>\
    \ sol1, sol2;\n  {\n    auto b = a;\n    sol1 = Normal::LinearEquation<mint>(b.A,\
    \ c);\n    // trc(sol1);\n  }\n  {\n    auto b = a;\n    sol2 = Fast::LinearEquation<mint>(b.A,\
    \ c);\n    // trc(sol2);\n  }\n  assert(sol1 == sol2);\n}\n\nvoid Nyaan::solve()\
    \ {\n  rep(i, TEN(5)) test(randint(1, 17), randint(1, 17), rng() % 2 == 1);\n\n\
    \  int a, b;\n  cin >> a >> b;\n  cout << a + b << endl;\n}"
  dependsOn:
  - template/template.hpp
  - template/util.hpp
  - template/bitop.hpp
  - template/inout.hpp
  - template/debug.hpp
  - template/macro.hpp
  - matrix/matrix.hpp
  - matrix/gauss-elimination.hpp
  - matrix/linear-equation.hpp
  - modulo/gauss-elimination-fast.hpp
  - modint/simd-montgomery.hpp
  - misc/rng.hpp
  - modint/montgomery-modint.hpp
  isVerificationFile: true
  path: verify/verify-unit-test/gauss-elimination.test.cpp
  requiredBy: []
  timestamp: '2021-05-04 19:34:35+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/verify-unit-test/gauss-elimination.test.cpp
layout: document
redirect_from:
- /verify/verify/verify-unit-test/gauss-elimination.test.cpp
- /verify/verify/verify-unit-test/gauss-elimination.test.cpp.html
title: verify/verify-unit-test/gauss-elimination.test.cpp
---