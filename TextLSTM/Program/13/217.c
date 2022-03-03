int main () {
    int n, num [20001] = {0}, number, i, j;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> number;
        num[i] = number;
    }
    for (j = 1; j <= n; j++)
        for (i = j + 1; i <= n; i++)
            if (num[j] == num[i])
                num[i] = 0;
    for (i = 1; i <= n; i++)
        if (num[i] != 0) {
            cout << num[i];
            break;
        }
    for (j = i + 1; j <= n; j++)
        if (num[j] != 0)
            cout << " " << num[j];
    return 0;
}

