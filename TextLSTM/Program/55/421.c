int main () {
    char str [33];
    long a = 0, b = 0;
    long i = 0;
    long number = 1, sum = 0;
    cin >> a;
    for (i = 0; i < 33; i++) {
        str[i] = getchar ();
        if ((str[i] == ' ') && (i > 0))
            break;
    }
    i = i - 1;
    for (i;
    i > 0; i--) {
        if ((str[i] < 58) && (str[i] > 47)) {
            str[i] = str[i] - 48;
        }
        else if ((str[i] > 64) && (str[i] < 91)) {
            str[i] = str[i] - 55;
        }
        else if (str[i] > 96) {
            str[i] = str[i] - 87;
        }
        sum = sum + str[i] * number;
        number = number * a;
    }
    cin >> b;
    long left_number = 0;
    char d = 'A';
    long j = 0, k = 10;
    int reserve [33];
    do {
        left_number = sum % b;
        reserve[j] = left_number;
        j++;
        sum = sum / b;
    }
    while (sum > 0);
    j = j - 1;
    for (j;
    j >= 0; j--) {
        if (reserve[j] <= 9) {
            cout << reserve[j];
        }
        else {
            for (k = 10; k <= 36; k++) {
                if (reserve[j] == k) {
                    cout << d;
                    break;
                }
                d = d + 1;
            }
            d = 'A';
        }
    }
    return 0;
}

