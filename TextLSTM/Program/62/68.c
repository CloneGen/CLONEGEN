int main () {
    char ch;
    int flag = 0;
    while ((ch = cin.get ()) != '\n') {
        if (ch != ' ') {
            cout << ch;
            flag = 0;
        }
        else if (flag == 0) {
            cout << ' ';
            flag = 1;
        }
    }
    return 0;
}

