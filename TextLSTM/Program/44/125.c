int reverse (int x) {
    int b [10], i, j, c = 0;
    for (i = 0; i < 10; i++) {
        b[i] = x % 10;
        x = x / 10;
        if (x < 10) {
            b[i + 1] = x;
            break;
        }
    }
    j = 0;
    while (b[j] == 0)
        j++;
    for (; j < i + 2; j++)
        c = c + b[j] * (pow (10.0, i + 1 - j));
    return (c);
}

int main () {
    int a, n = 6, c;
    while (n > 0) {
        cin >> a;
        if (a == 0)
            cout << 0 << endl;
        else if (a < 0) {
            a = 0 - a;
            c = reverse (a);
            cout << "-" << c << endl;
        }
        else {
            c = reverse (a);
            cout << c << endl;
        }
        n--;
    }
    return 0;
}

