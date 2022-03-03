int n = 0;
char ch;

void fun (int left) {
    ch = getchar ();
    n++;
    while ((ch == '(') || (ch == '{') || (ch == '[') || (ch == '<')) {
        fun (n);
        ch = getchar ();
        n++;
    }
    cout << left << ' ' << n << endl;
}

int main () {
    ch = getchar ();
    fun (n);
    return 0;
}

