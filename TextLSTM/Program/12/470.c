int main () {
    int a [16];
    int num = 0;
    int s;
    int i, j;
    cin >> a[num];
    while (a[num] != -1) {
        while (a[num] != 0) {
            num++;
            cin >> a[num];
        }
        num--;
        s = 0;
        for (i = 0; i <= num; i++)
            for (j = 0; j <= num; j++)
                if (a[i] == a[j] * 2)
                    s++;
        cout << s << endl;
        num = 0;
        cin >> a[num];
    }
}

