int main () {
    char num1 [250], num2 [250], num3 [250], t [250];
    int i, j, k, len1, len2;
    cin >> num1;
    cin >> num2;
    len1 = strlen (num1);
    len2 = strlen (num2);
    if (len1 > len2) {
        num3[len1] = '\0';
        for (i = (len1 - 1); i >= (len1 - len2); i--) {
            if (num1[i] + num2[i - (len1 - len2)] < 106) {
                num3[i] = num1[i] + num2[i - (len1 - len2)] - 48;
            }
            else {
                num3[i] = num1[i] + num2[i - (len1 - len2)] - 58;
                num1[i - 1] = num1[i - 1] + 1;
            }
        }
        for (j = (len1 - len2 - 1); j >= 0; j--) {
            if (num1[j] >= 58 && j != 0) {
                num3[j] = num1[j] - 10;
                num1[j - 1] = num1[j - 1] + 1;
            }
            if (num1[j] >= 58 && j == 0) {
                num3[j] = num1[j] - 10;
                cout << "1" << num3 << endl;
                break;
            }
            else if (num1[j] < 58) {
                num3[j] = num1[j];
            }
            if (j == 0 && num1[j] < 58) {
                if (num3[0] == 48) {
                    for (i = 0; i < len1; i++) {
                        num3[i] = num3[i + 1];
                    }
                }
                cout << num3 << endl;
            }
        }
    }
    if (len1 < len2) {
        num3[len2] = '\0';
        for (i = (len2 - 1); i >= (len2 - len1); i--) {
            if (num2[i] + num1[i - (len2 - len1)] < 106) {
                num3[i] = num2[i] + num1[i - (len2 - len1)] - 48;
            }
            else {
                num3[i] = num2[i] + num1[i - (len2 - len1)] - 58;
                num2[i - 1] = num2[i - 1] + 1;
            }
        }
        for (j = (len2 - len1 - 1); j >= 0; j--) {
            if (num2[j] >= 58 && j != 0) {
                num3[j] = num2[j] - 10;
                num2[j - 1] = num2[j - 1] + 1;
            }
            if (num2[j] >= 58 && j == 0) {
                num3[j] = num2[j] - 10;
                cout << "1" << num3 << endl;
                break;
            }
            else if (num2[j] < 58) {
                num3[j] = num2[j];
            }
            if (j == 0) {
                cout << num3 << endl;
            }
        }
    }
    if (len1 == len2) {
        num3[len1] = '\0';
        for (i = len1 - 1; i >= 0; i--) {
            if (i > 0) {
                if (num1[i] + num2[i] < 106) {
                    num3[i] = num1[i] + num2[i] - 48;
                }
                if (num1[i] + num2[i] >= 106) {
                    num3[i] = num1[i] + num2[i] - 58;
                    num1[i - 1] = num1[i - 1] + 1;
                }
            }
            if (i == 0) {
                if (num1[0] + num2[0] >= 106) {
                    num3[0] = num1[0] + num2[0] - 58;
                    cout << "1" << num3 << endl;
                }
                if (num1[0] + num2[0] < 106) {
                    num3[0] = num1[0] + num2[0] - 48;
                    if (num3[0] == 48 && strlen (num3) != 1) {
                        for (k = 0; k < strlen (num3); k++) {
                            num3[k] = num3[k + 1];
                        }
                    }
                    cout << num3 << endl;
                }
            }
        }
    }
    return 0;
}

