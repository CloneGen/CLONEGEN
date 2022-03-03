int n;
int a [20000] = {0}, b [20000] = {0};

int main () {
    int i, j, k = 0, g = 0, kk = 0;
    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (a[i] == a[j]) {
                a[j] = -1;
            }
        }
    }
    for (i = 0; i < n; ++i) {
        if (a[i] >= 0) {
            b[k] = a[i];
            ++k;
        }
    }
    for (i = 0; i < k - 1; ++i) {
        cout << b[i] << " ";
    }
    cout << b[k - 1] << endl;
    return 0;
}

