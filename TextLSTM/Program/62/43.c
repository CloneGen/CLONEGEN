char str [101];

void function (char *q, int flag) {
    if (!*q) {
        return;
    }
    if (*q != ' ') {
        cout << *q;
        flag = 1;
    }
    else if (flag) {
        cout << " ";
        flag = 0;
    }
    return function (q + 1, flag);
}

int main () {
    cin.getline (str, 100);
    function (str, 0);
    return 0;
}

