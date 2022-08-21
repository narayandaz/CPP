#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int Grade,
		ACounter = 0,
		BCounter = 0,
		CCounter = 0,
		DCounter = 0,
		FCounter = 0;
	cout << "Enter Letter Grades (A, B, C, D, or F) and Press EOF (Ctrl+Z) or (Ctrl+D) to finish. " << endl;

	while ((Grade = cin.get()) != EOF)
	{
		switch (Grade)
		{
			case 'a' :
			case 'A' :
				ACounter++;
				break;
			case 'b' :
			case 'B' :
				BCounter++;
				break;
			case 'c' :
			case 'C' :
				CCounter++;
				break;
			case 'd' :
			case 'D' :
				DCounter++;
				break;
			case 'f' :
			case 'F' :
				FCounter++;
				break;
			case '\n':  
			case '\t':  
			case ' ' :  
				break;  
			default :
				cout << "Wrong Entry." << endl;
				break;  
		}
	}

	cout << endl << endl;
	cout << setw(7) << setiosflags(ios::left) << "Total" << setw(7) << "A" << setw(7) << "B" << setw(7) << "C" << setw(7) << "D" << setw(7) << "F" << endl;
	cout << setw(7) << (ACounter + BCounter + CCounter + DCounter + FCounter) << setw(7) << ACounter << setw(7) << BCounter << setw(7) << CCounter << setw(7) << DCounter << setw(7) << FCounter << endl;
	
	return 0;
}
