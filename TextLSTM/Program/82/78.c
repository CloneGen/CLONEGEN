int main () {
    int n, high, low, a [100], b [50], j = 0, k = 0, max = 0;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> high >> low;
        a[i] = (high <= 140 && high >= 90 && low <= 90 && low >= 60);
        if (a[i] == 0) {
            j++;
            k = 0;
        }
        else {
            k++;
            b[j] = k;
            if (b[j] > max)
                max = b[j];
        }
    }
    cout << max << endl;
    return 0;
}

