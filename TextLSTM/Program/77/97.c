char str [200];
int match (int p);
char b;
char g;

int main () {
    cin.getline (str, 100);
    int len, a;
    len = strlen (str);
    b = str[0];
    g = str[len - 1];
    a = match (0);
    return 0;
}

int match (int p) {
    int q;
    if (str[p] == b) {
        q = match (p + 1);
        cout << p << " " << q << endl;
        return match (q + 1);
    }
    else
        return p;
}

