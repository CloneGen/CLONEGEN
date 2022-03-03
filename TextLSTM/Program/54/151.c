int n, k;
int putapple (int, int);

int main () {
    int m, s;
    cin >> n >> k;
    for (m = n + 1;; m++) {
        s = putapple (n, m);
        if (s >= 1) {
            cout << m << endl;
            break;
        }
        else
            continue;
    }
    return 0;
}

int putapple (int p, int q) {
    if (q % n == k) {
        if (p > 1)
            return putapple (p - 1, (q - k) / n * (n - 1));
        else
            return ((q - k) / n);
    }
    else
        return -1;
}

