int main () {
    int a, b, c, ca = 0, cb = 0, cc = 0;
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            if (b == a)
                continue;
            else {
                c = 6 - a - b;
                ca = (b > a) + (a == c);
                cb = (a > b) + (a > c);
                cc = (c > b) + (b > a);
                if (ca + a == cb + b && cb + b == cc + c) {
                    for (int i = 1;
                    i <= 3; i++) {
                        if (a == i)
                            cout << 'A';
                        else if (b == i)
                            cout << 'B';
                        else if (c == i)
                            cout << 'C';
                    }
                }
            }
        }
    }
    return 0;
}

