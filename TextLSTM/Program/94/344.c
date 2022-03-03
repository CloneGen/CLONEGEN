int main () {
    int n, num [500], odd [500], oddnum = 0, i, j, k = 0, temp;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> num[i];
        if (num[i] % 2 == 1) {
            odd[oddnum] = num[i];
            oddnum++;
        }
    }
    for (i = 0; i < oddnum; i++)
        for (j = 0; j < oddnum - i - 1; j++)
            if (odd[j] > odd[j + 1]) {
                temp = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = temp;
            }
    for (i = 0; i < oddnum; i++)
        cout << (k++ ? "," : "") << odd[i];
    cout << endl;
    return 0;
}

