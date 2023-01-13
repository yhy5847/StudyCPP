//다음 함수 오버로딩이 문제있는 이유

int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void)
{
	return 10;
}

//SimpleFunc() 로 함수를 선언할 때 매개변수가 void형인지 int형으로 디폴트값을 사용해야 하는지 구분이 불가능하다.