#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    while (true)
    {

        char op;

        cout << "What would you like to Calculate: " << endl;
        cout << "1)SGPA " << endl;
        cout << "2)CGPA " << endl;
        cout << "3)Exit Menu" << endl;
        cin >> op;

        switch (op)
        {
        case '1':
        {
            int cour, hour;
            string grade;
            float totalGradePoints = 0;
            int totalCreditHours = 0;
            float gradePoint;

            cout << "Enter the total Number of Courses: " << endl;
            cin >> cour;

            cout << "Enter Grades for Each Course and the respective Credit Hours for that Course: " << endl;

            for (int i = 0; i < cour; i++)
            {
                cout << "Enter Grade for Course " << i + 1 << ": ";
                cin >> grade;

                if(grade=="A")
                {
                    gradePoint = 4.0;
                }
                else if(grade=="A-")
                {
                    gradePoint = 3.7;
                }
                else if(grade=="B+")
                {
                    gradePoint = 3.3;
                }
                else if(grade=="B")
                {
                    gradePoint = 3.0;
                }
                else if(grade=="B-")
                {
                    gradePoint = 2.7;
                }
                else if(grade=="C+")
                {
                    gradePoint = 2.3;
                }
                else if(grade=="C")
                {
                    gradePoint = 2.0;
                }
                else if(grade=="C-")
                {
                    gradePoint = 1.7;
                }
                else if(grade=="D+")
                {
                    gradePoint = 1.3;
                }
                else if(grade=="D")
                {
                    gradePoint = 1.0;
                }
                else if(grade=="D-")
                {
                    gradePoint = 0.7;
                }
                else if(grade=="F")
                {
                    gradePoint = 0.0;
                }

                cout << "Enter Credit Hours for Course " << i + 1 << ": ";
                cin >> hour;

                totalGradePoints += gradePoint * hour;
                totalCreditHours += hour;
            }

            float sgpa = totalGradePoints / totalCreditHours;

            cout << "Your SGPA for the semester is: " << fixed << setprecision(2) << sgpa << endl;
            break;
        }

        case '2':
        {
            int sem;
            float score;
            float total = 0;

            cout << "Enter total Semesters uptil now: " << endl;
            cin >> sem;

            cout << "Enter SGPA for each Semester: " << endl;

            for (int i = 0; i < sem; i++)
            {
                cout << "Enter for Semester: " << i + 1 << endl;
                cin >> score;
                total = total + score;
            }
            total = total / sem;

            cout << "Your total CGPA after " << sem << " Semesters is: " << total << setprecision(2) << endl;
            break;
        }

        case '3':
        {
            return 0;
            break;
        }

        default:
        {
            cout << "Invalid Input: Try Again!!" << endl;
        }
        }
    }
}
