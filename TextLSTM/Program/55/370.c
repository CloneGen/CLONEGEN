int main () {
    char n [100];
    int length, ten = 0, i;
    int a, b;
    cin >> a >> n >> b;
    length = strlen (n);
    for (i = 0; i <= length - 1; i++) {
        if (('A' <= n[i]) && (n[i] <= 'Z'))
            n[i] = n[i] - 'A' + 10;
        else if (('a' <= n[i]) && (n[i] <= 'z'))
            n[i] = n[i] - 'a' + 10;
        else if (('0' <= n[i]) && (n[i] <= '9'))
            n[i] = n[i] - '0';
    }
    for (i = 0; i <= length - 1; i++) {
        ten = (int) ten + n[i] * pow ((double) a, length - i - 1);
    }
    if (ten == 0)
        cout << ten;
    if (ten != 0) {
        int yushu [100], j;
        for (i = 0; ten != 0; i++) {
            yushu[i] = ten % b;
            ten = ten / b;
        }
        for (j = i - 1; j >= 0; j--) {
            if ((0 <= yushu[j]) && (yushu[j] <= 9))
                cout << yushu[j];
            else if (yushu[j] >= 10) {
                yushu[j] = yushu[j] + 'A' - 10;
                putchar (yushu [j]);
            }
        }
    }
    cout << endl;
    return 0;
}

