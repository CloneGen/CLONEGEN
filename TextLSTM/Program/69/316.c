int main () {
    char a [252], b [252];
    int l [4], max [252] = {0}, min [252] = {0}, i, j;
    cin >> a >> b;
    l[0] = strlen (a);
    l[1] = strlen (b);
    if (l[0] > l[1]) {
        l[2] = l[0];
        l[3] = l[1];
        j = 0;
        for (i = l[0] - 1; i >= 0; i--)
            max[j++] = a[i] - '0';
        j = 0;
        for (i = l[1] - 1; i >= 0; i--)
            min[j++] = b[i] - '0';
    }
    else {
        l[3] = l[0];
        l[2] = l[1];
        j = 0;
        for (i = l[0] - 1; i >= 0; i--)
            min[j++] = a[i] - '0';
        j = 0;
        for (i = l[1] - 1; i >= 0; i--)
            max[j++] = b[i] - '0';
    }
    for (i = 0; i < l[3]; i++) {
        if ((max[i] + min[i]) > 9) {
            max[i + 1]++;
            max[i] = max[i] + min[i] - 10;
        }
        else
            max[i] = max[i] + min[i];
    }
    for (i = l[3]; i < l[2]; i++) {
        if (max[i] > 9) {
            max[i] -= 10;
            max[i + 1]++;
        }
    }
    j = l[2];
    while (max[j] == 0)
        j--;
    if (j < 0)
        cout << 0;
    for (; j >= 0; j--)
        cout << max[j];
    return 0;
}

