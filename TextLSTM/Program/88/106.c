int main () {
    char str [100], *p1;
    int a [100] = {0}, *p2;
    int flag = 0, i = 0;
    cin.getline (str, 100);
    for (p1 = str; *p1 != 0; p1++) {
        if (*p1 <= '9' && *p1 >= '0') {
            if (flag == 0) {
                i++;
                flag = 1;
            }
            a[i] = 10 * a[i] + (*p1 - '0');
        }
        else
            flag = 0;
    }
    for (p2 = a + 1; p2 <= a + i; p2++)
        cout << *p2 << endl;
    return 0;
}

