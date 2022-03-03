char num2 [110] = {'\0'};

int left (char num [110], int point, int sum, int l) {
    if (point == l) {
        if (num[point] == '(') {
            num2[point] = '$';
            return 0;
        }
        if (num[point] == ')') {
            sum = 1;
            return sum;
        }
        if (num[point] != '(' && num[point] != ')')
            return 0;
    }
    else {
        int k = left (num, point + 1, sum, l);
        if (num[point] == '(' && k == 0) {
            num2[point] = '$';
            return 0;
        }
        if (num[point] == '(' && k != 0) {
            sum = k - 1;
            return sum;
        }
        if (num[point] == ')') {
            sum = k + 1;
            return sum;
        }
        if (num[point] != '(' && num[point] != ')')
            return k;
    }
}

int right (char num [110], int point, int sum, int l) {
    if (point == l) {
        if (num[point] == ')') {
            num2[point] = '?';
            return 0;
        }
        if (num[point] == '(') {
            sum = 1;
            return sum;
        }
        if (num[point] != '(' && num[point] != ')')
            return 0;
    }
    else {
        int k = right (num, point - 1, sum, l);
        if (num[point] == ')' && k == 0) {
            num2[point] = '?';
            return 0;
        }
        if (num[point] == ')' && k != 0) {
            sum = k - 1;
            return sum;
        }
        if (num[point] == '(') {
            sum = k + 1;
            return sum;
        }
        if (num[point] != '(' && num[point] != ')')
            return k;
    }
}

int main () {
    char num [110] = {'\0'};
    while (cin >> num) {
        int l = strlen (num);
        cout << num << endl;
        for (int i = 0;
        i < l; i++)
            num2[i] = ' ';
        num2[l] = '\0';
        left (num, 0, 0, l - 1);
        right (num, l - 1, 0, 0);
        cout << num2 << endl;
    }
    return 0;
}

