int main () {
    char str [31], *p, *q;
    int sum;
    cin.getline (str, 31);
    for (q = str; *q != '\0'; q++) {
        sum = 0;
        if (*q >= '0' && *q <= '9') {
            sum += *q - '0';
            for (p = q + 1; *p <= '9' && *p >= '0'; p++)
                sum = sum * 10 + *p - '0';
            cout << sum << endl;
            if (*p == '\0')
                break;
            q = p;
        }
    }
    return 0;
}

