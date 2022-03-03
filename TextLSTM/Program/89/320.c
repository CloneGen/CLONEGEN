int main () {
    int n, a [2], i, num = 0, count1 [10000] = {0}, count2 [10000] = {0};
    cin >> n;
    do {
        cin >> a[0] >> a[1];
        if (a[0] == 0 && a[1] == 0)
            break;
        count1[a[0]]++;
        count2[a[1]]++;
    }
    while (1);
    for (i = 0; i < n; i++) {
        if (count1[i] == 0 && count2[i] == (n - 1)) {
            cout << i << endl;
            num++;
        }
    }
    if (num == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

