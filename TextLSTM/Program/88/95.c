int main () {
    char str [31];
    int num, i, p = 0;
    cin.getline (str, 31);
    num = strlen (str);
    for (i = 0; i < num; i++) {
        if ((*(str + i) >= '0') && (*(str + i) <= '9')) {
            if (p > 0) {
                cout << endl;
                p = 0;
            }
            cout << *(str + i);
        }
        else
            p++;
    }
    return 0;
}

