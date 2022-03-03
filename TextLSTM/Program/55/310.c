int main () {
    int a, b, l, n = 0, i;
    int y [100] = {0};
    char num [100] = {0};
    cin >> a;
    cin >> num;
    cin >> b;
    l = strlen (num);
    for (i = 0; i < l; i++) {
        if ((num[i] >= 'a') && (num[i] <= 'z'))
            num[i] = num[i] - 87;
        else if ((num[i] >= 'A') && (num[i] <= 'Z'))
            num[i] = num[i] - 55;
        else if ((num[i] >= 48) && (num[i] <= 57))
            num[i] = num[i] - 48;
        n = n * a + num[i];
    }
    if (n == 0)
        cout << 0;
    else {
        i = 0;
        while (n != 0) {
            y[i++] = n % b;
            n = n / b;
        }
        for (i--; i >= 0; i--) {
            if (y[i] > 9)
                cout << (char) (y[i] + 55);
            else
                cout << y[i];
        }
    }
    cout << endl;
    return 0;
}

