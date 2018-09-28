//Перегрузка операторов.
#include "Overload.h"

//***Арифметические операторы***
//-------------------------------------------------------------------------------------------------
Point operator + (const Point & p)
{
	return Point(p.x, p.y, p.z);
}
//-------------------------------------------------------------------------------------------------
Point operator - (const Point & p)
{
	return Point(-p.x, -p.y, -p.z);
}
//-------------------------------------------------------------------------------------------------
Point operator + (const Point & left, const Point & right)
{
	return Point(left.x + right.x, left.y + right.y, left.z + right.z);
}
//-------------------------------------------------------------------------------------------------
Point operator - (const Point & left, const Point & right)
{
	return Point(left.x - right.x, left.y - right.y, left.z - right.z);
}
//-------------------------------------------------------------------------------------------------
Point operator * (const Point & left, const Point & right)
{
	return Point(left.x * right.x, left.y * right.y, left.z * right.z);
}
//-------------------------------------------------------------------------------------------------
Point operator / (const Point & left, const Point & right)
{
	return Point(left.x / right.x, left.y / right.y, left.z / right.z);
}
//-------------------------------------------------------------------------------------------------
Point operator % (const Point & left, const Point & right)
{
	return Point(left.x % right.x, left.y % right.y, left.z % right.z);
}
//-------------------------------------------------------------------------------------------------

//***Операторы инкремента и декремента***
//-------------------------------------------------------------------------------------------------
Point & operator ++ (Point & p)
{
	p.x++;
	p.z++;
	p.y++;
	return p;
}
//-------------------------------------------------------------------------------------------------
Point operator ++ (Point & p, int)
{
	Point old_value(p.x, p.y, p.z);
	p.x++;
	p.y++;
	p.z++;
	return old_value;
}
//-------------------------------------------------------------------------------------------------
Point & operator -- (Point & p)
{
	p.x--;
	p.z--;
	p.y--;
	return p;
}
//-------------------------------------------------------------------------------------------------
Point operator -- (Point & p, int)
{
	Point old_value(p.x, p.y, p.z);
	p.x--;
	p.y--;
	p.z--;
	return old_value;
}
//-------------------------------------------------------------------------------------------------

//***Операторы сравнения***
//-------------------------------------------------------------------------------------------------
bool operator == (const Point & left, const Point & right)
{
	return (left.x == right.x) && (left.y == right.y) && (left.z == right.z);
}
//-------------------------------------------------------------------------------------------------
bool operator != (const Point & left, const Point & right)
{
	return !(left.x == right.x) && !(left.y == right.y) && !(left.z == right.z);
}
//-------------------------------------------------------------------------------------------------
bool operator > (const Point & left, const Point & right)
{
	return (left.x > right.x) && (left.y > right.y) && (left.z > right.z);
}
//-------------------------------------------------------------------------------------------------
bool operator < (const Point & left, const Point & right)
{
	return (left.x < right.x) && (left.y < right.y) && (left.z < right.z);
}
//-------------------------------------------------------------------------------------------------
bool operator >= (const Point & left, const Point & right)
{
	return !(left.x < right.x) && !(left.y < right.y) && !(left.z < right.z);
}
//-------------------------------------------------------------------------------------------------
bool operator <= (const Point & left, const Point & right)
{
	return !(left.x > right.x) && !(left.y > right.y) && !(left.z > right.z);
}
//-------------------------------------------------------------------------------------------------

//***Логические операторы***
//-------------------------------------------------------------------------------------------------
bool operator ! (const Point & p)
{
	return !(bool)p;
}
//-------------------------------------------------------------------------------------------------
bool operator && (const Point & left, const Point & right)
{
	return (bool)left && (bool)right;
}
//-------------------------------------------------------------------------------------------------
bool operator || (const Point & left, const Point & right)
{
	return (bool)left || (bool)right;
}

//***Побитовые операторы***
//-------------------------------------------------------------------------------------------------
Point operator ~ (const Point & v)
{
	return Point(~(v.x), ~(v.y), ~(v.z));
}
//-------------------------------------------------------------------------------------------------
Point operator & (const Point & left, const Point & right)
{
	return Point(left.x & right.x, left.y & right.y, left.z & right.z);
}
//-------------------------------------------------------------------------------------------------
Point operator | (const Point & left, const Point & right)
{
	return Point(left.x | right.x, left.y | right.y, left.z | right.z);
}
//-------------------------------------------------------------------------------------------------
Point operator ^ (const Point & left, const Point & right)
{
	return Point(left.x ^ right.x, left.y ^ right.y, left.z ^ right.z);
}
//-------------------------------------------------------------------------------------------------
std::istream & operator >> (std::istream & is, Point & p)
{
	std::cout << "Введите Point.\nX:";
	std::cin >> p.x;
	std::cout << "\nY:";
	std::cin >> p.y;
	std::cout << "\nZ:";
	std::cin >> p.z;
	std::cout << std::endl;
	return is;
}
//-------------------------------------------------------------------------------------------------
std::ostream  & operator << (std::ostream & os, Point & p)
{
	os << '(' << p.x << ", " << p.y << ", " << p.z << ')';
	return os;
}
//-------------------------------------------------------------------------------------------------

