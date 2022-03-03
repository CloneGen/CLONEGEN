int main () {
    char a [50], *pointa;
    pointa = a;
    int m, i, len, temp = 0, account = 0;
    cin >> m;
    while (m > 0) {
        m--;
        cin >> a;
        len = strlen (a);
        temp += len;
        if (account == 0) {
            for (i = 0; i < len; i++)
                cout << *(pointa + i);
            account++;
            continue;
        }
        if (account > 0) {
            if (temp < 80) {
                cout << ' ';
                for (i = 0; i < len; i++)
                    cout << *(pointa + i);
                if (temp + 1 == 80) {
                    cout << endl;
                    account = 0;
                    temp = 0;
                }
                else {
                    account++;
                    temp++;
                }
            }
            if (temp >= 80) {
                cout << endl;
                for (i = 0; i < len; i++)
                    cout << *(pointa + i);
                account = 1;
                temp = len;
            }
        }
    }
    return 0;
}

