int main () {
    int n;
    cin >> n;
    int num [n];
    cin >> num[0];
    cout << num[0];
    for (int i = 1;
    i < n; i++) {
        cin >> num[i];
        for (int j = 0;
        j < i; j++) {
            if (num[j] == num[i])
                num[i] = 0;
        }
        if (num[i])
            cout << ' ' << num[i];
    }
    return 0;
}

