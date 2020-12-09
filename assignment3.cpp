/*Name: Hassona Hassan Balla
 *Class: 2nd
 *Department: Computer Eng.*/
#include <iostream>
#include <cstring>
// using the namespace named std for our variables and functions
using namespace std;
// using structure to record to define grouped list of variables
struct student
// defining our variables */
{
    char name[50];
    char dep[25];
    int roll;
    float mat,avg;
} a[10];
/* telling our function to return some integer at the 
 * end of the execution */
int main() 
{
	// using for loop as a repetition control structure
    for(int i = 0; i < 10; ++i)
    {
		if (i < 10)
		{
			do
			{
				cout << "Enter name: ";
				cin >> a[i].name;
// using do while loop to repeat input process until it is breaked
				cout << "Enter section: ";
				cin >> a[i].dep;
				cout << "Enter University ID number: ";
				cin >> a[i].roll;
				cout << "Material Marks Out Of 800: ";
				cin >> a[i].mat;
				i = i + 1;
				if (i > 9) {
					break;
				}
			} while (i < 5);
			cout << endl;
		}
	}
		// declared our inputs and outputs as you can see
		cout << "\nDisplaying Information: " << endl;
		for(int i = 0; i < 10; ++i)
		{
			cout << "\nName: " << a[i].name << endl;
			/* using if condition to return a specific character 
			* in a specific condition */
			if (strcmp(a[i].dep, "A") == 0) {
			cout << "Section: Control Engineering";
			}
			/* strcmp being used to track entered characters 
			* so that it meets if condition or not */
			else if (strcmp(a[i].dep, "T") == 0) {
			cout << "Section: Telecomunication Engineering";
			}
			else if (strcmp(a[i].dep, "C") == 0) {
			cout << "Section: Computer Engineering";
			}
			else {
				cout << "Section: " << a[i].dep;
			}
			cout << "\nUniversity ID Number: " << a[i].roll << endl;
			// defining avrage and sum for materials
			a[i].avg = a[i].mat / 8;
			// using if condition to bind entered marks with the grade
			if (a[i].avg >= 90 && a[i].avg <= 100) {
			cout << "Your marks are: " << a[i].avg << "\nGrade: A\n";
			}
			// using && to check a number between two ranges
			else if (a[i].avg >= 80 && a[i].avg <= 89) {
			cout << "Your marks are: " << a[i].avg << "\nGrade: B\n";
			}
			else if (a[i].avg >= 70 && a[i].avg <= 79) {
			cout << "Your marks are: " << a[i].avg << "\nGrade: C\n";
			}
			else if (a[i].avg >= 60 && a[i].avg <= 69) {
			cout << "Your marks are: " << a[i].avg << "\nGrade: D\n";
			}
			else if (a[i].avg >= 50 && a[i].avg <= 59) {
			cout << "Your marks are: " << a[i].avg << "\nGrade: F\n";
			}
			else {
				cout << "\nGrade Not Available\n";
			}
		}
/*ending program successfully*/
    return 0;
}
