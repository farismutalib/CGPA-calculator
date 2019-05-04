 
    #include <iostream>
    #include <iomanip>
    #include <fstream>
    #include <limits>

    using namespace std;

    class student
    {
	string name;
	string id;
	int credit[46];
	float pointer[46];
	float gpa[8];
	float totalCredit;
	float cgpa=0;
	float sumTotalCredit;
	float credpoint;
	int sem, currentSub;
	float x;
	float sumCredPoint;
	
	public:
		
	float getTotalCredit()
	{
		return totalCredit;
	}
	
	void setTotalCredit(float t)
	{
		totalCredit=t;
	}
	
	float getSumTotalCredit()
	{
		return sumTotalCredit;
	}
	
	void setSumTotalCredit(float c)
	{
		sumTotalCredit=c;
	}
	
	float CalculateGpa(float i,int k){
		
		return i/k;
	}
	
	float getCredPoint()
	{
		return credpoint;
	}
	
	void setCredPoint(float r)
	{
		credpoint=r;
	}
	float getCurrentSub()
	{
		return currentSub;
	}
	
	void setCurrentSub(int s)
	{
		currentSub=s;
	}
	
	float getSumCredPoint()
	{
		return sumCredPoint;
	}
	
	student(string name,string id)
	{
		this->name=name;
		this->id=id;
	}
	
	string getName()
	{
    	return name;
	}
    	
    string getId()
	{
    	return id;
	} };

    int main()
    {
    	
	system("color 07");
 	cout<<"\n\n\n\tPlease wait while loading ..\n\n";
 	char a=177, b=219;
	cout<<"\t      ";
	for (int i=0;i<=12;i++)
	cout<<a;
	cout<<"\r";
 	cout<<"\t      ";
 	for (int i=0;i<=12;i++)
 	{
	  cout<<b;
	  for (int j=0;j<=1e8;j++);
	}
	
	system("cls");
	
    ofstream myfile;
    myfile.open("Transcript.txt");
	
	int Choice;

    cout<<"\n\t\t       UNIVERSITI TEKNOLOGI MALAYSIA"<<endl;
	cout<<"\t\t    STUDENT'S ACADEMIC TRANSCRIPT (CGPA)"<<endl;
	cout<<"\n\t============================================================"<<endl;
	
	cout<<"\n\tList of our faculties:"<<endl;
	cout<<"\n\t1) Faculty of Enginering"<<endl;
	cout<<"\t2) Faculty of Computing"<<endl;
	cout<<"\t3) Faculty of Social Sciences"<<endl;
	cout<<"\t4) Azman Hashim Business School"<<endl;
	cout<<"\t5) Faculty of Built Environment"<<endl;
	
	cout<<"\n\tPlease enter the number of your faculty: ";
    cin>>Choice;
    
    system("cls");
	
	cout<<"\n\t\t       UNIVERSITI TEKNOLOGI MALAYSIA"<<endl;
	cout<<"\t\t    STUDENT'S ACADEMIC TRANSCRIPT (CGPA)"<<endl;
	cout<<"\n\t============================================================"<<endl;
	
	switch (Choice){
	case 1 :
	cout<<"\n\tFaculty: Faculty of Engineering"<<endl;
	break;

	case 2 :
	cout<<"\n\tFaculty: Faculty of Computing"<<endl;
	break;

	case 3 :
	cout<<"\n\tSubject: Faculty of Social Sciences"<<endl;
	break;

	case 4 :
	cout<<"\n\tFaculty: Azman Hashim Business School"<<endl;
	break;

	case 5 :
	cout<<"\n\tFaculty: Faculty of Built Environment"<<endl; 
	break; }
	
	if (Choice==2){
	
	cout<<"\n\tList of our courses:"<<endl;
	cout<<"\n\t1) SCSJ (Software Engineering)"<<endl;
	cout<<"\t2) SCSR (Computer Network & Security)"<<endl;
	cout<<"\t3) SCSD (Bioinformatics)"<<endl;
	cout<<"\t4) SCSP (Graphics & Multimedia Software)"<<endl;

    cout<<"\n\tPlease enter the number of your course: ";
    cin>>Choice;
    if (Choice !=2) {cout<<"\n\tChoice not valid. Please exit ! xD";
    	return 0;
	}

    system("cls");
    
    myfile<<"\n\t\t       UNIVERSITI TEKNOLOGI MALAYSIA"<<endl;
	myfile<<"\t\t    STUDENT'S ACADEMIC TRANSCRIPT (CGPA)"<<endl;
	myfile<<"\n\t============================================================"<<endl;
	
	cout<<"\n\t\t       UNIVERSITI TEKNOLOGI MALAYSIA"<<endl;
	cout<<"\t\t    STUDENT'S ACADEMIC TRANSCRIPT (CGPA)"<<endl;
	cout<<"\n\t============================================================"<<endl;
	
	myfile<<"\n\tFaculty: Faculty of Computing"<<endl;
	cout<<"\n\tFaculty: Faculty of Computing"<<endl;
	
	myfile<<"\tCourse : SCSR (Computer Network & Security)"<<endl;
    
    switch (Choice){
	case 1 :
	cout<<"\tCourse: SCSJ (Software Engineering)"<<endl;
	break;

	case 2 :
	cout<<"\tCourse: SCSR (Computer Network & Security)"<<endl;
	break;

	case 3 :
	cout<<"\tCourse: SCSD (Bioinformatics)"<<endl;
	break;

	case 4 :
	cout<<"\nCourse: SCSP (Graphics & Multimedia Software)"<<endl;
	break; }  }

	else { cout<<"\n\tSorry ! We're currently working on this. xD"<<endl;
	return 0;
	};

	string* subject=new string[46];
	string studentname;
	string matricid;
	bool bFail;
	
	cin.ignore();
	
	do {
	cout<<"\n\tStudent Name: ";
	
	getline (cin,studentname);
	bFail=cin.fail();
    }  while (bFail==true);
	
	cout<<"\tMatric Number: ";
	cin>>matricid;
	
	student st1(studentname, matricid);
	
	subject[0]="Discrete Structure                            ";
	subject[1]="Programming Technique I                       ";
	subject[2]="Technology & Information Systems              ";
	subject[3]="Digital Logic                                 ";
	subject[4]="Graduate Success Attributes                   ";
	subject[5]="Malaysian Dynamic/ Malaysian Studies          ";
	subject[6]="Islamic & Asian Civilisation                  ";
	subject[7]="Computational Mathematics                     ";
	subject[8]="Programming Technique II                      ";
	subject[9]="Probability & Statistical Data Analysis       ";
	subject[10]="Computer Organisation & Architecture          ";
	subject[11]="Human Computer Interaction                    ";
	subject[12]="Academic English Skills                       ";
	subject[13]="Network Communications (CCNA1)                ";
	subject[14]="Database                                      ";
	subject[15]="System Analysis and Design                    ";
	subject[16]="Data Structure and Algorithm                  ";
	subject[17]="Operating Systems                             ";
	subject[18]="Co-curriculum                                 ";
	subject[19]="Web Programming                               ";
	subject[20]="Object Oriented Programming                   ";
	subject[21]="Software Engineering                          ";
	subject[22]="Computer Networks (CCNA2)                     ";
	subject[23]="Computer Security                             ";
	subject[24]="Advanced Academic English Skills              ";
	subject[25]="Artificial Intelligence                       ";
	subject[26]="Applications Development                      ";
	subject[27]="Inter Networking Technology (CCNA3 & 4)       ";
	subject[28]="Introduction to Cryptography                  ";
	subject[29]="Foreign Language Elective                     ";
	subject[30]="English for Professional Purpose              ";
	subject[31]="Extracurricular Experiential Learning         ";
	subject[32]="Computer Network & Security Project I         ";
	subject[33]="Theory of Computer Science                    ";
	subject[34]="Technopreneurship Seminar 1                   ";
	subject[35]="Introduction to Entrepreneurship              ";
	subject[36]="Elective Courses                              ";
	subject[37]="Elective Courses                              ";
	subject[38]="Elective Courses                              ";
	subject[39]="Industrial Training (HW)                      ";
	subject[40]="Industrial Training Report                    ";
	subject[41]="Computer Network & Security Project 2         ";
	subject[42]="The Thought of Sciences & Technology          ";
	subject[43]="Enrichment of Knowledge Elective              ";
	subject[44]="Elective Courses                              ";
	subject[45]="Elective Courses                              ";
	
	int credit[46];
	float pointer[46];
	float gpa[8];
	float totalCredit;
	float cgpa=0;
	float sumTotalCredit;
	float credpoint;
	int sem, currentSub;
	float x;
	float sumCredPoint;
	cout << "\tCurrent Semester (Now): ";
	cin >> sem;
	
	int k=0;
	
	for(int i=0; i < sem ; i++)
	{
	cout << "\n\n\tNumber of Subjects: ";
	cin >> currentSub;
		
	cout<<"\n\t============================================================"<<endl;
						cout<<"\n\t\t\t\t SEMESTER " << i+1 <<endl;
	cout<<"\n\t============================================================"<<endl;
	cout<<"\tLIST OF SUBJECTS :\t\t       CREDIT HRS:"<<"  POINTER:"<<endl;
	
	myfile<<"\n\t============================================================"<<endl;
						myfile<<"\n\t\t\t\t SEMESTER " << i+1 <<endl;
	myfile<<"\n\t============================================================"<<endl;
	myfile<<"\tLIST OF SUBJECTS :\t\t       CREDIT HRS:"<<"  POINTER:"<<endl;

		for(int j=0; j < currentSub; j++)
		{
			cout << "\t" << subject[k];
			myfile << "\t" << subject[k];

			cin >> credit[k];
			myfile << credit[k];
		    cout<<"\t\t\t\t\t\t\t      ";
		    
		    cin >> pointer[k];
		    myfile <<"\t\t"<<pointer[k]<<endl;
			totalCredit = totalCredit + credit[k];
			st1.setTotalCredit(totalCredit);
			x = (credit[k]*pointer[k]);
			credpoint = credpoint + x;
			k++;	
		}
		
		gpa[i] = st1.CalculateGpa(credpoint,totalCredit);
		sumTotalCredit = sumTotalCredit+totalCredit;
		sumCredPoint = sumCredPoint + credpoint;
		cgpa = sumCredPoint/sumTotalCredit;
		x=0;
		credpoint = 0;
		totalCredit=0;
	
	cout<<"\n\t============================================================"<<endl;
	cout << "\t\t\t\t         GPA = "<< gpa[i]<<" /"<<" CGPA = "<< cgpa << endl;
	
	myfile<<"\n\t============================================================"<<endl;
	myfile<< "\t\t\t\t         GPA = "<< gpa[i]<<" /"<<" CGPA = "<< cgpa << endl;
	
	}
	cout<<"\n\tStudent Name: "<<st1.getName()<<endl;
	cout<<"\tMatric Number: "<<st1.getId()<<endl;
	cout<<"\tThe Final CGPA (Latest): "<< cgpa <<endl;
	
	myfile<<"\n\tStudent Name : "<<st1.getName()<<endl;
	myfile<<"\tMatric Number: "<<st1.getId()<<endl;
	myfile<<"\tThe Final CGPA (Latest): "<< cgpa <<endl;
	
	return 0; }

