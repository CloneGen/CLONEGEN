int max (int x, int y) {
    if (x >= y) {
        return x;
    }
    else
        return y;
}

int main () {
    int i, j, k, l, tem;
    char a [300], b [300];
    int c [300];
    cin.get (a, 290);
    cin.get ();
    cin.get (b, 290);
    if (strlen (a) > strlen (b)) {
        for (j = strlen (a) - 1; j >= strlen (a) - strlen (b); j--) {
            c[j] = a[j] - '0' + b[j - strlen (a) + strlen (b)] - '0';
            if (c[j] > 10) {
                c[j] = c[j] - 10;
                a[j - 1] = a[j - 1] + 1;
            }
        }
        for (j >= max (strlen (a) - strlen (b) - 1, 0); j >= 0; j--) {
            c[j] = a[j] - '0';
        }
        for (j = strlen (a) - 1; j >= 1; j--) {
            if (c[j] >= 10) {
                c[j] = c[j] - 10;
                c[j - 1]++;
            }
        }
        for (j = 0; j < strlen (a); j++) {
            if (c[j] != 0) {
                tem = j;
                break;
            }
        }
        for (j = tem; j < strlen (a); j++) {
            cout << c[j];
        }
        cout << endl;
    }
    if (strlen (a) == strlen (b)) {
        for (j = 0; j < strlen (a); j++) {
            c[j] = a[j] + b[j] - '0' - '0';
        }
        for (j = strlen (a) - 1; j > 0; j--) {
            if (c[j] >= 10) {
                c[j] = c[j] - 10;
                c[j - 1]++;
            }
        }
        if (c[0] == 0 && strlen (a) == 1 && strlen (b) == 1) {
            cout << "0";
        }
        for (j = 0; j < strlen (a); j++) {
            if (c[j] != 0) {
                tem = j;
                break;
            }
        }
        for (j = tem; j < strlen (a); j++) {
            cout << c[j];
        }
    }
    if (strlen (b) > strlen (a)) {
        for (j = strlen (b) - 1; j >= strlen (b) - strlen (a); j--) {
            c[j] = b[j] - '0' + a[j - strlen (b) + strlen (a)] - '0';
            if (c[j] > 10) {
                c[j] = c[j] - 10;
                b[j - 1] = b[j - 1] + 1;
            }
        }
        for (j >= max (strlen (b) - strlen (a) - 1, 0); j >= 0; j--) {
            c[j] = b[j] - '0';
        }
        for (j = strlen (b) - 1; j >= 1; j--) {
            if (c[j] >= 10) {
                c[j] = c[j] - 10;
                c[j - 1]++;
            }
        }
        for (j = 0; j < strlen (b); j++) {
            if (c[j] != 0) {
                tem = j;
                break;
            }
        }
        for (j = tem; j < strlen (b); j++) {
            cout << c[j];
        }
        cout << endl;
    }
}

