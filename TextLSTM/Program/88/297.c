int main () {
    char *p, a [31];
    cin.getline (a, 31);
    for (p = a; p - a < 31; p++) {
        if (*p >= '0' && *p <= '9')
            cout << *p;
        else if (*(p + 1) >= '0' && *(p + 1) <= '9')
            cout << endl;
    }
}

