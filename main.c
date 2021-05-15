#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

template<typename T>
class Point
{
private:
        T x;
        T y;
        T z;

public:
    Point(T x, T y, T z)
    {
        this-> x = x;
        this-> y = y;
        this-> z = z;
    }

    int distance(Point otherPoint)
    {
        return (int) sqrt(pow(abs(this->x - otherPoint.x),2) + pow(abs(this->y - otherPoint.y),2)
        + pow(abs(this->z - otherPoint.z),2));
    }

    T getX() const
    {
        return x;
    }

    void setX(T x)
    {
        Point::x = x;
    }

    T getY() const
    {
        return y;
    }

    void setY(T y)
    {
        Point::y = y;
    }

    T getZ() const
    {
        return z;
    }

    void setZ(T z)
    {
        Point::z = z;
    }

    Point operator + (int digit)
    {
        return Point(this-> x + digit, this-> y + digit, this-> z + digit);
    }

    Point operator - (int digit)
    {
        return Point(this-> x - digit, this-> y - digit, this-> z - digit);
    }

    Point operator * (int digit)
    {
        return Point(this-> x * digit, this-> y * digit, this-> z * digit);
    }
};

int main()
{
    int x, y, z;

    cout << "Введите значения точки А" << "\n";
    cout << "x = ";
    cin  >> x;
    cout << "y = ";
    cin  >> y;
    cout << "z = ";
    cin  >> z;

    Point<int> A = Point<int>(x, y, z);

    cout << "Введите значения точки B" << "\n";
    cout << "x = ";
    cin  >> x;
    cout << "y = ";
    cin  >> y;
    cout << "z = ";
    cin  >> z;

    Point<int> B = Point<int>(x, y, z);

    cout << "Расстояние между точками A и B = " << A.distance(B) << "\n";

    cout << "Сложение: "   << endl;
    cout << (B + 5).getX() << " ";
    cout << (B + 5).getY() << " ";
    cout << (B + 5).getZ() << " ";
    cout << "\n\n";

    cout << "Вычитание: "  << endl;
    cout << (B - 5).getX() << " ";
    cout << (B - 5).getY() << " ";
    cout << (B - 5).getZ() << " ";
    cout << "\n\n";

    cout << "Умножение: "   << endl;
    cout << (A * 10).getX() << " ";
    cout << (A * 10).getY() << " ";
    cout << (A * 10).getZ() << " ";

    return 0;
}
