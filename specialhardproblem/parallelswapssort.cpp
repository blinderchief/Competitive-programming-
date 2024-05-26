#include <bits/stdc++.h>
using namespace std;

const int N = 3e5 + 5;
int n;
int a[N];
int pos[N];
bool is_b[N];
int swaps_needed[N];

struct SegmentTree {
    vector<int> tree[4 * N];
    vector<int> lazy[4 * N];

    void build(int v, int l, int r) {
        if (l == r) {
            tree[v] = {a[l]};
            lazy[v] = {0};
            return;
        }
        int mid = (l + r) / 2;
        build(2 * v, l, mid);
        build(2 * v + 1, mid + 1, r);
        merge(tree[2 * v].begin(), tree[2 * v].end(),
              tree[2 * v + 1].begin(), tree[2 * v + 1].end(),
              back_inserter(tree[v]));
        lazy[v].resize(tree[v].size());
    }

    void push(int v, int l, int r) {
        if (!lazy[v].empty()) {
            for (int i = 0; i < tree[v].size(); ++i) {
                tree[v][i] += lazy[v][i];
            }
            if (l != r) {
                for (int i = 0; i < lazy[2 * v].size(); ++i) {
                    lazy[2 * v][i] += lazy[v][i];
                    lazy[2 * v + 1][i] += lazy[v][i];
                }
            }
            lazy[v].clear();
        }
    }

    void update(int v, int l, int r, int ql, int qr, int val) {
        push(v, l, r);
        if (l > qr || r < ql)
            return;
        if (ql <= l && r <= qr) {
            for (int i = 0; i < tree[v].size(); ++i) {
                tree[v][i] += val;
            }
            if (l != r) {
                for (int i = 0; i < lazy[2 * v].size(); ++i) {
                    lazy[2 * v][i] += val;
                    lazy[2 * v + 1][i] += val;
                }
            }
            return;
        }
        int mid = (l + r) / 2;
        update(2 * v, l, mid, ql, qr, val);
        update(2 * v + 1, mid + 1, r, ql, qr, val);
        merge(tree[2 * v].begin(), tree[2 * v].end(),
              tree[2 * v + 1].begin(), tree[2 * v + 1].end(),
              tree[v].begin());
    }

    int get_max_sum(int v, int l, int r, int ql, int qr) {
        push(v, l, r);
        if (l > qr || r < ql)
            return 0;
        if (ql <= l && r <= qr) {
            int sum = 0;
            for (int x : tree[v]) {
                if (is_b[x]) {
                    sum += pos[x];
                }
            }
            return sum;
        }
        int mid = (l + r) / 2;
        return max(get_max_sum(2 * v, l, mid, ql, qr),
                   get_max_sum(2 * v + 1, mid + 1, r, ql, qr));
    }

    int get_min_swaps(int v, int l, int r, int ql, int qr) {
        push(v, l, r);
        if (l > qr || r < ql)
            return INT_MAX;
        if (ql <= l && r <= qr) {
            int mn = INT_MAX;
            for (int x : tree[v]) {
                if (is_b[x])
                    mn = min(mn, swaps_needed[x]);
            }
            return mn;
        }
        int mid = (l + r) / 2;
        return min(get_min_swaps(2 * v, l, mid, ql, qr),
                   get_min_swaps(2 * v + 1, mid + 1, r, ql, qr));
    }
} segTree;

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    segTree.build(1, 1, n);

    vector<pair<int, int>> ops;
    for (int i = 1; i <= n; i++) {
        int l = i, r = n;
        while (l < r) {
            int mid = (l + r + 1) / 2;
            if (segTree.get_max_sum(1, 1, n, i, mid) == mid * (mid - i + 1) - (mid - i + 1) * (mid - i) / 2)
                l = mid;
            else
                r = mid - 1;
        }
        ops.emplace_back(i, l);
        segTree.update(1, 1, n, i, l, 1);
        while (segTree.get_min_swaps(1, 1, n, i, i) == 0) {
            int x = segTree.tree[1][0];
            is_b[x] = false;
            pos[x] = 0;
            swaps_needed[x] = INT_MAX;
            segTree.tree[1].erase(segTree.tree[1].begin());
        }
    }

    for (int i = n; i >= 1; i--) {
        int l = 1, r = i;
        while (l < r) {
            int mid = (l + r + 1) / 2;
            if (segTree.get_max_sum(1, 1, n, mid, i) == i * (i - mid + 1) - (i - mid + 1) * (i - mid) / 2)
                r = mid;
            else
                l = mid + 1;
        }
        ops.emplace_back(l, i);
        segTree.update(1, 1, n, l, i, 1);
        while (segTree.get_min_swaps(1, 1, n, i, i) == 0) {
            int x = segTree.tree[1][0];
            is_b[x] = false;
            pos[x] = 0;
            swaps_needed[x] = INT_MAX;
            segTree.tree[1].erase(segTree.tree[1].begin());
        }
    }

    cout << ops.size() << "\n";
    for (auto [l,r] : ops) {
        cout << l << " " << r << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
