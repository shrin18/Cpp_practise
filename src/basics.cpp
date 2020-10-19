#include <iostream>
using namespace std;
#define WIDTH 5
#define HEIGHT 3

int shd[HEIGHT][WIDTH];
int n,m;;

int main()
{
    for (n=0;n<HEIGHT;n++)
    {
        for (m=0;m<WIDTH;m++)
        {
            shd[n][m] = (n+1)*(m+1);
            cout << shd[1][2];
        }
    }
    char myword[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char question[] = "Please enter your first name";
    char yourname[80];
    char greeting[10] = "hello !";

    cin >> yourname;
    cout << question;

    cout << greeting << yourname << "!";    
    return 0;
}