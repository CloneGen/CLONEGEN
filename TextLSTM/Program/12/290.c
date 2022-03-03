int main () {
    int i, j, t, count, ans;
    int num [17];
    while (1) {
        i = 1;
        cin >> num[i];
        if (num[i] == -1)
            break;
        ans = 0;
        do {
            i++;
            cin >> num[i];
        }
        while (num[i] != 0);
        count = i - 1;
        for (i = 1; i <= count - 1; i++)
            for (j = 1; j <= count - i; j++) {
                if (num[j] > num[j + 1]) {
                    t = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = t;
                }
            }
        for (i = 1; i <= count - 1; i++)
            for (j = i + 1; j <= count; j++) {
                if (num[i] * 2 == num[j]) {
                    ans++;
                    break;
                }
                else {
                    if (num[i] * 2 < num[j])
                        break;
                }
            }
        cout << ans << endl;
    }
    return 0;
}

