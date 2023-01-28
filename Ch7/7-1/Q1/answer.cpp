#include <iostream>
using namespace std;

class Car
{
private:
	int gasolineGauge;
public:
	Car() : gasolineGauge(10)
	{
		cout << "CarŬ���� ������ ȣ��\n";
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
		cout << "electricGaugeŬ���� ������ ȣ��\n";
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
		cout << "HybridWaterCarŬ���� ������ ȣ��\n";
	}
	void ShowCurrentGauge()
	{
		cout << "�ܿ� ���ָ�: " << GetGasGauge() << endl;
		cout << "�ܿ� ���ⷮ: " << GetElecGauge() << endl;
		cout << "�ܿ� ���ͷ�: " << waterGauge << endl;
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