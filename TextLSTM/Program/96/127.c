int main () {
    char number [101], result [101];
    int i, remain = 0, digit;
    cin >> number;
    digit = strlen (number);
    for (i = 0; i < digit; i++) {
        result[i] = ((remain * 10 + (number[i] - '0')) / 13) + '0';
        remain = (remain * 10 + (number[i] - '0')) % 13;
    }
    result[i] = '\0';
    for (i = 0; result[i] == '0' && i < strlen (result) - 1;)
        i++;
    cout << result + i << endl;
    cout << remain << endl;
    return 0;
}

