int main () {
    char a [101] = {0}, b [101] = {0}, c [101] = {0};
    int l1 = 0, l2 = 0, l3 = 0, i, j, l;
    cin.getline (a, 101);
    cin.getline (b, 101);
    cin.getline (c, 101);
    while (a[l1] != '\0')
        l1++;
    while (b[l2] != '\0')
        l2++;
    while (c[l3] != '\0')
        l3++;
    l = l1 - l2;
    for (i = 0; i <= l; i++)
        if (a[i] == b[0] && a[i - 1] == ' ' && a[i + l2] == ' ' || i == 0 && a[i + l2] == ' ' || i == l && a[i - 1] == ' ') {
            int flag = 1;
            for (j = 0; j < l2; j++)
                if (a[j + i] != b[j])
                    flag = 0;
            if (flag) {
                if (l2 == l3)
                    for (j = 0; j < l2; j++)
                        a[j + i] = c[j];
                else if (l2 < l3) {
                    for (j = l + l2 - 1; j >= i + l2; j--)
                        a[j + l3 - l2] = a[j];
                    for (j = 0; j < l3; j++)
                        a[j + i] = c[j];
                }
                else if (l2 > l3) {
                    for (j = i + l2; j < l + l2; j++)
                        a[j + l3 - l2] = a[j];
                    for (j = 0; j < l3; j++)
                        a[j + i] = c[j];
                }
                i += l3;
                l += l3 - l2;
            }
        }
    for (i = 0; i < l + l2; i++)
        cout << a[i];
    return 0;
}