//***Составное присваивание***
//-------------------------------------------------------------------------------------------------
Point & Point::operator = (const Point & p)
{
	this->x = p.x, this->y = p.y, this->z = p.z;
	return *this;
}
//-------------------------------------------------------------------------------------------------
Point & operator += (Point & left, const Point & right)
{
	left.x += right.x, left.y += right.y, left.z += right.z;
	return left;
}
//-------------------------------------------------------------------------------------------------
Point & operator -= (Point & left, const Point & right)
{
	left.x -= right.x, left.y -= right.y, left.z -= right.z;
	return left;
}
//-------------------------------------------------------------------------------------------------
Point & operator *= (Point & left, const Point & right)
{
	left.x *= right.x, left.y *= right.y, left.z *= right.z;
	return left;
}
//-------------------------------------------------------------------------------------------------
Point & operator /= (Point & left, const Point & right)
{
	left.x /= right.x, left.y /= right.y, left.z /= right.z;
	return left;
}
//-------------------------------------------------------------------------------------------------
Point & operator %= (Point & left, const Point & right)
{
	left.x %= right.x, left.y %= right.y, left.z %= right.z;
	return left;
}
//-------------------------------------------------------------------------------------------------
Point & operator &= (Point & left, const Point & right)
{
	left.x &= right.x, left.y &= right.y, left.z &= right.z;
	return left;
}
//-------------------------------------------------------------------------------------------------
Point & operator |= (Point & left, const Point & right)
{
	left.x |= right.x, left.y |= right.y, left.z |= right.z;
	return left;
}
//-------------------------------------------------------------------------------------------------
Point & operator ^= (Point & left, const Point & right)
{
	left.x ^= right.x, left.y ^= right.y, left.z ^= right.z;
	return left;
}
//-------------------------------------------------------------------------------------------------
std::istream & operator >>= (std::istream & is, Point & p)
{
	std::cout << "Введите Point.\nX:";
	std::cin >> p.x;
	std::cout << "\nY:";
	std::cin >> p.y;
	std::cout << "\nZ:";
	std::cin >> p.z;
	std::cout << std::endl;
	return is;
}
//-------------------------------------------------------------------------------------------------
std::ostream & operator <<= (std::ostream & os, Point & p)
{
	os.clear();
	os << '(' << p.x << ", " << p.y << ", " << p.z << ')';
	return os;
}
//-------------------------------------------------------------------------------------------------
Point::operator bool() const
{
	if (*this != Point(0, 0, 0))
		return true;
	return false;
}
//-------------------------------------------------------------------------------------------------

