int main () {
    int a [100], b [100];
    int n;
    int count = 0, temp;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> a[i];
        if (a[i] % 2)
            b[count++] = a[i];
    }
    for (int i = 0;
    i < count; i++)
        for (int j = count - 1;
        j > i; j--)
            if (b[j - 1] > b[j]) {
                temp = b[j - 1];
                b[j - 1] = b[j];
                b[j] = temp;
            }
    for (int i = 0;
    i < count; i++) {
        if (i)
            cout << ',';
        cout << b[i];
    }
    cout << endl;
    return 0;
}

