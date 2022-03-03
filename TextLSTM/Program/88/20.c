int main () {
    int a;
    while (!cin.eof ()) {
        while (!cin.eof () && !isdigit (cin.peek ()))
            cin.get ();
        if (cin >> a)
            cout << a << endl;
    }
    return 0;
}

