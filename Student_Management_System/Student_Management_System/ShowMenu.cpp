#include "Declarations.h"
int mainmenu(int& choice1)
{
	cout << "\n-----MENU------\n";
	cout << "0.Return\n1.Login\n\nWhat is your option?\n";
	cin >> choice1;
	return choice1;
}

int MenuStudent(int& choice2)
{
	cout << "\n-----MENU------\n";
	cout << "0.Quay Ve\n1.Attendance\n2.Xem Thoi Khoa Bieu\n3.Xem Diem\n4.Xem Bai Tap\n5.Change Password\n";
	cin >> choice2;
	return choice2;
}
int MenuStaff(int& choice2)
{
	cout << "\n-----MENU------\n";
	cout << " 0.Return\n1.Manully Add Student to a class\n2.Edit an existing student\n3.Remove a student\n4.Change Student's Class\n5.View list of classes\n6.View list of students in a class\n7.Change Password\n";
	cin >> choice2;
	return choice2;
}

int MenuLecturer(int& choice2)
{
	cout << "\n-----MENU------\n";
	cout << " 0.Return\n1.Manully Add Student to a class\n2.Remove a student\3.Change Student's Class\n4.Change Password\n";
	cin >> choice2;
	return choice2;
}


void showmenu(int& choice1, int& choice2, string& Position, string& username, string& password)
{
	if (choice1 == 0) 
		mainmenu(choice1);
	if (choice1 == 1)
	{
		if (Position == "-1")
			Position = Login(username, password);

		while (Position == "-1") {// can't find in the whole data base
			cout << "username or password is incorect" << endl;
			showmenu(choice1, choice2, Position, username, password);
		}

		/******DEMO on Student type********/
		if (Position == "Student")
		{
			MenuStudent(choice2);
			if (choice2 == 5)
				if (ChangePass("Student.txt", username, password)) {
					cout << "password changed successfull" << endl;
					showmenu(choice1, choice2, Position, username, password);
				}
				else {
					cout << "change password fail" << endl;
				}

			while (choice2 == 0 && choice1 == 1)
			{
				choice1 = 0;
				Position = "-1";// logout
				showmenu(choice1, choice2, Position, username, password);
			}
		}
		/******DEMO on Student type********/

		/*if (choice1 == 1)
			if (Position == "Staff")
			{
				MenuStaff(choice2);
				while (choice2 == 0 && choice1 == 1)
				{
					showmenu(choice1, choice2, Position);
				}
			}
		if (choice1 == 1)
		{
			if (Position == "Lecturer")
			{
				MenuLecturer(choice2);
				while (choice2 == 0 && choice1 == 1)
				{
					showmenu(choice1, choice2, Position);
				}
			}
		}*/
	}
}