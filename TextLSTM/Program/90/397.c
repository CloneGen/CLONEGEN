int divide (int ap, int disc) {
    if (ap < 0)
        return 0;
    if (ap == 0 || disc == 1)
        return 1;
    if (disc >= 2)
        return (divide (ap - disc, disc) + divide (ap, disc - 1));
}

int main () {
    int i, n;
    int ap [20], disc [20];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> ap[i] >> disc[i];
        cout << divide (ap[i], disc[i]) << endl;
    }
    return 0;
}

