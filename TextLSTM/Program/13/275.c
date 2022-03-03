int main () {
    int n, i, num [20000];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> num[i];
        if (i > 0) {
            for (int k = 0;
            k < i; k++) {
                if (num[i] == num[k])
                    num[i] = 0;
            }
        }
    }
    cout << num[0];
    for (i = 1; i < n; i++) {
        if (num[i] > 9)
            cout << " " << num[i];
    }
    return 0;
}

