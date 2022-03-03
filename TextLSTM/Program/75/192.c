int main () {
    int n = 0, i, j, a = INT_MAX, b = INT_MIN, x [1000], y [1000], number [1000];
    char c;
    while (c != '\n') {
        cin >> x[n];
        if (a > x[n])
            a = x[n];
        n++;
        c = cin.get ();
    }
    for (i = 0; i < n; i++) {
        cin >> y[i];
        if (b < y[i])
            b = y[i];
        c = cin.get ();
    }
    for (i = a; i < b; i++) {
        number[i] = 0;
        for (j = 0; j < n; j++) {
            if ((x[j] <= i) && (y[j] > i))
                number[i]++;
        }
    }
    for (i = a + 1; i < b; i++) {
        if (number[a] < number[i])
            number[a] = number[i];
    }
    cout << n << " " << number[a] << endl;
    return 0;
}

