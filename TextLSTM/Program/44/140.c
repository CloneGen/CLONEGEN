int reverse (int num) {
    int a [20];
    int i = 0, j = 0;
    if (num > 0) {
        while (num > 0) {
            a[i] = num % 10;
            num = num / 10;
            i++;
        }
        for (j = 0; j < i; j++) {
            num = num * 10 + a[j];
        }
    }
    else {
        num = num * (-1);
        while (num > 0) {
            a[i] = num % 10;
            num = num / 10;
            i++;
        }
        for (j = 0; j < i; j++) {
            num = num * 10 + a[j];
        }
        num = num * (-1);
    }
    return num;
}

int main () {
    int num [6], fan [6];
    int i = 0;
    for (i = 0; i < 6; i++) {
        cin >> num[i];
    }
    for (i = 0; i < 6; i++) {
        fan[i] = reverse (num[i]);
    }
    for (i = 0; i < 5; i++) {
        cout << fan[i] << endl;
    }
    cout << fan[5];
    return 0;
}

