int main () {
    int n = 0, A [100000], k = 0, j = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> A[i];
    }
    cin >> k;
    for (int i = 0;
    i < n; i++) {
        A[i - j] = A[i];
        if (A[i] == k) {
            j++;
        }
    }
    for (int i = 0;
    i < n - j - 1; i++) {
        cout << A[i] << " ";
    }
    cout << A[n - j - 1];
    return 0;
}

