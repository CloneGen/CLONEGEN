int main () {
    char s [31];
    cin.getline (s, 31);
    int len = strlen (s);
    int flag = 0;
    for (int i = 0;
    i < len; i++) {
        if (*(s + i) >= '0' && *(s + i) <= '9') {
            cout << *(s + i);
            flag++;
        }
        else if (*(s + i + 1) >= 0 && *(s + i + 1) <= '9' && flag)
            cout << endl;
    }
    return 0;
}

