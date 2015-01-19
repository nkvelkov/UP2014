
bool isSecondPower(int n)
{
	if (n == 1) return true;
	if (n % 2 == 1) return false;
	return isSecondPower(n / 2);
}
