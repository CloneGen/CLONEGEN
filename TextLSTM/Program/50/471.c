int main () {
    int w, i, j, day, a, b, c;
    cin >> w;
    for (i = 1; i <= 12; i++) {
        a = 0;
        b = 0;
        c = 0;
        for (j = 0; j < i; j++) {
            if (j == 2)
                a++;
            else if (j == 4 || j == 6 || j == 9 || j == 11)
                b++;
            else if (j != 0)
                c++;
        }
        day = (28 * a + 30 * b + 31 * c + 12 + w) % 7;
        if (day == 5)
            cout << i << endl;
    }
    return 0;
}

