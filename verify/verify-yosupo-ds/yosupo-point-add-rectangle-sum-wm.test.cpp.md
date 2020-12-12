---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data-structure-2d/fenwick-tree-on-wavelet-matrix.hpp
    title: data-structure-2d/fenwick-tree-on-wavelet-matrix.hpp
  - icon: ':question:'
    path: misc/fastio.hpp
    title: misc/fastio.hpp
  - icon: ':question:'
    path: template/bitop.hpp
    title: template/bitop.hpp
  - icon: ':question:'
    path: template/debug.hpp
    title: template/debug.hpp
  - icon: ':question:'
    path: template/inout.hpp
    title: template/inout.hpp
  - icon: ':question:'
    path: template/macro.hpp
    title: template/macro.hpp
  - icon: ':question:'
    path: template/template.hpp
    title: template/template.hpp
  - icon: ':question:'
    path: template/util.hpp
    title: template/util.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/point_add_rectangle_sum
    links:
    - https://judge.yosupo.jp/problem/point_add_rectangle_sum
  bundledCode: "#line 1 \"verify/verify-yosupo-ds/yosupo-point-add-rectangle-sum-wm.test.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_rectangle_sum\"\n\
    \n#line 2 \"template/template.hpp\"\nusing namespace std;\n\n// intrinstic\n#include\
    \ <immintrin.h>\n\n#include <algorithm>\n#include <array>\n#include <bitset>\n\
    #include <cassert>\n#include <cctype>\n#include <cfenv>\n#include <cfloat>\n#include\
    \ <chrono>\n#include <cinttypes>\n#include <climits>\n#include <cmath>\n#include\
    \ <complex>\n#include <csetjmp>\n#include <csignal>\n#include <cstdarg>\n#include\
    \ <cstddef>\n#include <cstdint>\n#include <cstdio>\n#include <cstdlib>\n#include\
    \ <cstring>\n#include <ctime>\n#include <deque>\n#include <exception>\n#include\
    \ <forward_list>\n#include <fstream>\n#include <functional>\n#include <initializer_list>\n\
    #include <iomanip>\n#include <ios>\n#include <iosfwd>\n#include <iostream>\n#include\
    \ <istream>\n#include <iterator>\n#include <limits>\n#include <list>\n#include\
    \ <locale>\n#include <map>\n#include <memory>\n#include <new>\n#include <numeric>\n\
    #include <ostream>\n#include <queue>\n#include <random>\n#include <ratio>\n#include\
    \ <regex>\n#include <set>\n#include <sstream>\n#include <stack>\n#include <stdexcept>\n\
    #include <streambuf>\n#include <string>\n#include <system_error>\n#include <tuple>\n\
    #include <type_traits>\n#include <typeinfo>\n#include <unordered_map>\n#include\
    \ <unordered_set>\n#include <utility>\n#include <valarray>\n#include <vector>\n\
    \n// utility\n#line 1 \"template/util.hpp\"\nnamespace Nyaan {\nusing ll = long\
    \ long;\nusing i64 = long long;\nusing u64 = unsigned long long;\nusing i128 =\
    \ __int128_t;\nusing u128 = __uint128_t;\n\ntemplate <typename T>\nusing V = vector<T>;\n\
    template <typename T>\nusing VV = vector<vector<T>>;\nusing vi = vector<int>;\n\
    using vl = vector<long long>;\nusing vd = V<double>;\nusing vs = V<string>;\n\
    using vvi = vector<vector<int>>;\nusing vvl = vector<vector<long long>>;\n\ntemplate\
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
    \ t.size();\n}\ntemplate <typename T, size_t N>\nvoid mem(T (&a)[N], int c) {\n\
    \  memset(a, c, sizeof(T) * N);\n}\n\ntemplate <typename T, typename U>\ninline\
    \ bool amin(T &x, U y) {\n  return (y < x) ? (x = y, true) : false;\n}\ntemplate\
    \ <typename T, typename U>\ninline bool amax(T &x, U y) {\n  return (x < y) ?\
    \ (x = y, true) : false;\n}\n\ntemplate <typename T>\nint lb(const vector<T> &v,\
    \ const T &a) {\n  return lower_bound(begin(v), end(v), a) - begin(v);\n}\ntemplate\
    \ <typename T>\nint ub(const vector<T> &v, const T &a) {\n  return upper_bound(begin(v),\
    \ end(v), a) - begin(v);\n}\n\nconstexpr long long TEN(int n) {\n  long long ret\
    \ = 1, x = 10;\n  for (; n; x *= x, n >>= 1) ret *= (n & 1 ? x : 1);\n  return\
    \ ret;\n}\n\ntemplate <typename T, typename U>\npair<T, U> mkp(const T &t, const\
    \ U &u) {\n  return make_pair(t, u);\n}\n\ntemplate <typename T>\nvector<T> mkrui(const\
    \ vector<T> &v, bool rev = false) {\n  vector<T> ret(v.size() + 1);\n  if (rev)\
    \ {\n    for (int i = int(v.size()) - 1; i >= 0; i--) ret[i] = v[i] + ret[i +\
    \ 1];\n  } else {\n    for (int i = 0; i < int(v.size()); i++) ret[i + 1] = ret[i]\
    \ + v[i];\n  }\n  return ret;\n};\n\ntemplate <typename T>\nvector<T> mkuni(const\
    \ vector<T> &v) {\n  vector<T> ret(v);\n  sort(ret.begin(), ret.end());\n  ret.erase(unique(ret.begin(),\
    \ ret.end()), ret.end());\n  return ret;\n}\n\ntemplate <typename F>\nvector<int>\
    \ mkord(int N, F f) {\n  vector<int> ord(N);\n  iota(begin(ord), end(ord), 0);\n\
    \  sort(begin(ord), end(ord), f);\n  return ord;\n}\n\ntemplate <typename T>\n\
    vector<T> reord(const vector<T> &v, const vector<T> &ord) {\n  int N = v.size();\n\
    \  vector<T> ret(N);\n  for (int i = 0; i < N; i++) ret[i] = v[ord[i]];\n  return\
    \ ret;\n};\n\ntemplate <typename T = int>\nvector<T> mkiota(int N) {\n  vector<T>\
    \ ret(N);\n  iota(begin(ret), end(ret), 0);\n  return ret;\n}\n\ntemplate <typename\
    \ T>\nvector<int> mkinv(vector<T> &v, int max_val = -1) {\n  if (max_val < (int)v.size())\
    \ max_val = v.size() - 1;\n  vector<int> inv(max_val + 1, -1);\n  for (int i =\
    \ 0; i < (int)v.size(); i++) inv[v[i]] = i;\n  return inv;\n}\n\n}  // namespace\
    \ Nyaan\n#line 70 \"template/template.hpp\"\n\n// bit operation\n#line 1 \"template/bitop.hpp\"\
    \nnamespace Nyaan {\n\n__attribute__((target(\"popcnt\"))) inline int popcnt(const\
    \ u64 &a) {\n  return _mm_popcnt_u64(a);\n}\n\n__attribute__((target(\"bmi\")))\
    \ inline int lsb(const u64 &a) {\n  return _tzcnt_u64(a);\n}\n__attribute__((target(\"\
    bmi\"))) inline int ctz(const u64 &a) {\n  return _tzcnt_u64(a);\n}\n\n__attribute__((target(\"\
    lzcnt\"))) inline int msb(const u64 &a) {\n  return 63 - _lzcnt_u64(a);\n}\n__attribute__((target(\"\
    lzcnt\"))) inline int clz64(const u64 &a) {\n  return _lzcnt_u64(a);\n}\n\ntemplate\
    \ <typename T>\ninline int gbit(const T &a, int i) {\n  return (a >> i) & 1;\n\
    }\ntemplate <typename T>\ninline void sbit(T &a, int i, bool b) {\n  a ^= (gbit(a,\
    \ i) == b ? 0 : (T(b) << i));\n}\n\nconstexpr long long PW(int n) { return 1LL\
    \ << n; }\n\nconstexpr long long MSK(int n) { return (1LL << n) - 1; }\n\n}  //\
    \ namespace Nyaan\n#line 73 \"template/template.hpp\"\n\n// inout\n#line 1 \"\
    template/inout.hpp\"\nnamespace Nyaan {\n\ntemplate <typename T, typename U>\n\
    ostream &operator<<(ostream &os, const pair<T, U> &p) {\n  os << p.first << \"\
    \ \" << p.second;\n  return os;\n}\ntemplate <typename T, typename U>\nistream\
    \ &operator>>(istream &is, pair<T, U> &p) {\n  is >> p.first >> p.second;\n  return\
    \ is;\n}\n\ntemplate <typename T>\nostream &operator<<(ostream &os, const vector<T>\
    \ &v) {\n  int s = (int)v.size();\n  for (int i = 0; i < s; i++) os << (i ? \"\
    \ \" : \"\") << v[i];\n  return os;\n}\ntemplate <typename T>\nistream &operator>>(istream\
    \ &is, vector<T> &v) {\n  for (auto &x : v) is >> x;\n  return is;\n}\n\nvoid\
    \ in() {}\ntemplate <typename T, class... U>\nvoid in(T &t, U &... u) {\n  cin\
    \ >> t;\n  in(u...);\n}\n\nvoid out() { cout << \"\\n\"; }\ntemplate <typename\
    \ T, class... U, char sep = ' '>\nvoid out(const T &t, const U &... u) {\n  cout\
    \ << t;\n  if (sizeof...(u)) cout << sep;\n  out(u...);\n}\n\nvoid outr() {}\n\
    template <typename T, class... U, char sep = ' '>\nvoid outr(const T &t, const\
    \ U &... u) {\n  cout << t;\n  outr(u...);\n}\n\nstruct IoSetupNya {\n  IoSetupNya()\
    \ {\n    cin.tie(nullptr);\n    ios::sync_with_stdio(false);\n    cout << fixed\
    \ << setprecision(15);\n    cerr << fixed << setprecision(7);\n  }\n} iosetupnya;\n\
    \n}  // namespace Nyaan\n#line 76 \"template/template.hpp\"\n\n// debug\n#line\
    \ 1 \"template/debug.hpp\"\nnamespace DebugImpl {\n\ntemplate <typename U, typename\
    \ = void>\nstruct is_specialize : false_type {};\ntemplate <typename U>\nstruct\
    \ is_specialize<\n    U, typename conditional<false, typename U::iterator, void>::type>\n\
    \    : true_type {};\ntemplate <typename U>\nstruct is_specialize<\n    U, typename\
    \ conditional<false, decltype(U::first), void>::type>\n    : true_type {};\ntemplate\
    \ <typename U>\nstruct is_specialize<U, enable_if_t<is_integral<U>::value, void>>\
    \ : true_type {\n};\n\nvoid dump(const char& t) { cerr << t; }\n\nvoid dump(const\
    \ string& t) { cerr << t; }\n\ntemplate <typename U,\n          enable_if_t<!is_specialize<U>::value,\
    \ nullptr_t> = nullptr>\nvoid dump(const U& t) {\n  cerr << t;\n}\n\ntemplate\
    \ <typename T>\nvoid dump(const T& t, enable_if_t<is_integral<T>::value>* = nullptr)\
    \ {\n  string res;\n  if (t == Nyaan::inf) res = \"inf\";\n  if (is_signed<T>::value)\n\
    \    if (t == -Nyaan::inf) res = \"-inf\";\n  if (sizeof(T) == 8) {\n    if (t\
    \ == Nyaan::infLL) res = \"inf\";\n    if (is_signed<T>::value)\n      if (t ==\
    \ -Nyaan::infLL) res = \"-inf\";\n  }\n  if (res.empty()) res = to_string(t);\n\
    \  cerr << res;\n}\n\ntemplate <typename T, typename U>\nvoid dump(const pair<T,\
    \ U>&);\ntemplate <typename T>\nvoid dump(const pair<T*, int>&);\n\ntemplate <typename\
    \ T>\nvoid dump(const T& t,\n          enable_if_t<!is_void<typename T::iterator>::value>*\
    \ = nullptr) {\n  cerr << \"[ \";\n  for (auto it = t.begin(); it != t.end();)\
    \ {\n    dump(*it);\n    cerr << (++it == t.end() ? \"\" : \", \");\n  }\n  cerr\
    \ << \" ]\";\n}\n\ntemplate <typename T, typename U>\nvoid dump(const pair<T,\
    \ U>& t) {\n  cerr << \"( \";\n  dump(t.first);\n  cerr << \", \";\n  dump(t.second);\n\
    \  cerr << \" )\";\n}\n\ntemplate <typename T>\nvoid dump(const pair<T*, int>&\
    \ t) {\n  cerr << \"[ \";\n  for (int i = 0; i < t.second; i++) {\n    dump(t.first[i]);\n\
    \    cerr << (i == t.second - 1 ? \"\" : \", \");\n  }\n  cerr << \" ]\";\n}\n\
    \nvoid trace() { cerr << endl; }\ntemplate <typename Head, typename... Tail>\n\
    void trace(Head&& head, Tail&&... tail) {\n  cerr << \" \";\n  dump(head);\n \
    \ if (sizeof...(tail) != 0) cerr << \",\";\n  trace(forward<Tail>(tail)...);\n\
    }\n\n}  // namespace DebugImpl\n\n#ifdef NyaanDebug\n#define trc(...)        \
    \                    \\\n  do {                                      \\\n    cerr\
    \ << \"## \" << #__VA_ARGS__ << \" = \"; \\\n    DebugImpl::trace(__VA_ARGS__);\
    \          \\\n  } while (0)\n#else\n#define trc(...)\n#endif\n#line 79 \"template/template.hpp\"\
    \n\n// macro\n#line 1 \"template/macro.hpp\"\n#define each(x, v) for (auto&& x\
    \ : v)\n#define each2(x, y, v) for (auto&& [x, y] : v)\n#define all(v) (v).begin(),\
    \ (v).end()\n#define rep(i, N) for (long long i = 0; i < (long long)(N); i++)\n\
    #define repr(i, N) for (long long i = (long long)(N)-1; i >= 0; i--)\n#define\
    \ rep1(i, N) for (long long i = 1; i <= (long long)(N); i++)\n#define repr1(i,\
    \ N) for (long long i = (N); (long long)(i) > 0; i--)\n#define reg(i, a, b) for\
    \ (long long i = (a); i < (b); i++)\n#define regr(i, a, b) for (long long i =\
    \ (b)-1; i >= (a); i--)\n#define repc(i, a, cond) for (long long i = (a); (cond);\
    \ i++)\n#define enm(i, val, vec)                                  \\\n  for (long\
    \ long i = 0; i < (long long)(vec).size(); i++) \\\n    if (auto& val = vec[i];\
    \ false)                        \\\n      ;                                  \
    \                 \\\n    else\n\n#define ini(...)   \\\n  int __VA_ARGS__; \\\
    \n  in(__VA_ARGS__)\n#define inl(...)         \\\n  long long __VA_ARGS__; \\\n\
    \  in(__VA_ARGS__)\n#define ins(...)      \\\n  string __VA_ARGS__; \\\n  in(__VA_ARGS__)\n\
    #define inc(...)    \\\n  char __VA_ARGS__; \\\n  in(__VA_ARGS__)\n#define in2(s,\
    \ t)                           \\\n  for (int i = 0; i < (int)s.size(); i++) {\
    \ \\\n    in(s[i], t[i]);                         \\\n  }\n#define in3(s, t, u)\
    \                        \\\n  for (int i = 0; i < (int)s.size(); i++) { \\\n\
    \    in(s[i], t[i], u[i]);                   \\\n  }\n#define in4(s, t, u, v)\
    \                     \\\n  for (int i = 0; i < (int)s.size(); i++) { \\\n   \
    \ in(s[i], t[i], u[i], v[i]);             \\\n  }\n\n#define die(...)        \
    \     \\\n  do {                       \\\n    Nyaan::out(__VA_ARGS__); \\\n \
    \   return;                  \\\n  } while (0)\n#line 82 \"template/template.hpp\"\
    \n\nnamespace Nyaan {\nvoid solve();\n}\nint main() { Nyaan::solve(); }\n#line\
    \ 2 \"data-structure-2d/fenwick-tree-on-wavelet-matrix.hpp\"\n//\n\n\n\n\nstruct\
    \ bit_vector {\n  using u32 = uint32_t;\n  using i64 = int64_t;\n  using u64 =\
    \ uint64_t;\n\n  static constexpr u32 w = 64;\n  vector<u64> block;\n  vector<u32>\
    \ count;\n  u32 n, zeros;\n\n  inline u32 get(u32 i) const { return u32(block[i\
    \ / w] >> (i % w)) & 1u; }\n  inline void set(u32 i) { block[i / w] |= 1LL <<\
    \ (i % w); }\n\n  bit_vector() {}\n  bit_vector(int _n) { init(_n); }\n  __attribute__((optimize(\"\
    O3,unroll-loops\"))) void init(int _n) {\n    n = zeros = _n;\n    block.resize(n\
    \ / w + 1, 0);\n    count.resize(block.size(), 0);\n  }\n\n  __attribute__((target(\"\
    popcnt\"))) void build() {\n    for (u32 i = 1; i < block.size(); ++i)\n     \
    \ count[i] = count[i - 1] + _mm_popcnt_u64(block[i - 1]);\n    zeros = rank0(n);\n\
    \  }\n\n  inline u32 rank0(u32 i) const { return i - rank1(i); }\n\n  __attribute__((target(\"\
    bmi2,popcnt\"))) inline u32 rank1(u32 i) const {\n    return count[i / w] + _mm_popcnt_u64(_bzhi_u64(block[i\
    \ / w], i % w));\n  }\n};\n\ntemplate <typename S, typename T>\nstruct WaveletMatrix\
    \ {\n  using u32 = uint32_t;\n  using i64 = int64_t;\n  using u64 = uint64_t;\n\
    \n  struct BIT {\n    u32 N;\n    vector<T> data;\n\n    BIT() = default;\n  \
    \  BIT(int size) { init(size); }\n\n    void init(int size) {\n      N = size;\n\
    \      data.assign(N + 1, 0);\n    }\n\n    __attribute__((target(\"bmi\"))) void\
    \ add(u32 k, T x) {\n      for (++k; k <= N; k += _blsi_u32(k)) data[k] += x;\n\
    \    }\n\n    __attribute__((target(\"bmi\"))) T sum(u32 k) const {\n      T ret\
    \ = T();\n      for (; k; k = _blsr_u32(k)) ret += data[k];\n      return ret;\n\
    \    }\n\n    __attribute__((target(\"bmi\"))) T sum(int l, int r) const {\n \
    \     T ret = T();\n      while (l != r) {\n        if (l < r) {\n          ret\
    \ += data[r];\n          r = _blsr_u32(r);\n        } else {\n          ret -=\
    \ data[l];\n          l = _blsr_u32(l);\n        }\n      }\n      return ret;\n\
    \    }\n  };\n\n  using P = pair<S, S>;\n  int n, lg;\n  vector<bit_vector> bv;\n\
    \  vector<BIT> bit;\n  vector<P> ps;\n  vector<S> ys;\n\n  WaveletMatrix() {}\n\
    \n  void add_point(S x, S y) {\n    ps.emplace_back(x, y);\n    ys.emplace_back(y);\n\
    \  }\n\n  __attribute__((optimize(\"O3\"))) void build() {\n    sort(begin(ps),\
    \ end(ps));\n    ps.erase(unique(begin(ps), end(ps)), end(ps));\n    n = ps.size();\n\
    \    sort(begin(ys), end(ys));\n    ys.erase(unique(begin(ys), end(ys)), end(ys));\n\
    \    vector<u32> cur(n), nxt(n);\n    for (int i = 0; i < n; ++i) cur[i] = yid(ps[i].second);\n\
    \    lg = __lg(max(n, 1)) + 1;\n    bv.assign(lg, n);\n    bit.assign(lg, n);\n\
    \    for (int h = lg - 1; h >= 0; --h) {\n      for (int i = 0; i < n; ++i)\n\
    \        if ((cur[i] >> h) & 1) bv[h].set(i);\n      bv[h].build();\n      array<decltype(begin(nxt)),\
    \ 2> it{begin(nxt), begin(nxt) + bv[h].zeros};\n      for (int i = 0; i < n; ++i)\
    \ *it[bv[h].get(i)]++ = cur[i];\n      swap(cur, nxt);\n    }\n  }\n\n  int xid(S\
    \ x) const {\n    return lower_bound(\n               begin(ps), end(ps), make_pair(x,\
    \ S()),\n               [](const P& a, const P& b) { return a.first < b.first;\
    \ }) -\n           begin(ps);\n  }\n\n  int yid(S y) const { return lower_bound(begin(ys),\
    \ end(ys), y) - begin(ys); }\n\n  void add(S x, S y, T val) {\n    int i = lower_bound(begin(ps),\
    \ end(ps), P{x, y}) - begin(ps);\n    for (int h = lg - 1; h >= 0; --h) {\n  \
    \    int i0 = bv[h].rank0(i);\n      if (bv[h].get(i))\n        i += bv[h].zeros\
    \ - i0;\n      else\n        i = i0;\n      bit[h].add(i, val);\n    }\n  }\n\n\
    \  T sum(int l, int r, u32 upper) const {\n    T res = 0;\n    for (int h = lg;\
    \ h--;) {\n      int l0 = bv[h].rank0(l), r0 = bv[h].rank0(r);\n      if ((upper\
    \ >> h) & 1) {\n        res += bit[h].sum(l0, r0);\n        l += bv[h].zeros -\
    \ l0;\n        r += bv[h].zeros - r0;\n      } else {\n        l = l0, r = r0;\n\
    \      }\n    }\n    return res;\n  }\n\n  T sum(S lx, S ly, S rx, S ry) const\
    \ {\n    int l = xid(lx), r = xid(rx);\n    return sum(l, r, yid(ry)) - sum(l,\
    \ r, yid(ly));\n  }\n};\n#line 2 \"misc/fastio.hpp\"\n\n\n\nnamespace fastio {\n\
    static constexpr int SZ = 1 << 17;\nchar ibuf[SZ], obuf[SZ];\nint pil = 0, pir\
    \ = 0, por = 0;\n\nstruct Pre {\n  char num[40000];\n  constexpr Pre() : num()\
    \ {\n    for (int i = 0; i < 10000; i++) {\n      int n = i;\n      for (int j\
    \ = 3; j >= 0; j--) {\n        num[i * 4 + j] = n % 10 + '0';\n        n /= 10;\n\
    \      }\n    }\n  }\n} constexpr pre;\n\ninline void load() {\n  memcpy(ibuf,\
    \ ibuf + pil, pir - pil);\n  pir = pir - pil + fread(ibuf + pir - pil, 1, SZ -\
    \ pir + pil, stdin);\n  pil = 0;\n}\ninline void flush() {\n  fwrite(obuf, 1,\
    \ por, stdout);\n  por = 0;\n}\n\ninline void rd(char& c) { c = ibuf[pil++]; }\n\
    template <typename T>\ninline void rd(T& x) {\n  if (pil + 32 > pir) load();\n\
    \  char c;\n  do\n    c = ibuf[pil++];\n  while (c < '-');\n  bool minus = 0;\n\
    \  if (c == '-') {\n    minus = 1;\n    c = ibuf[pil++];\n  }\n  x = 0;\n  while\
    \ (c >= '0') {\n    x = x * 10 + (c & 15);\n    c = ibuf[pil++];\n  }\n  if (minus)\
    \ x = -x;\n}\ninline void rd() {}\ntemplate <typename Head, typename... Tail>\n\
    inline void rd(Head& head, Tail&... tail) {\n  rd(head);\n  rd(tail...);\n}\n\n\
    inline void wt(char c) { obuf[por++] = c; }\ntemplate <typename T>\ninline void\
    \ wt(T x) {\n  if (por > SZ - 32) flush();\n  if (!x) {\n    obuf[por++] = '0';\n\
    \    return;\n  }\n  if (x < 0) {\n    obuf[por++] = '-';\n    x = -x;\n  }\n\
    \  int i = 12;\n  char buf[16];\n  while (x >= 10000) {\n    memcpy(buf + i, pre.num\
    \ + (x % 10000) * 4, 4);\n    x /= 10000;\n    i -= 4;\n  }\n  if (x < 100) {\n\
    \    if (x < 10) {\n      wt(char('0' + char(x)));\n    } else {\n      uint32_t\
    \ q = (uint32_t(x) * 205) >> 11;\n      uint32_t r = uint32_t(x) - q * 10;\n \
    \     obuf[por + 0] = '0' + q;\n      obuf[por + 1] = '0' + r;\n      por += 2;\n\
    \    }\n  } else {\n    if (x < 1000) {\n      memcpy(obuf + por, pre.num + (x\
    \ << 2) + 1, 3);\n      por += 3;\n    } else {\n      memcpy(obuf + por, pre.num\
    \ + (x << 2), 4);\n      por += 4;\n    }\n  }\n  memcpy(obuf + por, buf + i +\
    \ 4, 12 - i);\n  por += 12 - i;\n}\n\ninline void wt() {}\ntemplate <typename\
    \ Head, typename... Tail>\ninline void wt(Head head, Tail... tail) {\n  wt(head);\n\
    \  wt(tail...);\n}\ntemplate <typename T>\ninline void wtn(T x) {\n  wt(x, '\\\
    n');\n}\n\nstruct Dummy {\n  Dummy() { atexit(flush); }\n} dummy;\n\n}  // namespace\
    \ fastio\nusing fastio::rd;\nusing fastio::wt;\nusing fastio::wtn;\n#line 6 \"\
    verify/verify-yosupo-ds/yosupo-point-add-rectangle-sum-wm.test.cpp\"\n\nusing\
    \ namespace Nyaan; void Nyaan::solve() {\n  WaveletMatrix<int, ll> wm;\n\n  int\
    \ N, Q;\n  rd(N, Q);\n  vector<int> X(N), Y(N), W(N), c(Q), s(Q), t(Q), u(Q),\
    \ v(Q);\n  rep(i, N) {\n    rd(X[i], Y[i], W[i]);\n    wm.add_point(X[i], Y[i]);\n\
    \  }\n  rep(i, Q) {\n    rd(c[i], s[i], t[i], u[i]);\n    if (c[i])\n      rd(v[i]);\n\
    \    else\n      wm.add_point(s[i], t[i]);\n  }\n\n  wm.build();\n  rep(i, N)\
    \ { wm.add(X[i], Y[i], W[i]); }\n  rep(i, Q) {\n    if (c[i]) {\n      out(wm.sum(s[i],\
    \ t[i], u[i], v[i]));\n    } else\n      wm.add(s[i], t[i], u[i]);\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_rectangle_sum\"\
    \n\n#include \"../../template/template.hpp\"\n#include \"../../data-structure-2d/fenwick-tree-on-wavelet-matrix.hpp\"\
    \n#include \"../../misc/fastio.hpp\"\n\nusing namespace Nyaan; void Nyaan::solve()\
    \ {\n  WaveletMatrix<int, ll> wm;\n\n  int N, Q;\n  rd(N, Q);\n  vector<int> X(N),\
    \ Y(N), W(N), c(Q), s(Q), t(Q), u(Q), v(Q);\n  rep(i, N) {\n    rd(X[i], Y[i],\
    \ W[i]);\n    wm.add_point(X[i], Y[i]);\n  }\n  rep(i, Q) {\n    rd(c[i], s[i],\
    \ t[i], u[i]);\n    if (c[i])\n      rd(v[i]);\n    else\n      wm.add_point(s[i],\
    \ t[i]);\n  }\n\n  wm.build();\n  rep(i, N) { wm.add(X[i], Y[i], W[i]); }\n  rep(i,\
    \ Q) {\n    if (c[i]) {\n      out(wm.sum(s[i], t[i], u[i], v[i]));\n    } else\n\
    \      wm.add(s[i], t[i], u[i]);\n  }\n}"
  dependsOn:
  - template/template.hpp
  - template/util.hpp
  - template/bitop.hpp
  - template/inout.hpp
  - template/debug.hpp
  - template/macro.hpp
  - data-structure-2d/fenwick-tree-on-wavelet-matrix.hpp
  - misc/fastio.hpp
  isVerificationFile: true
  path: verify/verify-yosupo-ds/yosupo-point-add-rectangle-sum-wm.test.cpp
  requiredBy: []
  timestamp: '2020-12-05 07:59:51+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/verify-yosupo-ds/yosupo-point-add-rectangle-sum-wm.test.cpp
layout: document
redirect_from:
- /verify/verify/verify-yosupo-ds/yosupo-point-add-rectangle-sum-wm.test.cpp
- /verify/verify/verify-yosupo-ds/yosupo-point-add-rectangle-sum-wm.test.cpp.html
title: verify/verify-yosupo-ds/yosupo-point-add-rectangle-sum-wm.test.cpp
---