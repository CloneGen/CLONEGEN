char la (char temp) {
    if (temp >= 'A' && temp <= 'Z')
        return temp;
    else if (temp >= 'a' && temp <= 'z')
        return temp - 'a' + 'A';
    else
        cout << "errer,not ??" << temp << endl;
    return temp;
}

int main () {
    char a [1000];
    cin >> a;
    int length = strlen (a);
    char follow = la (a[0]);
    int same = 1;
    for (int i = 1;
    i < length; i++) {
        if (la (a[i]) == follow) {
            same++;
        }
        else {
            cout << "(" << follow << "," << same << ")";
            same = 1;
            follow = la (a[i]);
        }
    }
    cout << "(" << follow << "," << same << ")";
    return 0;
}

