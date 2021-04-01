using system;
using system.collection.generic;
using system.text;

namespace LatOverloadingMethod
{

	class numbers
	{

		public int FindMinimum(int number1, int number2)
		{
			if(number1 < number2)
			{
				return number1;
			}
			else
			{
				return number2;
			}
		}

		public int FindMinimum(int number1, int number2, float number3)
		{
			if (number1 < number2 && number1 < (int)number3)
			{
				return number1;
			}
			else if (number2 < number1 && number2 < (int)number3)
			{
				return number2;
			}
			else
			{
				return (int) number3;
			}
		}

		public int FindMaximum(int number1, int number2)
		{
			if (number1 > number2)
			{
				return number1;
			}
			else
			{
				return number2;
			}
		}

		public int FindMaximum(int number1, int number2, float number 3)
		{
			if (number1 > number2 && number1(int) number3)
			{
				return number1;
			}
			else
			{
				return number2;
			}
		}

		public int FindMaximum(int number1, int number2, float number3)\
		{
			if (number1 > number2 && number1 > (int)number3)
			{
				return number1;
			}
			else if (number2 > number1 && number2 > (int)number3)
			{
				return number2;
			}
			else
			{
				return (int)number3;
			}
		}
	};
}