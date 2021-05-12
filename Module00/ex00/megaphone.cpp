#include <iostream>

using std::cout;
using std::endl;

static int is_lowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return (1);
    return (0);
}

int main(int argc, char  **argv)
{
    int i;
    int j;

    if (argc == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else {
        i = 0;
        while (++i < argc) {
            j = -1;
            while (argv[i][++j] != '\0') {
                if (is_lowercase(argv[i][j])) {
                    argv[i][j] = (char)(argv[i][j] - ('a' - 'A'));
                    cout << argv[i][j];
                }
                else
                    cout << argv[i][j];
            }
        }
    }
    cout << endl;
    return (0);
}
