

#include <stdio.h>

int reverseNum(int num);
int palindrome(int num);
int getNum();
void showResult(int num);

int palindrome(int num)
{
	int rev = reverseNum(num);
	if (rev == num)
		return 1;
	else
		return 0;
}

int getNum()
{
	int num;
	scanf("%d", &num);
	return num;
}

void showResult(int num)
{
	printf("%d ", num);

}

int reverseNum(int num){
	int temp = num;
	int rev = 0;

	while (temp != 0) {
		rev *= 10;
		rev += temp % 10;
		temp /= 10;	
	}
	return rev;
}