int findknot (float, float);

int findknot (float x, float y) {
    if (x == y)
        return (int) x;
    if (ceil (log ((double) x) / log (2)) == ceil (log ((double) y) / log (2)))
        return findknot (floor (x / 2), floor (y / 2));
    else {
        float tempmax = max (x, y);
        float tempmin = min (x, y);
        x = tempmax;
        y = tempmin;
        return findknot (floor (x / 2), y);
    }
}

int main () {
    int inputx, inputy;
    cin >> inputx >> inputy;
    cout << findknot ((float) inputx, (float) inputy);
    return 0;
}

