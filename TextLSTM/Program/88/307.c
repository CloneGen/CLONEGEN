int main () {
    char s [40];
    cin.getline (s, 40);
    int t = 0;
    char temp [40];
    for (int i = 0;
    i < strlen (s); i++) {
        if (*(s + i) >= '0' && *(s + i) <= '9') {
            t++;
            *(temp + t) = *(s + i);
            if (i == strlen (s) - 1)
                for (int i = 1;
                i <= t; i++)
                    cout << *(temp + i);
            continue;
        }
        else if (t != 0) {
            for (int i = 1;
            i <= t; i++)
                cout << *(temp + i);
            cout << endl;
            t = 0;
        }
    }
    return 0;
}

