int main () {
    char str [31];
    int num, i, j, p = 0;
    cin.getline (str, 31);
    num = strlen (str);
    for (j = 0; j < num; j++) {
        if ((*(str + j) >= '0') && (*(str + j) <= '9'))
            break;
    }
    for (i = j; i < num; i++) {
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
    cout << endl;
    return 0;
}

