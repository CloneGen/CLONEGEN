int main () {
    int k = 1;
    while (k == 1) {
        int a [16];
        cin >> a[0];
        int l = 0;
        if (a[0] == -1)
            k = 0;
        else {
            while (a[l] != 0) {
                l++;
                cin >> a[l];
            }
            int i, j, num = 0;
            for (i = 0; i < l - 1; i++)
                for (j = i + 1; j < l; j++)
                    if (a[i] - 2 * a[j] == 0 || a[j] - 2 * a[i] == 0)
                        num++;
            cout << num << endl;
        }
    }
    return 0;
}

