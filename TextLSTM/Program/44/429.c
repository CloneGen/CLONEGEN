int main () {
    int reverse (int num);
    int i, a [7];
    for (i = 1; i < 7; i++)
        cin >> a[i];
    for (i = 1; i < 7; i++)
        reverse (a[i]);
    return 0;
}

int reverse (int num) {
    int b [20], j = 0;
    if (num == 0)
        cout << 0 << endl;
    else if (num > 0) {
        for (j = 1; j < 20; j++) {
            b[j] = num % 10;
            num = num / 10;
            if (num == 0)
                break;
        }
        int i = 1;
        while (b[i] == 0)
            i++;
        for (int k = i;
        k <= j; k++)
            cout << b[k];
        cout << endl;
    }
    else {
        cout << "-";
        reverse (-num);
    }
    return 0;
}

