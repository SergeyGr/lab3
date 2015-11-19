#include "sdt.h"

enum Scale
 {
   Celsius,
   Kelvin,
   Fahrenheit
 };

struct Temperature
{
  Temperature(double value, char scale);
  Temperature();
  double value;
  char scale;
};

Temperature convert(Temperature tepm, Scale to);

//��������� �����-������ ��� ���������
istream& operator>>(istream& input, Temperature& temp);
ostream& operator<<(ostream& output, const Temperature& temp);

//��������� �����-������ ��� ������������
istream& operator>>(istream& input, Scale& scale);
ostream& operator<<(ostream& output, const Scale& scale);

//���������� ����������
bool operator>(const Temperature left, const Temperature right);
Temperature operator+(const Temperature& left, const Temperature& right);
Temperature operator+=(Temperature& left, const Temperature& right);
Temperature operator/(Temperature& left, const int division);
Temperature operator/=(Temperature& left, const int division);

//����� 13
Temperature MaxTemp(vector<Temperature> temp);
Temperature MeanTemp(vector<Temperature> temp);
Temperature MinTemp(vector<Temperature> temp);
