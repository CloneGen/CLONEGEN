int main () {
    int a;
    while (cin >> a) {
        if (a != -1) {
            int i = 0, j, k, p = 0;
            int b [15] = {a};
            while (b[i] != 0) {
                cin >> b[i + 1];
                i++;
            }
            for (j = 0; j < i; j++) {
                for (k = j + 1; k < i; k++)
                    if (b[k] == 2 * b[j] || b[j] == 2 * b[k]) {
                        p = p + 1;
                    }
            }
            cout << p << endl;
        }
    }
    return 0;
}

