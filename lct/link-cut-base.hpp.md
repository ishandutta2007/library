---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"lct/link-cut-base.hpp\"\n\ntemplate <typename Splay>\nstruct\
    \ LinkCutTree : Splay {\n  using Node = typename Splay::Node;\n  using Ptr = Node\
    \ *;\n\n  Ptr expose(Ptr t) {\n    Ptr rp = nullptr;\n    for (Ptr cur = t; cur;\
    \ cur = cur->p) {\n      // cerr << \"@expose \" << cur << endl;\n      this->splay(cur);\n\
    \      cur->r = rp;\n      this->update(cur);\n      rp = cur;\n    }\n    this->splay(t);\n\
    \    return rp;\n  }\n\n  void link(Ptr child, Ptr parent) {\n    expose(child);\n\
    \    expose(parent);\n    child->p = parent;\n    parent->r = child;\n    this->update(parent);\n\
    \  }\n\n  void cut(Ptr child) {\n    expose(child);\n    Ptr parent = child->l;\n\
    \    child->l = nullptr;\n    parent->p = nullptr;\n    this->update(child);\n\
    \  }\n\n  void evert(Ptr t) {\n    expose(t);\n    this->toggle(t);\n    this->push(t);\n\
    \  }\n\n  Ptr lca(Ptr u, Ptr v) {\n    if (get_root(u) != get_root(v)) return\
    \ nullptr;\n    expose(u);\n    return expose(v);\n  }\n\n  Ptr get_kth(Ptr x,\
    \ int k) {\n    expose(x);\n    while (x) {\n      this->push(x);\n      if (x->r\
    \ && x->r->sz > k) {\n        x = x->r;\n      } else {\n        if (x->r) k -=\
    \ x->r->sz;\n        if (k == 0) return x;\n        k -= 1;\n        x = x->l;\n\
    \      }\n    }\n    return nullptr;\n  }\n\n  Ptr get_root(Ptr x) {\n    expose(x);\n\
    \    while (x->l) {\n      this->push(x);\n      x = x->l;\n    }\n    return\
    \ x;\n  }\n};\n"
  code: "#pragma once\n\ntemplate <typename Splay>\nstruct LinkCutTree : Splay {\n\
    \  using Node = typename Splay::Node;\n  using Ptr = Node *;\n\n  Ptr expose(Ptr\
    \ t) {\n    Ptr rp = nullptr;\n    for (Ptr cur = t; cur; cur = cur->p) {\n  \
    \    // cerr << \"@expose \" << cur << endl;\n      this->splay(cur);\n      cur->r\
    \ = rp;\n      this->update(cur);\n      rp = cur;\n    }\n    this->splay(t);\n\
    \    return rp;\n  }\n\n  void link(Ptr child, Ptr parent) {\n    expose(child);\n\
    \    expose(parent);\n    child->p = parent;\n    parent->r = child;\n    this->update(parent);\n\
    \  }\n\n  void cut(Ptr child) {\n    expose(child);\n    Ptr parent = child->l;\n\
    \    child->l = nullptr;\n    parent->p = nullptr;\n    this->update(child);\n\
    \  }\n\n  void evert(Ptr t) {\n    expose(t);\n    this->toggle(t);\n    this->push(t);\n\
    \  }\n\n  Ptr lca(Ptr u, Ptr v) {\n    if (get_root(u) != get_root(v)) return\
    \ nullptr;\n    expose(u);\n    return expose(v);\n  }\n\n  Ptr get_kth(Ptr x,\
    \ int k) {\n    expose(x);\n    while (x) {\n      this->push(x);\n      if (x->r\
    \ && x->r->sz > k) {\n        x = x->r;\n      } else {\n        if (x->r) k -=\
    \ x->r->sz;\n        if (k == 0) return x;\n        k -= 1;\n        x = x->l;\n\
    \      }\n    }\n    return nullptr;\n  }\n\n  Ptr get_root(Ptr x) {\n    expose(x);\n\
    \    while (x->l) {\n      this->push(x);\n      x = x->l;\n    }\n    return\
    \ x;\n  }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: lct/link-cut-base.hpp
  requiredBy: []
  timestamp: '2020-12-16 23:51:04+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lct/link-cut-base.hpp
layout: document
redirect_from:
- /library/lct/link-cut-base.hpp
- /library/lct/link-cut-base.hpp.html
title: lct/link-cut-base.hpp
---