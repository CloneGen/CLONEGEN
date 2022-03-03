int main () {
    int days [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int w, i, a [13] = {0, 12};
    cin >> w;
    for (i = 1; i < 12; i++)
        a[i + 1] = a[i] + days[i];
    for (i = 1; i <= 12; i++)
        if ((w + (a[i] % 7)) % 7 == 5)
            cout << i << endl;
    return 0;
}

