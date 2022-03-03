int main () {
    int m, a, b, i, j;
    cin >> m;
    for (a = 3; a <= m / 2; a += 2) {
        for (i = 2; i < a; i++)
            if (a % i == 0)
                break;
        if (i == a) {
            b = m - a;
            for (j = 2; j < b; j++)
                if (b % j == 0)
                    break;
            if (b == j)
                cout << a << " " << b << endl;
        }
    }
    return 0;
}

