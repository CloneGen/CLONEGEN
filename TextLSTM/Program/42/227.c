int main () {
    int n = 0, i = 0, k = 0, a = 0, m = 0;
    cin >> n;
    int num [n];
    for (; i < n; i++)
        cin >> num[i];
    cin >> a;
    k = n;
    for (i = 0; i < k; i++) {
        if (num[i] == a) {
            for (m = i; m < k; m++)
                num[m] = num[m + 1];
            k--;
            i--;
        }
    }
    for (i = 0; i < k - 1; i++)
        cout << num[i] << " ";
    cout << num[k - 1];
    cout << endl;
    return 0;
}

