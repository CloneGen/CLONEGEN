int main () {
    int a [16], j;
    while (cin >> a[0]) {
        if (a[0] == -1)
            break;
        int i = 1;
        int l = 0;
        while (cin >> a[i]) {
            if (a[i] == 0)
                break;
            for (j = 0; j < i; j++)
                if ((a[i] == 2 * a[j]) || (a[j] == 2 * a[i]))
                    l = l + 1;
            i++;
        }
        cout << l << endl;
    }
    return 0;
}

