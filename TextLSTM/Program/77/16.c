int main () {
    char boy, girl, children [102] = {'\0'};
    int sum, i, j;
    cin.getline (children, 101, '\n');
    sum = strlen (children);
    boy = children[0];
    girl = children[sum - 1];
    while (children[sum - 1] != '\0') {
        j = 0;
        while (children[j] != girl && j < sum)
            j++;
        i = j - 1;
        while (children[i] != boy && i >= 0)
            i--;
        children[i] = '\0';
        children[j] = '\0';
        if (j == sum - 1)
            cout << i << " " << j;
        else
            cout << i << " " << j << endl;
    }
    return 0;
}

