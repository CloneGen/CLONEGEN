int main () {
    char num;
    int a [101], i = 1, c = 0, j;
    while ((num = cin.get ()) != '\n') {
        a[i] = num - '0';
        i++;
    }
    if (i == 2)
        cout << "0" << endl << a[1];
    else {
        if (i == 3 && (10 * a[1] + a[2]) < 13)
            cout << "0" << endl << 10 * a[1] + a[2];
        else {
            for (j = 1; j <= i - 1; j++) {
                c = 10 * a[j] + a[j + 1];
                if (c >= 13) {
                    cout << c / 13;
                    a[j + 1] = c % 13;
                }
                else {
                    if (j != 1 && j != i - 1) {
                        cout << "0";
                        a[j + 1] = c;
                    }
                    else
                        a[j + 1] = c;
                }
                if (j == i - 2)
                    cout << endl << c % 13;
                c = 0;
            }
        }
    }
    return 0;
}

