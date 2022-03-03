int main () {
    char array [1000000], temp;
    int n, i, j, k, len, account = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> array;
        len = strlen (array);
        for (j = 0; j < len; j++) {
            if (array[j] == '0')
                continue;
            if (array[j] != '0') {
                temp = array[j];
                for (k = j + 1; k < len; k++) {
                    if (temp == array[k]) {
                        array[k] = '0';
                        array[j] = '0';
                    }
                }
            }
        }
        for (j = 0; j < len; j++) {
            if (array[j] != '0') {
                cout << array[j] << endl;
                account++;
                break;
            }
        }
        if (account == 0)
            cout << "no" << endl;
        account = 0;
    }
    return 0;
}

