int main () {
    int n;
    cin >> n;
    cout << endl;
    int num [1001];
    for (int i = 0;
    i < 1001; i++)
        num[i] = 0;
    num[0] = 1;
    for (int i = 0;
    i < n; i++) {
        for (int j = 0;
        j < 1000; j++) {
            num[j] = num[j] + num[j];
        }
        for (int j = 0;
        j < 1000; j++) {
            if (num[j] >= 10) {
                num[j + 1] = num[j + 1] + 1;
                num[j] = num[j] - 10;
            }
        }
    }
    int k = 1000;
    while (num[k] == 0)
        k--;
    for (int i = k;
    i >= 0; i--)
        cout << num[i];
    cout << endl;
    return 0;
}

