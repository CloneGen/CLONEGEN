int main () {
    int m, a, b, i, j;
    cin >> m;
    for (a = 3; a <= m / 2; a = a + 2) {
        for (i = 2; i <= sqrt (a);) {
            if (a % i != 0)
                i++;
            else
                break;
        }
        if (i > sqrt (a)) {
            b = m - a;
            for (j = 2; j <= sqrt (b);) {
                if (b % j != 0)
                    j++;
                else
                    break;
            }
            if (j > sqrt (b))
                cout << a << " " << b << endl;
        }
    }
    return 0;
}

