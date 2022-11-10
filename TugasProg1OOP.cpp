#include <unistd.h>
#include <iostream>
#include <cstdlib>
using namespace std;

class Kecepatan
{
    public:
    int vx, vy, vtheta;
};
class Posisi
{
    public:
    int x, y, theta;
};

int main()
{
    Kecepatan awal_robot;
    awal_robot.vx = 2;
    awal_robot.vy = 4;
    awal_robot.vtheta = 5;

    Posisi robot;
    cin >> robot.x;
    cin >> robot.y;
    robot.theta = 0;

    while ((robot.theta) !=1000)
    {
        robot.x += awal_robot.vx;
        robot.y += awal_robot.vy;
        robot.theta += awal_robot.vtheta;
        cout << "x = " << robot.x << endl;
        cout << "y = " << robot.y << endl;
        if (robot.theta > 180 && robot.theta <= 360)
        {
            robot.theta -= 360;
        }
        cout << "theta = " << robot.theta << endl << endl;
        if (robot.theta ==0)
        {
            robot.theta = 1000;
        }
        usleep(1000000);
    }
    return 0;
}