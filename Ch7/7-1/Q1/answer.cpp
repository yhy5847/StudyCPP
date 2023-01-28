#include <iostream>
using namespace std;

class Car
{
private:
	int gasolineGauge;
public:
	Car() : gasolineGauge(10)
	{
		cout << "Car클래스 생성자 호출\n";
	}
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car
{
private:
	int electricGauge;
public:
	HybridCar() : electricGauge(20)
	{
		cout << "electricGauge클래스 생성자 호출\n";
	}
	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar() : waterGauge(30)
	{
		cout << "HybridWaterCar클래스 생성자 호출\n";
	}
	void ShowCurrentGauge()
	{
		cout << "잔여 가솔린: " << GetGasGauge() << endl;
		cout << "잔여 전기량: " << GetElecGauge() << endl;
		cout << "잔여 워터량: " << waterGauge << endl;
	}
};

int main(void)
{
	Car car1;
	HybridCar car2;
	HybridWaterCar car3;

	car1.GetGasGauge();
	car2.GetElecGauge();
	car3.ShowCurrentGauge();

}