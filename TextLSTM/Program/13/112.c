int main () {
    int n, a [20000], t = 1, temp;
    cin >> n;
    cin >> a[0];
    for (int i = 1;
    i < n; i++) {
        cin >> temp;
        for (int j = 0;
        j < t; j++) {
            if (temp == a[j])
                break;
            if (j == t - 1) {
                a[t] = temp;
                t += 1;
            }
        }
    }
    for (int i = 0;
    i < t - 1; i++)
        cout << a[i] << ' ';
    cout << a[t - 1] << endl;
    return 0;
}

