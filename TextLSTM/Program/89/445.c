int main () {
    int flag1 [10000] = {0}, flag2 [10000] = {0}, a, b, n, flag = 0, i;
    cin >> n;
    cin >> a >> b;
    while (a != 0 || b != 0) {
        flag1[a]++;
        flag2[b]++;
        cin >> a >> b;
    }
    for (i = 0; i < n; i++)
        if (*(flag1 + i) == 0 && *(flag2 + i) == n - 1) {
            cout << i;
            flag = 1;
        }
    if (!flag)
        cout << "NOT FOUND";
    return 0;
}

