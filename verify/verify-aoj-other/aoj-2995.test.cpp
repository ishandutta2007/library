#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2995"

#include "../../competitive-template.hpp"
#include "../../data-structure/union-find.hpp"
#include "../../graph/static-graph.hpp"
#include "../../misc/fastio.hpp"
#include "../../tree/dsu-on-tree.hpp"

void solve() {
  int N, K;
  rd(N, K);

  StaticGraph<void> g(N, 2 * N - 2);
  rep1(i, N - 1) {
    int u, v;
    rd(u, v);
    --u, --v;
    g.add_edge(u, v);
    g.add_edge(v, u);
  }

  V<pair<int, int>> cl(N);
  rep(i, N) rd(cl[i].first, cl[i].second);

  UnionFind uf(K + 1);
  int sm = 0;
  vi ans(N), val(K + 1);

  // reflect data of node i
  auto update = [&](int i) {
    uf.unite(cl[i].first, cl[i].second,
             [&](int x, int y) { val[x] += val[y]; });
    int p = uf.find(cl[i].first);
    if (uf.size(p) > val[p]) {
      sm++;
      val[p]++;
    }
  };
  // answer queries of subtree i
  auto query = [&](int i) { ans[i] = sm; };
  // below two function are called if all data must be deleted
  // delete data of node i (if necesarry)
  auto clear = [&](int i) {
    uf.data[cl[i].first] = uf.data[cl[i].second] = -1;
    val[cl[i].first] = val[cl[i].second] = 0;
  };
  // delete data related to all (if necesarry)
  auto reset = [&]() { sm = 0; };

  DSUonTree<decltype(g)> dsu(g);
  dsu.run(update, query, clear, reset);

  each(x, ans) wtn(x);
}
