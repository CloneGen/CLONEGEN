int main () {
    int num [16];
    int i = 1;
    int n;
    int j, k, ans;
    i = 1;
    do {
        cin >> n;
        if (n != -1) {
            if (n == 0) {
                ans = 0;
                for (j = 1; j <= i - 1; j++)
                    for (k = 1; k <= i - 1; k++)
                        if (num[j] == 2 * num[k])
                            ans += 1;
                cout << ans << endl;
                i = 1;
            }
            else {
                num[i] = n;
                i += 1;
            }
        }
    }
    while (n != -1);
    return 0;
}

