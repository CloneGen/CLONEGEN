int main () {
    int a, b, num [100], top = 0;
    char s [100];
    cin >> a;
    cin >> s;
    cin >> b;
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 65) && (s[i] <= 90))
            num[i] = s[i] - 'A' + 10;
        else if ((s[i] >= 90) && (s[i] <= 122))
            num[i] = s[i] - 'a' + 10;
        else if ((s[i] >= '0') && (s[i] <= '9'))
            num[i] = s[i] - '0';
        top++;
    }
    long int sum = 0;
    for (i = 0; i < top; i++)
        sum = sum * a + num[i];
    char s1 [10000];
    int j;
    if (sum == 0)
        cout << "0" << endl;
    else {
        for (j = 0; sum; j++) {
            if ((sum % b) > 9)
                s1[j] = (char) ((sum % b) - 10 + 'A');
            else
                s1[j] = (char) ((sum % b) + '0');
            sum = sum / b;
        }
        for (j = j - 1; j >= 0; j--) {
            cout << s1[j];
        }
        cout << endl;
    }
    return 0;
}

