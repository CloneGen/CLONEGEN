int main () {
    int m, i, j, k = 0, a;
    cin >> m;
    for (i = 3; i <= (m / 2); i = i + 2) {
        k = 0;
        a = m - i;
        for (j = 2; j < i; j++) {
            if (i % j == 0)
                k++;
        }
        if (k == 0) {
            k = 0;
            for (j = 2; j < a; j++) {
                if (a % j == 0)
                    k++;
            }
            if (k == 0) {
                a = m - i;
                cout << i << " " << a << endl;
            }
        }
    }
    cin.get ();
    cin.get ();
    return 0;
}

