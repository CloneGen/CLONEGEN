int main () {
    int n, num [50], add = 0, flag = 0;
    memset (num, 0, sizeof (num));
    num[0] = 1;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        for (int j = 0;
        j < 50; j++) {
            num[j] = num[j] * 2;
            num[j] += add;
            add = num[j] / 10;
            num[j] = num[j] % 10;
        }
    }
    for (int i = 49;
    i >= 0; i--)
        if (num[i] != 0 && flag == 0) {
            cout << num[i];
            flag++;
        }
        else if (flag)
            cout << num[i];
    cout << endl;
    return 0;
}

