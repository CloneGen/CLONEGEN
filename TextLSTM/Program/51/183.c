int main () {
    char str [520];
    int num [520] = {0};
    char *pc;
    int i, j, k, l, m, n, len;
    cin >> n;
    cin >> str;
    pc = str;
    len = strlen (str);
    int max = -1;
    for (i = 0; i <= len - n; i++) {
        for (j = i; j <= len - n; j++) {
            for (k = 0; k < n; k++) {
                if (*(pc + i + k) != *(pc + j + k))
                    break;
            }
            if (k == n)
                num[i]++;
        }
        if (num[i] > max)
            max = num[i];
    }
    l = 0;
    if (max <= 1) {
        cout << "NO" << endl;
        return 0;
    }
    cout << max << endl;
    for (i = 0; i < len - n; i++) {
        if (num[i] == max) {
            for (j = 0; j < n; j++) {
                cout << *(pc + i + j);
            }
            cout << endl;
        }
    }
    return 0;
}

