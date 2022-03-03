int main () {
    int a [16] = {0};
    while (1) {
        int i = 0, num = 0, p = 0;
        while (1) {
            cin >> a[i];
            if (a[i] <= 0)
                break;
            i++;
        }
        if (a[0] == -1)
            break;
        for (int j = 0;
        j < i; j++) {
            p = j;
            for (int k = 0;
            k < i; k++) {
                if (a[p] * 2 == a[k])
                    num++;
            }
        }
        cout << num << endl;
    }
    return 0;
}

