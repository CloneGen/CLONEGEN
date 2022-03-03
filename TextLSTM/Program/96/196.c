int main () {
    int i, c, t, flag = 0, a [101] = {0}, b [101] = {0};
    char num [101];
    cin.getline (num, 101);
    c = strlen (num);
    for (i = 0; i < c; i++) {
        a[i] = num[i] - '0';
    }
    for (i = 0; i < c; i++) {
        t = b[i] + a[i];
        b[i] = t / 13;
        b[i + 1] += (t % 13) * 10;
    }
    for (i = 0; i < c - 1; i++) {
        if (b[i] != 0 || (b[i] == 0 && flag == 1)) {
            flag = 1;
            cout << b[i];
        }
        if (flag == 0)
            continue;
    }
    cout << b[c - 1] << endl << b[c] / 10 << endl;
    return 0;
}

