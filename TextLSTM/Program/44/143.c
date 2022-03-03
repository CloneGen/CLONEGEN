void reverse (int num) {
    if (num == 0)
        cout << num << endl;
    else if (num > 0) {
        int i = 0, n;
        int a [20];
        while (num != 0) {
            a[i] = num % 10;
            num = num / 10;
            i++;
        }
        n = i;
        int count = 0;
        for (i = 0; i < 20; i++) {
            if (a[i] == 0)
                count++;
            else
                break;
        }
        for (i = count; i < n; i++)
            cout << a[i];
        cout << endl;
    }
}

int main () {
    int num;
    for (int i = 1;
    i <= 6; i++) {
        cin >> num;
        if (num < 0) {
            cout << "-";
            reverse (-num);
        }
        else
            reverse (num);
    }
    return 0;
}

