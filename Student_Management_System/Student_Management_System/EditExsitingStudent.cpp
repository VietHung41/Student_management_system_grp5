//#include <iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//struct Stu {
//
//	string ID;
//	string Fullname;
//	string Password;
//	string DoB;
//	string Class;
//};
//
//
//void LoadStudent(ifstream& fin, Stu*& a, int& NumofStu) {
//	fin >> NumofStu;
//
//	if (NumofStu == 0) {
//		return;
//	}
//
//	// alocate new array of student
//	a = new Stu[NumofStu];
//
//	fin.ignore();// get rid of the "\n"
//	for (int i = 0; i < NumofStu; i++) {
//		getline(fin, a[i].Fullname);
//		getline(fin, a[i].ID);
//		getline(fin, a[i].Password);
//		getline(fin, a[i].DoB);
//		getline(fin, a[i].Class);
//		fin.ignore();// skip the empty line
//	}
//}
//
//
//void EditExsitingStudent(string ID, Stu*& a, ifstream& fin, int NumofStu) {
//	cout << "Enter student ID: ";
//	getline(cin, ID);
//	int i = 0;
//	while (a[i].ID != ID)
//	{
//		i++;
//		if (i > NumofStu)
//		{
//			break;
//		}
//	}
//	if (i > NumofStu)
//	{
//		cout << "Cant not find student" << endl;
//		EditExsitingStudent(ID, a, fin, NumofStu);
//	}
//	else {
//		cout << "Edit Name of student: ";
//		getline(cin, a[i].Fullname);
//		cout << "Edit ID of student: ";
//		getline(cin, a[i].ID);
//		cout << "Edit Password of student: ";//in case when student forget password so staff can help
//		getline(cin, a[i].Password);
//		cout << "Edit Date of birth of student(YY-MM-DD): ";
//		getline(cin, a[i].DoB);
//	}
//}
//
//void save(ofstream& fout, Stu*& a, int NumofStu)
//{
//	fout << NumofStu << endl;//stream ko cho phep copy
//	for (int i = 0; i < NumofStu; i++)
//	{
//		fout << a[i].Fullname << endl;
//		fout << a[i].ID << endl;
//		fout << a[i].Password << endl;
//		fout << a[i].DoB << endl;
//		fout << endl;
//	}
//
//}
//
//int main()
//{
//	int NumofStu = 0;
//	Stu* a;
//	string ID;
//	ifstream fin;
//	ofstream fout;
//	fin.open("Text.txt");
//
//	if (!fin.is_open()) {
//		cout << "Can not open file" << endl;
//	}
//	else
//	{
//		LoadStudent(fin, a, NumofStu);
//		EditExsitingStudent(ID, a, fin, NumofStu);
//	}
//	fin.close();
//	fout.open("Text.txt");
//	if (!fout.is_open())
//	{
//		cout << "Can not open file" << endl;
//	}
//	else {
//		save(fout, a, NumofStu);
//		fout.close();
//
//	}
//	return 0;
//}