int main () {
    int n;
    cin >> n;
    while (n--) {
        char num1 [101], num2 [101];
        for (int k = 0;
        k != 101; k++)
            num1[k] = num2[k] = '\0';
        cin >> num1 >> num2;
        int len1 = 0, len2 = 0;
        while (num1[len1++] != '\0') {
        }
        while (num2[len2++] != '\0') {
        }
        len1--;
        len2--;
        for (int k = len1 - 1;
        k >= 0; k--) {
            num1[101 + k - len1] = num1[k];
            num1[k] = '\0';
        }
        for (int k = len2 - 1;
        k >= 0; k--) {
            num2[101 + k - len2] = num2[k];
            num2[k] = '\0';
        }
        for (int k = 100;
        num2[k] != '\0'; k--) {
            int temp = num1[k] - num2[k];
            if (temp < 0) {
                num1[k - 1]--;
                num1[k] = 10 + temp + '0';
            }
            else
                num1[k] = temp + '0';
        }
        int k = 0;
        while (num1[k] == '\0' || num1[k] == '0')
            k++;
        for (; k != 101; k++)
            cout << num1[k];
        cout << endl;
    }
    return 0;
}

