int main () {
    int w, a [13] = {0}, b [13], i;
    cin >> w;
    b[0] = w + 12;
    for (i = 1; i <= 12; i++) {
        if (i == 2)
            a[i] = 0;
        else if (i == 4 || i == 6 || i == 9 || i == 11)
            a[i] = 2;
        else
            a[i] = 3;
    }
    for (i = 1; i <= 12; i++) {
        b[i] = b[i - 1] + a[i - 1];
        if (b[i] % 7 == 5)
            cout << i << endl;
    }
    return 0;
}

