int main () {
    char number [102] = {0};
    cin.getline (number, 100, '\n');
    int lg = 0;
    int num = 0;
    int an [100] = {0};
    int left = (number[0] - '0');
    int i = 0, j = 0;
    int count = 0;
    for (i = 1; number[i] != 0; i++) {
        lg = left * 10 + (number[i] - '0');
        an[j++] = lg / 13;
        left = lg % 13;
        count++;
    }
    if (count == 0 || (number[0] == '1' && number[1] < '3' && number[2] == '\0'))
        cout << "0" << endl;
    else {
        if (an[0] != 0)
            cout << an[0];
        for (i = 1; i < count; i++)
            cout << an[i];
        cout << endl;
    }
    cout << left << endl;
    return 0;
}

