int main () {
    int a = 0, n = 0, m = 0, i = 0, k = 0;
    cin >> n;
    k = n;
    int num [n];
    for (; i < n; i++)
        cin >> num[i];
    for (i = 0; i < k; i++) {
        for (m = i + 1; m < k; m++) {
            if (num[m] == num[i]) {
                for (a = m; a < k; a++)
                    num[a] = num[a + 1];
                k--;
                m--;
            }
        }
    }
    for (i = 0; i < k - 1; i++)
        cout << num[i] << " ";
    cout << num[k - 1] << endl;
    return 0;
}

