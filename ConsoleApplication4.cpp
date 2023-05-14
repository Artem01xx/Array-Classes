
#include <iostream>
using namespace std;

class Test
{
private:
	int arr[5] = { 11,22,33,44,55 };      // Private Data
	int ArrSize = 5;
	int data[3] = { 11,22,33 };
	int dataSize = 3;
	
public:

	Test()             //Constructor for Arrays
	{
	
		this->dataSize = dataSize;

		for (int i = 0;i < dataSize;i++)
		{
			cout << arr[i] << endl;
		}

		cout << endl;
		this->ArrSize = ArrSize;

		for (int i = 0;i < ArrSize;i++)
		{
			cout << arr[i] << endl;
		}

	}
	
	int& operator [] (int index)     // Surcharge array
	{
		return arr[index];
	}

	bool operator > (const Test& other)   //  Surcharge >
	{
		
		if (this->ArrSize > other.dataSize)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}

	friend void CoutArray(const Test& value ) ;       

	friend void OtherArray(const Test& value);

	friend void Final(const Test& value);
	
};




void CoutArray(const Test &value)          //Function to see adress
{
	for (int i = 0;i < 5;i++)
	{
		cout << value.arr << endl;
	}
	
}

void OtherArray(const Test& value)     // Function to see adress
{
	for (int i = 0;i < 3;i++)
	{
		cout << value.data << endl;
	}

}


void Final(const Test& value)        //Function to see result of >
{
	bool result;
	result = value.ArrSize > value.dataSize;
	cout << result << endl;
}



int main()
{
	Test a;   // See numbers of Array
	
	cout << "\n";
	
	CoutArray(a);              // Cout of first Array
	cout << " _____________________ " << endl;
	OtherArray(a);               // Cout of second Array
	cout << endl;
	cout << " _____________________________ " << endl;

	Final(a);                  // Cout Bool
	
	

	return 0;
}