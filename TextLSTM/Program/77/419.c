char boy_symbol = 0;

int main () {
    int Match (int p);
    Match (0);
    return 0;
}

int Match (int p) {
    char ch = cin.get ();
    if (boy_symbol == 0)
        boy_symbol = ch;
    if (ch != boy_symbol) {
        return p;
    }
    else {
        int t = Match (p + 1);
        cout << p << " " << t << endl;
        if (p != 0)
            return Match (t + 1);
    }
}

