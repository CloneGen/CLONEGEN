int main () {
    int a [20], i, j, k, s;
    for (s = 0, cin >> a[1]; a[1] != -1; s = 0, cin >> a[1]) {
        i = 1;
        while (a[i] != 0) {
            i++;
            cin >> a[i];
        }
        for (j = 1; j < i; j++)
            for (k = 1; k < i; k++)
                if (a[j] == 2 * a[k])
                    s++;
        cout << s << endl;
    }
    return 0;
}

