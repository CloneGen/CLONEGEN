int main () {
    char str [31], *p;
    p = str;
    cin.getline (str, 31);
    for (int j = 0;
    *(p + j) != '\0'; j++) {
        if (*(p + j) >= 48 && *(p + j) <= 57)
            cout << *(p + j);
        else if ((*(p + j - 1) >= 48 && *(p + j - 1) <= 57) && !(*(p + j) >= 48 && *(p + j) <= 57))
            cout << endl;
    }
    return 0;
}