//***Перегрузка операторов работы с указателями и членами класса***
//-------------------------------------------------------------------------------------------------
int Point::operator [] (int p)
{
	try
	{
		if (p < 3)
		{
			if (p == 0)
				return this->x;
			if (p == 1)
				return this->y;
			if (p == 2)
				return this->z;
		}
		else
			throw "Ошибка: Выход за пределы размерности вектора";
	}
	catch (const char *str)
	{
		std::cerr << str << std::endl;
	}
	return NULL;
}
//-------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "Rus");

	Point v1(10,20,30);
	Point v2(5,10,15);
	Point v3;
	bool Result;

	//Арифметические операторы
	std::cout << "Арифметические операторы" << std::endl;
	v3 = v1 + v2;
	std::cout << "Перегрузка оператора + (v1 + v2) " << v3 << std::endl;
	v3 = v1 - v2;
	std::cout << "Перегрузка оператора - (v1 - v2) " << v3 << std::endl;
	v3 = v1 * v2;
	std::cout << "Перегрузка оператора * (v1 * v2) " << v3 << std::endl;
	v3 = v1 / v2;
	std::cout << "Перегрузка оператора / (v1 / v2) " << v3 << std::endl;
	v1 = Point(8, 7, 2);
	v2 = Point(4, 4, 4);
	v3 = v1 % v2;
	std::cout << "Перегрузка оператора % (v1 % v2) " << v3 << std::endl;
	v3 = -v1;
	std::cout << "Перегрузка оператора унарный - (-v1) " << v3 << std::endl;
	v3 = +v1;
	std::cout << "Перегрузка оператора унарный + (v1) " << v3 << std::endl;

	//Операторы инкремента и декремента
	v1 = Point(10, 20, 30);
	v2 = Point(5, 10, 15);
	std::cout << "\nОператоры инкремент и декремента" << std::endl;
	v3 = ++v1;
	std::cout << "Перегрузка оператора префиксный инкремент ++v1 " << v3 << std::endl;
	v3 = v1++;
	std::cout << "Перегрузка оператора постфиксный инкремент v1++ " << v3 << std::endl;
	v3 = --v1;
	std::cout << "Перегрузка оператора префиксный декремент --v1 " << v3 << std::endl;
	v3 = v1--;
	std::cout << "Перегрузка оператора постфиксный декремент v1-- " << v3 << std::endl;

	//Операторы сравнения
	v1 = Point(10, 20, 30);
	v2 = Point(5, 10, 15);
	std::cout << "\nОператоры сравнения" << std::endl;
	v3 = v2;
	std::cout << "Перегрузка оператора = " << v3 << std::endl;
	Result = v1 == v2;
	std::cout << std::boolalpha << "Перегрузка оператора == (v1 == v2) " << Result << std::endl;
	Result = v1 != v2;
	std::cout << std::boolalpha << "Перегрузка оператора != (v1 != v2) " << Result << std::endl;
	Result = v1 > v2;
	std::cout << std::boolalpha << "Перегрузка оператора > (v1 > v2) " << Result << std::endl;
	Result = v1 < v2;
	std::cout << std::boolalpha << "Перегрузка оператора < (v1 < v2) " << Result << std::endl;
	Result = v1 >= v2;
	std::cout << std::boolalpha << "Перегрузка оператора >= (v1 >= v2) " << Result << std::endl;
	Result = v1 <= v2;
	std::cout << std::boolalpha << "Перегрузка оператора <= (v1 <= v2) " << Result << std::endl;

	//Логические операторы
	std::cout << "\nЛогические операторы" << std::endl;
	v1 = Point(10, 20, 30);
	v2 = Point(5, 10, 15);
	Result = !v1;
	std::cout << std::boolalpha << "Перегрузка оператора ! (!v1) " << Result << std::endl;
	Result = (v1 && v2);
	std::cout << std::boolalpha << "Перегрузка оператора && (v1 && v2) " << Result << std::endl;
	Result = (v1 || v2);
	std::cout << std::boolalpha << "Перегрузка оператора || (v1 || v2) " << Result << std::endl;
	
	//Побитовые операторы
	std::cout << "\nПобитовые операторы" << std::endl;
	v1 = Point(10, 20, 30);
	v2 = Point(5, 10, 15);
	v3 = Point(0, 0, 0);

	v3 = ~v1;
	std::cout << "Перегрузка оператора ~ (~v1) " << v3 << std::endl;
	v3 = (v2 & v1);
	std::cout << "Перегрузка оператора & (v2 & v1) " << v3 << std::endl;
	v3 = (v2 | v1);
	std::cout << "Перегрузка оператора | (v2 | v1) " << v3 << std::endl;
	v3 = (v2 ^ v1);
	std::cout << "Перегрузка оператора ^ (v2 ^ v1) " << v3 << std::endl;

	//Составное присваивание
	v1 = Point(10, 20, 30);
	v2 = Point(5, 10, 15);
	v3 = Point(100, 100, 100);
	 
	std::cout << "\nСоставные операторы" << std::endl;
	v3 += v1;
	std::cout << "Перегрузка оператора += (v3 += v1) " << v3 << std::endl;
	v3 -= v1;
	std::cout << "Перегрузка оператора -= (v3 -= v1) " << v3 << std::endl;
	v3 *= v1;
	std::cout << "Перегрузка оператора *= (v3 *= v1) " << v3 << std::endl;
	v3 /= v1;
	std::cout << "Перегрузка оператора /= (v3 /= v1) " << v3 << std::endl;
	v3 = Point(8, 7, 2);
	v1 = Point(4, 4, 4);
	v3 %= v1;
	std::cout << "Перегрузка оператора %= (v3 %= v1) " << v3 << std::endl;
	v1 = Point(10, 20, 30);
	v2 = Point(5, 10, 15);
	v3 = Point(100, 100, 100);
	v3 &= v1;
	std::cout << "Перегрузка оператора &= (v3 &= v1) " << v3 << std::endl;
	v3 |= v1;
	std::cout << "Перегрузка оператора |= (v3 |= v1) " << v3 << std::endl;
	v3 ^= v1;
	std::cout << "Перегрузка оператора ^= (v3 ^= v1) " << v3 << std::endl;

	system("pause");
	return 0;
}
//-------------------------------------------------------------------------------------------------

/*

*/