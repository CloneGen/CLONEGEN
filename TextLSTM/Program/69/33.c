int main () {
    char str1 [250] = {'\0'}, str2 [250] = {'\0'};
    int len1, len2, a [250] = {0}, b [250] = {0}, k = 0, i = 0, j = 0, c [251] = {0}, max, flag = 0;
    cin.getline (str1, 250);
    cin.getline (str2, 250);
    len1 = strlen (str1);
    len2 = strlen (str2);
    if (len1 > len2)
        max = len1;
    else
        max = len2;
    for (i = len1 - 1; i >= 0; i--) {
        a[k++] = str1[i] - '0';
    }
    k = 0;
    for (i = len2 - 1; i >= 0; i--) {
        b[k++] = str2[i] - '0';
    }
    for (i = 0; i < max; i++) {
        c[i] = a[i] + b[i];
    }
    for (i = 0; i < 251; i++) {
        if (c[i] >= 10) {
            c[i] = c[i] % 10;
            c[i + 1]++;
        }
    }
    for (i = 250; i >= 0; i--) {
        if (c[i] > 0) {
            for (j = i; j >= 0; j--) {
                cout << c[j];
            }
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << "0";
    }
    cout << endl;
    return 0;
}

