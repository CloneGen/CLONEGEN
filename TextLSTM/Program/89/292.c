int main () {
    int biaoji = 1;
    int n;
    int i, j;
    int a, b;
    int known [10000] = {0}, know [10000] = {0};
    cin >> n;
    for (i = 0;; i++) {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        if (a == b && a != 0)
            continue;
        know[a] = 1;
        known[b]++;
    }
    for (j = 0; j < n; j++) {
        if (know[j] == 0 && known[j] == n - 1) {
            cout << j << endl;
            biaoji = 0;
        }
    }
    if (biaoji)
        cout << "NOT FOUND" << endl;
    return 0;
}

