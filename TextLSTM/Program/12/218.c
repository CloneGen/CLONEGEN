int main () {
    for (int i = 0;
    ; i++) {
        int a [16];
        int temp;
        cin >> temp;
        if (temp == -1)
            break;
        else
            a[0] = temp;
        int n = 1;
        for (int j = 1;
        ; j++) {
            int temp1;
            cin >> temp1;
            if (temp1 == 0)
                break;
            else {
                a[j] = temp1;
                n++;
            }
        }
        int m = 0;
        for (int i = 0;
        i < n; i++) {
            for (int j = 0;
            j < n; j++) {
                if ((a[i] == (2 * a[j])))
                    m++;
            }
        }
        cout << m << endl;
    }
    return 0;
}

