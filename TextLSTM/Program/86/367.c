int main () {
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, i = 0;
    cin >> a;
    for (e = 1; e <= a; e++) {
        cin >> b;
        if (b == 0)
            cout << "60" << endl;
        else {
            for (c = 1; c <= b; c++) {
                cin >> d;
                if ((d + 3 * c) <= 60) {
                    i = d - ((d + 3 * c) - 60);
                    f = 60 - 3 * c;
                }
                else if (((d + 3 * (c - 1)) <= 60) && ((d + 3 * c) > 60)) {
                    i = d;
                    f = d;
                }
                else {
                    f = i;
                }
            }
            cout << f << endl;
        }
    }
    return 0;
}

