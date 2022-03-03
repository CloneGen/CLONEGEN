int main () {
    char str1 [251], str2 [251];
    int a [250] = {0}, b [250] = {0}, i;
    memset (a, 0, sizeof (a));
    memset (b, 0, sizeof (b));
    cin.getline (str1, 250);
    cin.getline (str2, 250);
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0')
        len1++;
    while (str2[len2] != '\0')
        len2++;
    for (i = len1 - 1; i >= 0; i--)
        a[len1 - 1 - i] = str1[i] - '0';
    for (i = len2 - 1; i >= 0; i--)
        b[len2 - i - 1] = str2[i] - '0';
    for (i = 0; i < len1 || i < len2; i++) {
        if (a[i] + b[i] >= 10) {
            a[i + 1] += 1;
            a[i] = a[i] + b[i] - 10;
        }
        else
            a[i] += b[i];
    }
    int count = 249;
    while (a[count] == 0)
        count--;
    for (i = count; i >= 0; i--)
        cout << a[i];
    if (count < 0)
        cout << 0 << endl;
    return 0;
}

