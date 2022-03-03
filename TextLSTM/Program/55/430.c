int main () {
    char n [101];
    int a, b, length, i, j, temp;
    long int value = 0, product;
    cin >> a >> n >> b;
    length = strlen (n);
    for (i = 0; i < length; i++) {
        product = 1;
        if (n[i] >= 65 && n[i] <= 90) {
            temp = n[i] - 55;
        }
        else if (n[i] >= 97 && n[i] <= 122) {
            temp = n[i] - 87;
        }
        else {
            temp = n[i] - 48;
        }
        for (j = 0; j < length - i - 1; j++) {
            product *= a;
        }
        value += temp * product;
    }
    if (value == 0) {
        cout << "0" << endl;
        return 0;
    }
    else {
        char m [101];
        for (i = 0;; i++) {
            temp = value % b;
            if (value == 0) {
                break;
            }
            else if (temp >= 0 && temp <= 9) {
                m[i] = temp + 48;
            }
            else {
                m[i] = temp + 55;
            }
            value /= b;
        }
        length = i;
        for (i = length - 1; i >= 0; i--) {
            cout << m[i];
        }
    }
    return 0;
}

