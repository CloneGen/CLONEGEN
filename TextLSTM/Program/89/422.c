int main () {
    int n, i, a, b, fam1 [100000] = {0}, fam2 [100000] = {0}, flag = 0, *p1, *p2;
    cin >> n;
    cin >> a >> b;
    while (!(a == 0 && b == 0)) {
        fam1[a] = 1;
        fam2[b]++;
        cin >> a >> b;
    }
    p1 = fam1;
    p2 = fam2;
    for (i = 0; i < n; i++) {
        if (*(p1 + i) == 0 && *(p2 + i) == n - 1) {
            flag++;
            cout << i;
        }
    }
    if (flag == 0)
        cout << "NOT FOUND";
    return 0;
}

