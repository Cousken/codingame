#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int W; // width of the building.
    int H; // height of the building.
    cin >> W >> H;
    cin.ignore();
    int N; // maximum number of turns before game over.
    cin >> N;
    cin.ignore();
    int X;
    int Y;
    cin >> X >> Y;
    cin.ignore();

    int lowX = 0;
    int highX = W - 1;
    int lowY = 0;
    int highY = H - 1;

    // game loop
    while (1)
    {
        string bombDir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bombDir;
        cin.ignore();
        cerr << bombDir << endl;

        if (bombDir.find('U') != string::npos)
            highY = Y - 1;

        if (bombDir.find('D') != string::npos)
            lowY = Y + 1;

        if (bombDir.find('L') != string::npos)
            highX = X - 1;

        if (bombDir.find('R') != string::npos)
            lowX = X + 1;

        int halfX = (highX - lowX) / 2;
        X = lowX + halfX;

        int halfY = (highY - lowY) / 2;
        Y = lowY + halfY;

        cerr << "Low values " << lowX << " " << lowY << endl;
        cerr << "High values " << highX << " " << highY << endl;
        cerr << "Whole values " << (highX - lowX) << " " << (highY - lowY) << endl;
        cerr << "Half values " << halfX << " " << halfY << endl;
        cerr << "Moving to " << X << " " << Y << endl;

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        // the location of the next window Batman should jump to.
        cout << X << " " << Y << endl;
    }
}