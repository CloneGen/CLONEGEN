int main () {
    int i = 0, x, j, g, k, b, a [15];
    while (cin >> x) {
        if (x == -1)
            return 0;
        else {
            j = 0;
            i = 0;
            for (g = 0;; g++) {
                a[i] = x;
                i++;
                cin >> x;
                if (x == 0)
                    break;
            }
            for (k = 0; k < i; k++) {
                b = 2 * a[k];
                for (g = 0; g < i; g++) {
                    if (a[g] == b)
                        j++;
                }
            }
        }
        cout << j << endl;
    }
}

