int n, i, k, a;

int m (int number, int k1) {
    if (number == n)
        return i;
    if (m (number + 1, k1) != 0 && m (number + 1, k1) % (n - 1) == 0)
        return n * m (number + 1, k1) / (n - 1) + k;
    return 0;
}

int main () {
    cin >> n >> k;
    for (i = n + k;; i += n) {
        a = m (1, i);
        if (a != 0) {
            cout << a << endl;
            break;
        }
    }
    return 0;
}

