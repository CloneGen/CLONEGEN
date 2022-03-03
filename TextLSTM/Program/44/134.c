int reverse (int a);

int main () {
    int n [6], num [6], i;
    for (i = 0; i < 6; i++)
        cin >> n[i];
    for (i = 0; i < 6; i++)
        num[i] = reverse (n[i]);
    for (i = 0; i < 5; i++)
        cout << num[i] << endl;
    cout << num[5];
    return 0;
}

int reverse (int a) {
    int x [100], i = 0, sum = 0, num = 0;
    if (a > 0) {
        do {
            x[i] = a % 10;
            a = a / 10;
            i++;
            num++;
        }
        while (a > 0);
        for (i = 0; i < num; i++)
            sum = sum * 10 + x[i];
    }
    else if (a < 0) {
        a = a * (-1);
        do {
            x[i] = a % 10;
            a = a / 10;
            i++;
            num++;
        }
        while (a > 0);
        for (i = 0; i < num; i++)
            sum = sum * 10 + x[i];
        sum = sum * (-1);
    }
    else if (a == 0 && a == -0)
        sum = 0;
    return sum;
}

