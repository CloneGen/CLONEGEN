int main () {
    int a, b, c, d, e;
    for (a = 1; a <= 5; a++) {
        for (b = 1; b <= 5; b++) {
            for (c = 1; c <= 5; c++) {
                for (d = 1; d <= 5; d++) {
                    for (e = 1; e <= 5; e++) {
                        if (e == 2 || e == 3 || a == b || a == c || a == d || a == e || b == c || b == d || b == e || c == d || c == e || d == e)
                            continue;
                        if (((c == 1) + (a == 5) + (b == 2) + (b == 2) == 4) && ((e == 1) + (c != 1) + (d == 1) == 0)) {
                            cout << a << " " << b << " " << c << " " << d << ' ' << e << endl;
                            break;
                        }
                        else if (((d == 1) + (c != 1) + (b == 2) + (b == 2) == 4) && ((e == 1) + (a == 5) + (d == 1) == 0)) {
                            cout << a << " " << b << " " << c << " " << d << ' ' << e << endl;
                            break;
                        }
                        else if (((d == 1) + (c != 1) + (c == 2) + (a == 5) == 4) && ((e == 1) + (b == 2) + (d == 1) == 0)) {
                            cout << a << " " << b << " " << c << " " << d << ' ' << e << endl;
                            break;
                        }
                        else if (((d == 1) + (c != 1) + (e == 2) + (d == 1) == 4) && ((e == 1) + (b == 2) + (a == 5) == 0)) {
                            cout << a << " " << b << " " << c << " " << d << ' ' << e << endl;
                            break;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

