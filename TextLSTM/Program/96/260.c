int main () {
    int i, j, k, count_num;
    char num [101], shang [100];
    int mod = 0;
    cin >> num;
    count_num = strlen (num);
    mod = 0;
    for (j = 0; j < count_num; j++) {
        mod = mod * 10 + num[j] - '0';
        shang[j] = mod / 13 + '0';
        mod = mod % 13;
    }
    shang[count_num] = '\0';
    for (j = 0;; j++) {
        if (shang[j] - '0') {
            k = j;
            break;
        }
    }
    if (j == count_num) {
        cout << "0" << endl;
    }
    else {
        for (j = k; j < count_num; j++) {
            cout << shang[j];
        }
        cout << endl;
    }
    cout << mod << endl;
    return 0;
}

