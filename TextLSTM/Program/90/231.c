int way (int app, int bas);

int main () {
    int t, i;
    cin >> t;
    for (i = 0; i < t; i++) {
        int app = 0, bas = 0;
        cin >> app >> bas;
        cout << way (app, bas) << endl;
    }
    return 0;
}

int way (int app, int bas) {
    int count = 0;
    if (app == 1 || bas == 1 || app == 0 && bas > 0 || bas == 0 && app > 0)
        count = 1;
    if (app > 1 && bas > 1) {
        int ap1 = app - bas;
        int ba1 = bas - 1;
        count = way (app, ba1) + way (ap1, bas);
    }
    return count;
}

