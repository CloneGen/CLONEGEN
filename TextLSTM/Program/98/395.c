int main () {
    char ch [1000] [40] = {0};
    char (*p) [40];
    int n, i, counter = 0;
    p = ch;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> *p++;
    p = ch;
    while (p < (ch + n)) {
        if (counter == 0) {
            counter += strlen (*p);
            cout << *p;
            p++;
        }
        else {
            counter += strlen (*p) + 1;
            if (counter <= 80) {
                cout << ' ' << *p;
                p++;
            }
            else {
                counter = 0;
                cout << endl;
            }
        }
    }
    return 0;
}

