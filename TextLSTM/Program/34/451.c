void jiaogu (int k) {
    int m;
    if (k == 1) {
        cout << "End";
        return;
    }
    if (k % 2 == 0) {
        m = k / 2;
        printf ("%d/2=%d\n", k, m);
        jiaogu (m);
        return;
    }
    if (k % 2 == 1) {
        m = 3 * k + 1;
        printf ("%d*3+1=%d\n", k, m);
        jiaogu (m);
        return;
    }
}

int main () {
    int u;
    cin >> u;
    jiaogu (u);
    return 0;
}

