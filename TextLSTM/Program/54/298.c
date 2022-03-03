int MinApp (int, int);

int main () {
    int n, k;
    cin >> n >> k;
    cout << MinApp (n, k) << endl;
    return 0;
}

int MinApp (int n, int k) {
    int i, j, Apple;
    for (i = 1;; i++) {
        Apple = n * i + k;
        for (j = 1; j < n; j++) {
            if ((Apple % (n - 1)) == 0)
                Apple = Apple *n / (n - 1) + k;
            else
                break;
        }
        if (j == n)
            break;
    }
    return (Apple);
}

