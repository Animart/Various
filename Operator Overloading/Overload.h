//Overload.h -- определение класса Point 
#ifndef OVERLOAD_H_ 
#define OVERLOAD_H_
#include <iostream>

//-------------------------------------------------------------------------------------------------
class Point
{
private:
	int x;
	int y;
	int z;
public:
	Point() { x = 0; y = 0; z = 0; }
	Point(int x, int y, int z) : x(x), y(y), z(z) {};
	
	//Перегрузка арифметических операторов.
	friend Point operator + (const Point & p);
	friend Point operator - (const Point & p);
	friend Point operator + (const Point & left, const Point & right);
	friend Point operator - (const Point & left, const Point & right);
	friend Point operator * (const Point & left, const Point & right);
	friend Point operator / (const Point & left, const Point & right);
	friend Point operator % (const Point & left, const Point & right);
	
	//Перегрузка операторов инкримента и декремента
	friend Point & operator ++ (Point & p);
	friend Point & operator -- (Point & p);
	friend Point operator ++ (Point & p, int);
	friend Point operator -- (Point & p, int);

	//перегрузка операторов сравнения
	friend bool operator == (const Point & left, const Point & right);
	friend bool operator != (const Point & left, const Point & right);
	friend bool operator > (const Point & left, const Point & right);
	friend bool operator < (const Point & left, const Point & right);
	friend bool operator >= (const Point & left, const Point & right);
	friend bool operator <= (const Point & left, const Point & right);
	//friend bool operator <=> (const Point & left, const Point & right); C++ 20 Coming

	//перегрузка логических операторов
	friend bool operator ! (const Point & v);
	friend bool operator && (const Point & left, const Point & right);
	friend bool operator || (const Point & left, const Point & right);

	//Перегрузка побитовых операторов
	friend Point operator ~ (const Point & v);
	friend Point operator & (const Point & left, const Point & right);
	friend Point operator | (const Point & left, const Point & right);
	friend Point operator ^ (const Point & left, const Point & right);
	friend std::istream & operator >> (std::istream & is, Point & p);
	friend std::ostream & operator << (std::ostream & os, Point & p);

	//Перегрузка операторов составного присваивания
	Point & operator = (const Point & p);
	friend Point & operator += (Point & left, const Point & right);
	friend Point & operator -= (Point & left, const Point & right);
	friend Point & operator *= (Point & left, const Point & right);
	friend Point & operator /= (Point & left, const Point & right);
	friend Point & operator %= (Point & left, const Point & right);
	friend Point & operator &= (Point & left, const Point & right);
	friend Point & operator |= (Point & left, const Point & right);
	friend Point & operator ^= (Point & left, const Point & right);
	friend std::istream & operator >>= (std::istream & is, Point & p);
	friend std::ostream & operator <<= (std::ostream & os, Point & p);
	
	//Перегрузка операторов работы с указателями и членами класса
	int operator [] (int p);
	//int & operator*();
	//int* operator&();
	//int* operator->();
	//int & operator->*(int p);

	//Преобразование в другой тип
	operator bool() const;
};
//-------------------------------------------------------------------------------------------------
#endif // OVERLOAD_H_