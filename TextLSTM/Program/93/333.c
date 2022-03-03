int op (int n, int i) {
    if (i == 1)
        cout << " ";
    cout << n;
    return 0;
}

int main () {
    int n;
    int i = 0;
    cin >> n;
    for (int k = 3;
    k <= 7; k += 2) {
        if (n % k == 0) {
            op (k, i);
            i = 1;
        }
    }
    if (i == 0)
        cout << 'n';
    return 0;
}

