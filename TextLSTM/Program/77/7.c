int a [101] = {0};
int n = 0, i = 0;
char first;

void f () {
    char c;
    c = getchar ();
    if (c != '\n') {
        if (i == 0)
            first = c;
        if (c == first) {
            a[++n] = i++;
            f ();
        }
        else {
            cout << a[n--] << " " << i++ << endl;
            f ();
        }
    }
}

int main () {
    f ();
    return 0;
}

