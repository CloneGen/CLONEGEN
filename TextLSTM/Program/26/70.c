int main () {
    char str [101];
    int i, j, num, a;
    cin.getline (str, 101);
    num = strlen (str);
    for (i = 0; i < num; i++) {
        a = 0;
        if (*(str + i) == ' ') {
            for (j = i; j < num; j++) {
                if (*(str + j) != ' ')
                    break;
                a++;
            }
            for (j = i + 1; j < num; j++)
                *(str + j) = *(str + j + a - 1);
        }
    }
    cout << str << endl;
    return 0;
}

