int main () {
    int i, j, num;
    char str [100];
    cin.get (str, 100);
    num = 100;
    for (i = 0; i < num; i++) {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            for (j = i + 1; j < num; j++) {
                str[j] = str[j + 1];
            }
            num--;
            i--;
        }
    }
    cout << str << endl;
    return 0;
}

