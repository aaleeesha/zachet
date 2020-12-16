#include <iostream> 
#include <locale.h> 
#include <iomanip> 
#include <bitset>
#include <fstream>

int main()
{
	setlocale(LC_ALL, "Russian");
	/*
	Пустой проект matrix :
	-транспонирование
	- умножение, сложение, деление со скаляром
	- умножение двух матриц поэлементное
	- умножение двух матриц матричное
	              ЭТО
				   |
	- умножение матрицы на вектор
	               |
	              ЭТО
	- скалярное умножение двух векторов
	- векторное умножение двух векторов
	
	
	
	
	все вектора длиной 3
	все матрицы длиной 3х3
	матрицы и векторы задаются массивами
	для реализации математического действия применить циклы
	все этапы должны иметь поясняющую надпись в консоли
	при выводе в консоль матрицы печать в матричной форме (по строкам и столбцам)
	а векторы печатать как вектор-столбец или вектор-строку
	
	
	
	Задание
	1. Напмсать код для ввода исходных данных(элементы матрицы / вектора) для варианта
	2. Написать код для выполнения матричного действия по варианту
	3. Написать код для печати исходных и итоговых матриц, скаляров и матриц
	

	*/

// Этап 1. Неветвящийся код.

	double matrix[100][100],
		stroka = 0,     
		stolbik = 0;   

	// Ввод размеров матрицы

	std::cout << "Введите количество строк матрицы: ";
	std::cin >> stroka;

	std::cout << "Введите количество столбцов матрицы: ";
	std::cin >> stolbik;

	// Ввод значений матрицы

	for (int ix = 0; ix < stroka; ix++)
		for (int jx = 0; jx < stolbik; jx++)
		{
			std::cout << "matrix[" << (ix + 1) << "][" << (jx + 1) << "] = ";
			std::cin >> matrix[ix][jx];
		}

	// Ввод значений вектора

	int vector[100]; 
	std::cout << "Введите элементы вектора:\n";

	for (int ix = 0; ix < stolbik; ix++)
	{
		std::cout << "vector[" << (ix + 1) << "] = ";
		std::cin >> vector[ix];
	}

	// Печать матрицы

	std::cout << "\nВведенная матрица:\n";
	for (int ix = 0; ix < stroka; ix++)
	{
		for (int jx = 0; jx < stolbik; jx++)
		{
			std::cout  << matrix[ix][jx] << "\t";
		}
		std::cout << std::endl;
	}

	// Печать вектора

	std::cout << "\nВведенный вектор:\n";
	for (int ix = 0; ix < stolbik; ix++)
	{
		std::cout  << vector[ix] << "\t" << std::endl;
	}

	// Перемножение матрицы на вектор

	int vivod[100]; 
	for (int ix = 0; ix < stroka; ix++) 
	{
		vivod[ix] = 0;
		for (int jx = 0; jx < stolbik; jx++) 
		{
			vivod[ix] += matrix[ix][jx] * vector[jx];
			std::cout << vivod[ix] << std::endl;
		}
	}

// Этап  2. Реализация на функциях.

Matrix::Matrix()
	{
		data = nullptr;
		width = 0;
		height = 0;
	}
	Matrix::Matrix(int w, int h)
	{
		data = new double[w * h];
		width = w;
		height = h;
	}
	Matrix::Matrix(const Matrix & m)
	{
		data = new double[m.width * m.height];
		width = m.width;
		height = m.height;
		for (int i = 0; i < width * height; i++)
			data[i] = m.data[i];
	}
	Matrix::Matrix(Matrix && m)
	{
		data = m.data;
		width = m.width;
		height = m.height;
		m.data = nullptr;
		m.width = 0;
		m.height = 0;
	}
	Matrix::~Matrix()
	{
		delete data;
		data = nullptr;
		width = 0;
		height = 0;
	}

	void Matrix::Resize(int w, int h)
	{
		delete[] data;
		data = new double[w * h];
		width = w;
		height = h;
	}

	int Matrix::Width() const
	{
		return width;
	}
	int Matrix::Height() const
	{
		return height;
	}
	double Matrix::Get(int x, int y) const
	{
		return data[y * width + x];
	}
	void Matrix::Set(int x, int y, double v)
	{
		data[y * width + x] = v;
	}

	Matrix& Matrix::operator=(const Matrix & m)
	{
		delete[] data;
		data = new double[m.width * m.height];
		width = m.width;
		height = m.height;
		for (int i = 0; i < width * height; i++)
			data[i] = m.data[i];
		return *this;
	}
	Matrix Matrix::operator*(const Matrix & m) const
	{
		Matrix res(m.width, height);

		for (int x = 0; x < m.width; x++)
		{
			for (int y = 0; y < height; y++)
			{
				res.Set(x, y, 0);
				for (int k = 0; k < width; k++)
				{
					res.Set(x, y, res.Get(x, y) + Get(k, y) * m.Get(x, k));
				}
			}
		}

		return res;
	}

	std::ostream& operator<<(std::ostream & os, const Matrix & m)
	{
		for (int y = 0; y < m.height; y++)
		{
			for (int x = 0; x < m.width; x++)
			{
				os << std::left << std::setprecision(2) << std::setw(5) << m.Get(x, y) << " ";
			}
			os << '\n';
		}
		return os;
	}
	std::istream& operator>>(std::istream & is, Matrix & m)
	{
		int w, h;
		if (is >> w && is >> h)
		{
			m.Resize(w, h);

			for (int y = 0; y < m.height; y++)
			{
				for (int x = 0; x < m.width; x++)
				{
					double v;
					is >> v;
					m.Set(x, y, v);
				}
			}
		}

		return is;
	}

// Этап 3. Реализация на классе.

class Matrix
	{
	private: // Закрытый доступ
		int width, height;
		double* data;

	public: // Общий доступ
		Matrix();
		Matrix(int r, int c);
		Matrix(const Matrix& m);
		Matrix(Matrix&& m);
		~Matrix();

		void Resize(int r, int c); // Вызов функции

		int Width() const;
		int Height() const;
		double Get(int x, int y) const;
		void Set(int x, int y, double v);

		Matrix& operator=(const Matrix& m);
		Matrix operator*(const Matrix& m) const;

		friend std::ostream& operator<<(std::ostream& os, const Matrix& m);
		friend std::istream& operator>>(std::istream& is, Matrix& m);
	};

	std::system("pause"); // вызов функции system() из стандартной библиотеки
	return 0;
}
