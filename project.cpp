//STUDENT'S Assistant
#include <bits/stdc++.h>
#include <windows.h>//for sleep
#include <unistd.h>//for sleep
#include <cstdlib>//for system pause

using namespace std;

void welcome_screen();
void student_sign_up();
void student_login();
void admin_login();
void adminmenu();
void studentmenu();
void studentportal(string str);
void adminportal();
void display_sub_ece();
void display_sub_cse();
void add_details();
class student;
class subject;
void view_details();
void search_details();
void delete_details();
void student_details(string str);
void faq();
void add_attendance();
void list_attendance_ece();
void list_attendance_cse();
void view_attendance(string str);
void dots();
void add_result();
void list_result();
void view_result(string str);


int main()
{

    system("color 70");//setting the color of background 7=black of console and text 0= white
    welcome_screen();

    cout << endl;

    return 0;
}


void welcome_screen()
{
    system("cls");
    cout << "\t\t\t\t\t==================================" << endl;
    cout << "\t\t\t\t\t=======STUDENT'S ASSISTANT========" << endl;
    cout << "\t\t\t\t\t==================================" << endl;


    cout << "\n\t\t\t\t\t Login As : ";
    cout << "\n\n\n\t\t\t\t\t 1. Admin ";
    cout << "\n\n\t\t\t\t\t 2. Student";
    cout << "\n\n\t\t\t\t\t 3. Exit";
    cout << "\n\n\n\t\t\t\t\t Enter your choice : ";


    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        adminmenu();
        break;


    case 2:
        system("cls");
        studentmenu();
        //studentFunction();
        break;


    case 3:
        system("cls");
        cout << "\t\t\n\n\n\n\n\n\n\t\t\t\t\tQuitting The Program";
        dots();
        exit(0);
        break;


    default:
        cout << "\n\n\t\t\t\t\t INVALID INPUT";
        cout << "\n\n\t\t\t\t\t Try again in 3 seconds";
        dots();
        welcome_screen();
        break;
    }


}


void adminmenu()
{
    system("cls");
    int ch;
    cout << "\n\t\t\t\t\t==================================" << endl;
    cout << "n\t\t\t\t\tWELCOME ADMIN! : ";
    cout << "\n\t\t\t\t\t==================================" << endl;
    cout << "\n\n\n\t\t\t\t\t 1. Log in ";
    cout << "\n\n\n\t\t\t\t\t 2. Back ";


    cout << "\n\n\n\t\t\t\t\t ENTER YOUR CHOICE ";
    cin>>ch;


    if (ch==1)
        admin_login();

    else if (ch==2)
        welcome_screen();

    else
       { cout<<"\t\t\t\tINVALID INPUT.";
        cout<<"\t\t\t\tTry again in 3 seconds.";
        dots();
        adminmenu();}
}


void admin_login()
{
    system("cls");
    cout << "\n\n\n\n\t\t\t\t\t\t=============================" << endl;
    cout << "\t\t\t\t\t\t\tLOGIN AS ADMIN" << endl;
    cout << "\t\t\t\t\t\t=============================" << endl;
    string username, password;
    string stored_user_1 = "Aman";
    string stored_user_2 = "Ayushi";


    string stored_pass_1 = "Aman123";
    string stored_pass_2 = "Ayushi123";


    cout << "\n\n\n\t\t\t\t\t Enter username: ";
    cin >> username;


    cout << "\n\n\n\t\t\t\t\t Enter password: ";
    cin >> password;


    if(username==stored_user_1  && password==stored_pass_1)
    {
        cout << "\n\n\n\t\t\t\t\t Login Successful!" << endl;
        sleep(2);
        adminportal();
    }
    else if (username==stored_user_2 && password==stored_pass_2)
    {
        cout << "\n\n\n\t\t\t\t\t Login Successful!" << endl;
        sleep(2);
        adminportal();
    }
    else
    {
        cout << "\n\n\n\t\t\t\t\t Login failed!";

        cout << "\n\n\n\t\t\t\t\t Try again in 3 seconds!";
        dots();
        adminmenu();
    }
}
void studentmenu()
{
    system("cls");
    int ch;
    cout << "\n\t\t\t\t\t====================================" << endl;
    cout << "\t\t\t\t\t\t WELCOME STUDENT! ";
    cout << "\n\t\t\t\t\t====================================" << endl;
    cout << "\n\n\n\t\t\t\t\t 1. Log in ";
    cout << "\n\n\n\t\t\t\t\t 2. Sign up ";
    cout << "\n\n\n\t\t\t\t\t 3. Back ";


    cout << "\n\n\n\t\t\t\t\t ENTER YOUR CHOICE: ";
    cin>>ch;
    if (ch==1)
        student_login();

    else if(ch==2)
        student_sign_up();


    else if(ch==3)
        welcome_screen();

    else
        {cout<<"\t\t\t\tINVALID INPUT.";
        cout<<"\t\t\t\tTry again in 3 seconds.";
        dots();
        studentmenu();}

}


void student_sign_up()
{
    system("cls");
    /*string username, password;
    fflush(stdin);
    cout << "\n\t\t\t\t\t==================================" << endl;
    cout << "\n\t\t\t\t\t SIGN UP STUDENT!";
    cout << "\n\t\t\t\t\t==================================" << endl;
    cout << "\n\n\n\t\t\t\t\t Enter username: ";
    getline(cin, username);
    cout << "\n\n\n\t\t\t\t\t Enter password: ";
    getline(cin, password);


    ofstream myfile;


    myfile.open("student_users.txt", ios::app);
    myfile << username << " " << password << endl;


    myfile.close();
    cout << "\n\n\n\t\t\t\t\t Registration Successful! " << endl;
    cout << "\n\n\n\t\t\t\t\t Log in your account now!";


    sleep(3);*/
    cout << "\n\t\t\t\t\t====================================" << endl;
    cout << "\t\t\t\t\t\t SIGN UP STUDENT!";
    cout << "\n\t\t\t\t\t====================================\n\n" << endl;


    add_details();
    cout << "Redirecting to login screen" << endl;
    sleep(3);
    student_login();


}


void student_login()
{
    system("cls");
    string enroll, password;
    cout << "\n\t\t\t\t\t====================================" << endl;
    cout << "\t\t\t\t\t\t STUDENT LOGIN!";
    cout << "\n\t\t\t\t\t====================================" << endl;
    cout << "\n\t\t\t\tPlease Enter your User name and Password to login" << endl;
    cout << "\n\n\n\t\t\t\t\t Enter user name: ";
    cin >> enroll;


    cout << "\n\n\n\t\t\t\t\t Enter password: ";
    cin >> password;

    ifstream myfile;
    myfile.open("all_users.txt", ios::in);
    string stored_enroll, stored_password;
    string line;
    bool found = false;
    while(getline(myfile, line, '\n'))
    {
        if(line == enroll + " " + password)
        {
            found = true;
            break;
        }
    }
    if(found == true){
        cout << "\n\n\t\t\t\t\t   Successfully Logged In!" << endl;
        cout << "\n\n\n\t\t\t\t\tConnecting to Student Portal";
        dots();
        studentportal(enroll);

    }else{
        cout << "\n\n\n\t\t\t\t\t Login failed! " << endl;
        cout << "\n\n\n\t\t\t\t\t Try again in 3 seconds!";
        dots();
        studentmenu();
    }

}


void adminportal()
{
    system("cls");
    int ch;
    cout << "\n\t\t\t\t\t======================================" << endl;
    cout << "\n\t\t\t\t\t\tWELCOME TO ADMIN PORTAL! "<<endl;
    cout << "\n\t\t\t\t\t======================================" << endl;
    cout << "\n\n\n\t\t\t\t\t 1. View All Student Records ";
    cout << "\n\n\n\t\t\t\t\t 2. Search Student Records ";
    cout << "\n\n\n\t\t\t\t\t 3. Student Attendance Records ";
    cout << "\n\n\n\t\t\t\t\t 4. Student Results ";
    cout << "\n\n\n\t\t\t\t\t 5. Delete Student Records";
    cout << "\n\n\n\t\t\t\t\t 6. LOG OUT ";


    cout << "\n\n\n\t\t\t\t\t ENTER YOUR CHOICE: ";
    cin>>ch;
    if (ch==1){
        system("cls");
        view_details();
        system("cls");
        adminportal();
    }

    else if(ch==2){
        system("cls");
        search_details();
        system("cls");
    }

    else if(ch==3){
        system("cls");
        int choice;
        cout << "\n\n\n\t\t\t\t\t 1. ADD new attendance record. ";
        cout << "\n\n\n\t\t\t\t\t 2. Veiw ECE students attendance records";
        cout << "\n\n\n\t\t\t\t\t 3. Veiw CSE students attendance records";
        cout << "\n\n\n\t\t\t\t\t 4. Back ";
        cout << "\n\n\n\t\t\t\t\t ENTER CHOICE: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            system("cls");
            add_attendance();
            break;
        case 2:
            system("cls");
            list_attendance_ece();
            break;
        case 3:
            system("cls");
            list_attendance_cse();
            break;
        case 4:
            adminportal();
            break;
        default:
            cout<<"\t\t\t\tINVALID INPUT.";
            cout<<"\t\t\t\tTry again in 3 seconds.";
            dots();
            adminportal();
            break;
        }
    system("pause");
    adminportal();
    }

    else if(ch==4){
        system("cls");
        int choice;
        cout << "\n\n\n\t\t\t\t\t 1. ADD student result. ";
        cout << "\n\n\n\t\t\t\t\t 2. Veiw all students results";
        cout << "\n\n\n\t\t\t\t\t 3. Back ";
        cout << "\n\n\n\t\t\t\t\t ENTER CHOICE: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            system("cls");
            add_result();
            break;
        case 2:
            system("cls");
            list_result();
            break;
        case 3:
            adminportal();
            break;
        default:
            cout<<"\t\t\t\tINVALID INPUT.";
            cout<<"\t\t\t\tTry again in 3 seconds.";
            dots();
            adminportal();
            break;
        }
    system("pause");
    adminportal();
    }


    else if(ch==5){
        system("cls");

        delete_details();
        dots();
        adminportal();
    }

    else if(ch==6){
        welcome_screen();
    }

    else{
        cout<<"\t\t\t\tINVALID INPUT.";
        cout<<"\t\t\t\tTry again in 3 seconds.";
        dots();
        adminportal();
    }
}


void studentportal(string enroll)
{
    system("cls");
    int ch;
    cout << "\n\t\t\t\t\t=======================================";
    cout << "\n\t\t\t\t\t\tWELCOME TO STUDENT PORTAL! ";
    cout << "\n\t\t\t\t\t=======================================" << endl;
    cout << "\n\n\n\t\t\t\t\t 1. View Details ";
    cout << "\n\n\n\t\t\t\t\t 2. Result ";
    cout << "\n\n\n\t\t\t\t\t 3. View Registered Subjects ";
    cout << "\n\n\n\t\t\t\t\t 4. Attendance ";
    cout << "\n\n\n\t\t\t\t\t 5. FAQs";
    cout << "\n\n\n\t\t\t\t\t 6. LOG OUT ";


    cout << "\n\n\n\t\t\t\t\t ENTER YOUR CHOICE: ";
    cin>>ch;
    if (ch==1){
            system("cls");
            student_details(enroll);
            system("pause");
            cout << "\n\n\n\t\t\t\tRedirecting to Main menu";
            dots();
            fflush(stdin);
            studentportal(enroll);
        }

    else if(ch==2){
        system("cls");
        view_result(enroll);

    }

    else if(ch==3){
            system("cls");
            string filename = enroll + ".txt";
            ifstream file(filename);
            string branch;

            int i=0;
            if(file.is_open()){
                while(i!=6){
                    getline(file,branch,'\n');
                    i++;
                }
            }
            cout << "\n\n\n\t\t\t\t=======================================================================" << endl;
            cout << "\t\t\t\t\tREGISTERED SUBJECTS FOR " << branch << " ALONG WITH THEIR COURSE CREDITS" << endl;
            cout << "\t\t\t\t=======================================================================" << endl;
            if(branch == "ECE" || branch == "ece"){
                display_sub_ece();
                system("pause");
                cout << "\n\n\t\t\tRedirecting to Main Menu";
                dots();
                system("cls");
                studentportal(enroll);
            }


            else if(branch == "CSE" || branch == "cse"){
                cout << "\n\n\n\t\t\t\t=======================================================================" << endl;
                cout << "\t\t\t\t\t\tREGISTERED SUBJECTS FOR " << branch << " ALONG WITH THEIR COURSE CREDITS" << endl;
                cout << "\t\t\t\t=======================================================================" << endl;
                display_sub_cse();
                system("pause");
                cout << "\n\n\t\t\tRedirecting to Main Menu";
                dots();
                system("cls");
                studentportal(enroll);
            }


            else{
                cout << "Please enter correct coursename" << endl;
                studentportal(enroll);
            }

        }

    else if(ch==4){
            //function to view attendance
            view_attendance(enroll);
            system("pause");
            system("cls");
            studentportal(enroll);
        }

    else if(ch==5){
        system("cls");
        faq();
        system("pause");
        system("cls");
        studentportal(enroll);
    }

    else if(ch==6){
        system("cls");
        welcome_screen();
    }

    else{
        cout<<"\t\t\t\tINVALID INPUT.";
        cout<<"\t\t\t\tTry again in 3 seconds.";
        dots();
        studentportal(enroll);
    }
}
class student
{
protected:
    string password;
    string name;
    string enroll;
    string gender;
    string email;
public:
    student()
    {
        string ch;
        fflush(stdin);
        cout << "\n\n";
        cout << "\t\t\t\t\t Enter Enrollment Number: ";
        getline(cin, enroll);
        fflush(stdin);
        cout << "\t\t\t\t\t Enter password: ";
        getline(cin, password);
        fflush(stdin);
        cout << "\t\t\t\t\t Enter name: ";
        getline(cin, name);
        fflush(stdin);

        while(1){
            cout << "\t\t\t\t\t Enter gender F/M: ";
            fflush(stdin);
            getline(cin, gender);
            fflush(stdin);
            if(gender=="m" || gender=="f" || gender == "F" || gender=="M")
            break;
        }

        cout << "\t\t\t\t\t Enter email: ";
        getline(cin, email);

        ofstream file1;
        file1.open("all_users.txt", ios::app);
        if(file1.is_open()){
            file1 << enroll << " " << password << endl;
            file1.close();
        }
        else{
            cout << "Could not register, please try again" << endl;
        }

        ofstream file;
        file.open("all_students.txt",ios::app);
        if(file.is_open())
        {
            file << enroll + ',';
            file << name + ',';

            file.close();
        }
        else{
            cout << "Error occurred" << endl;
        }

        string filename = enroll + ".txt";
        ofstream myfile;
        myfile.open(filename, ios::app);

        if(myfile.is_open())
        {
            myfile << enroll + '\n';
            myfile << password + '\n';
            myfile << name + '\n';
            myfile << gender + '\n';
            myfile << email + '\n';

            myfile.close();
        }
        else{
            cout << "Error, cannot register you in. Please try again";
            dots();
            studentmenu();
        }

    }
    void putData()
    {
        cout << "Student Name: " << name << endl;
        cout << "Enrollment Number: " << enroll << endl;
        cout << "Gender: " << gender << endl;
        cout << "Email: " << email << endl;
    }
};

void display_sub_ece()
{
    map<string, int>ece;
    map<string,int> :: iterator itr;
    ece.insert({"Electrical Science 2", 4});
    ece.insert({"Signal and Systems", 4});
    ece.insert({"Digital Circuit Designing", 4});
    ece.insert({"Probability and Random Processes", 2});
    ece.insert({"Economics", 3});
    cout << "\n\n\n\t\t\t\tELECTRONICS AND COMMUNICATIONS SUBJECTS";
    //cout << "\t\t\t\t=====================================================" << endl;
    for(auto itr = ece.begin(); itr != ece.end(); itr++)
    {
        cout << "\t\t\t\t"<< itr->first << "   -  " << itr->second << endl;
    }
}


void display_sub_cse()
{
    map<string,int>cse;
    map<string,int> :: iterator itr;
    cse.insert({"Electrical Science 2", 4});
    cse.insert({"Data Structures", 4});
    cse.insert({"Database System and Webs", 4});
    cse.insert({"Theoretical Foundation of Computer Science", 2});
    cse.insert({"Economics", 3});
    cout << "\n\n\n\t\t\t\tCOMPUTER SCIENCE SUBJECTS";
    //cout << "\t\t\t\t=====================================================" << endl;
    for(auto itr = cse.begin(); itr != cse.end(); itr++)
    {
        cout << itr->first << "   -  " << itr->second << endl;
    }
}


class subject : public student
{
    string branch;
    string batch;
public:
    subject()
    {
        while(1){

            cout<<"\t\t\t\t\t Enter Branch(ECE/CSE): ";
            fflush(stdin);
            getline(cin, branch);
            fflush(stdin);
            if(branch=="ece" || branch=="cse" || branch == "ECE" || branch=="CSE")
            break;
        }
        while(1){

            cout<<"\t\t\t\t\t Enter Batch(a1/a2/b1/b2): ";
            fflush(stdin);
            getline(cin, batch);
            fflush(stdin);
            if(batch=="a1" || batch=="a2" || batch == "b1" || batch=="b2")
            break;
        }

        string filename = enroll + ".txt";
        ofstream myfile;
        myfile.open(filename, ios::app);

        if(myfile.is_open())
        {
            myfile << branch + '\n';
            myfile << batch + '\n';

            myfile.close();
            cout << "\n\n\n\t\t\t\t\tStudent successfully registered!" << endl;
        }else{
            cout << "Error signing you up, please try again" << endl;

        }

        ofstream file;
        file.open("all_students.txt", ios::app);
        if(file.is_open())
        {
            file << branch + '\n';
            file.close();
        }
        else{
            cout << "Error" << endl;
        }

    }
    void putData()
    {
        student::putData();
        cout<<"Branch: "<<branch<<endl;
        cout<<"Batch: "<<batch<<endl;
    }
    void display_sub()
    {
        if (branch == "ECE" || branch == "ece")
            display_sub_ece();
        else if(branch == "CSE"||branch == "cse")
            display_sub_cse();
        else
            cout << "INVALID BRANCH CODE" << endl;
    }
};
void add_details()
{
    cout << "\t\t\t\t\tPlease Register and Enter your Details.." << endl;
    subject s;
}
void view_details()
{
    cout << "Enrollment Numbers and Names of all Enrolled Students\n" << endl;
    ifstream myfile;
    myfile.open("all_students.txt");
    if(myfile.is_open())
    {
        string enroll, name, branch; int i = 1;
        while(getline(myfile, enroll, ','))
        {
            getline(myfile, name, ',');
            getline(myfile, branch, '\n');
            cout << i << ": " << enroll << " - " << name << " - " << branch << endl;
            i++;
        }
        system("pause");
    }
    else{
        cout << "No students found" << endl;
    }

}
void search_details()
{
    system("cls");
    fflush(stdin);
    string enroll;
    cout << "Enter Enrollment number to search for record: ";
    getline(cin, enroll);
    string filename = enroll + ".txt";

    ifstream myfile;
    myfile.open(filename, ios::in);
    if(myfile.is_open())
    {
        string name, pass, enroll, gender, email, branch, batch;
        while(getline(myfile, enroll, '\n'))
        {
            getline(myfile, pass, '\n');
            fflush(stdin);
            getline(myfile, name, '\n');
            fflush(stdin);
            getline(myfile, gender, '\n');
            getline(myfile, email, '\n');
            fflush(stdin);
            getline(myfile, branch, '\n');
            getline(myfile, batch, '\n');
            fflush(stdin);

            cout << "Name of Student: " << name << endl;
            cout << "Enrollment Number of Student: " << enroll << endl;
            cout << "Gender: " << gender << endl;
            cout << "E-mail ID of Student: " << email << endl;
            cout << "Branch: " << branch << endl;
            cout << "Batch: " << batch << endl;
        }
    }
    else
    cout<<"\n INVALID ENROLLMENT NUMBER! TRY AGAIN!";
    dots();
    system("pause");
    adminportal();
}
void delete_details()
{
    string enroll;
    fflush(stdin);
    cout << "Enter enrollment number to delete data: ";
    getline(cin, enroll);

    string filename = enroll + ".txt";
    ifstream myfile;

    string name, pass, stored_enroll, gender, email, branch, batch;
    myfile.open(filename);
    if(myfile.is_open())
    {
        while(getline(myfile, stored_enroll, '\n'))
        {
            getline(myfile, pass, '\n');
            getline(myfile, name, '\n');
            getline(myfile, gender, '\n');
            getline(myfile, email, '\n');
            getline(myfile, branch, '\n');
            getline(myfile, batch, '\n');

            myfile.close();
        }
    }else{
        cout << "Error, try again" << endl;
    }


    ifstream file;
    ofstream tempfile;
    file.open("all_students.txt");
    tempfile.open("temp.txt");
    string line;
    string sub = stored_enroll + "," + name + "," + branch;
    while(getline(file, line)){
        if(line == sub){
            continue;
        }
        tempfile << line << endl;
    }
    file.close();
    tempfile.close();
    remove("all_students.txt");
    rename("temp.txt", "all_students.txt");


    //using remove() to delete the file, if successful remove() returns 0
    if(remove(filename.c_str())!=0)
    {
        cout << "Error, Invalid enrollment number" << endl;
    }else{
        cout << "Details of the student successfully deleted" << endl;
    }
}
void student_details(string str)
{
    string filename = str + ".txt";
    string enroll, pass, name, gender, email, batch, branch;
    ifstream myfile;
    myfile.open(filename);
    if(myfile.is_open())
    {
        while(!myfile.eof()){
            getline(myfile, enroll, '\n');
            getline(myfile, pass, '\n');
            getline(myfile, name, '\n');
            getline(myfile, gender, '\n');
            getline(myfile, email, '\n');
            getline(myfile, branch, '\n');
            getline(myfile, batch, '\n');

            myfile.close();
        }
    }
    else{
        cout << "No student found" << endl;
    }
    cout << "\n\n\n\t\t\t\t==============================" << endl;
    cout << "\t\t\t\tSTUDENT DETAILS ARE AS FOLLOWS" << endl;
    cout << "\t\t\t\t==============================\n" << endl;
    cout << "\t\t\t\tName: " << name << endl;
    cout << "\n\t\t\t\tEnrollment Number: " << str << endl;
    cout << "\n\t\t\t\tBatch: " << batch << endl;
    cout << "\n\t\t\t\tEmail ID: " << email << endl;
    cout << "\n\t\t\t\tGender: " << gender << endl;
    cout << "\n\t\t\t\tBranch: B.Tech " << branch << endl;
    cout << endl;
}
void faq()
{
    cout << "\n\n\n\t\t\t\tFREQUENTLY ASKED QUESTIONS" << endl;
    cout << "\t\t\t\t==========================\n" << endl;
    cout << "\t\t\tQ1. What if you can't login?" << endl;
    cout << "\t\t\t A. Try again after sometime, and if the problem persists contact admin\n" << endl;
    cout << "\t\t\tQ2. What if you lose your ID Card?" << endl;
    cout << "\t\t\t A. Go to registrar office and you can issue a new one with additional charges.\n" << endl;
    cout << "\t\t\tQ3. University contact details?" << endl;
    cout << "\t\t\t A. Email : admission@jiit.ac.in\n\t\t\t\tPhone Number: +91-120-2594300/400\n\t\t\t\t\tWebsite: jiit.ac.in\n" << endl;
    cout << "\t\t\tQ4. Where to check results? " << endl;
    cout << "\t\t\t A. In your campus portal.\n" << endl;
    cout << "\t\t\tQ5. How to unenroll from university?" << endl;
    cout << "\t\t\t A. Contact Admin and get yourselves unenrolled.\n" << endl;
}
void add_attendance()
{
    system("cls");
    string rollNumber;
    cout << "\nEnter Student's roll Number : ";
    cin >> rollNumber;
    fflush(stdin);
    string filename=rollNumber+".txt";
    ifstream myfile(filename);
    if (!myfile)
        {
            cout << "\n\t\t\t\tstudent not found!";
        }
    string name, batch, branch, str;
    int i=0;
    if(myfile.is_open()){
        while(!myfile.eof()){
            getline(myfile,str,'\n');
            getline(myfile,str,'\n');
            getline(myfile,name,'\n');
            getline(myfile,str,'\n');
            getline(myfile,str,'\n');
            getline(myfile,branch,'\n');
            getline(myfile,batch,'\n');
            fflush(stdin);
            i++;
        }
    }

    if(branch == "ECE" || branch == "ece"){
        fstream file("attendance_ece.csv", ios::out | ios::app);
        if (!file)
        {
            cout << "\nFailed to open, file not found!";
            dots();
        }

        else{
            cout << "\n\t\t\t\t|Enter Attendance Data|" << endl
                << endl;

            string electrical, signal, digital, probability, economics;

            file << "\n"
            << rollNumber << ", ";

            cout << "\n\t\t\t\tStudnet's Name : ";
            cout << name;
            file << name << ", ";

            cout << "\n\t\t\t\tBatch          : ";
            cout << batch;
            file << batch << ", ";

            cout << "\nEnter electrical science               : ";
            cin >> electrical;
            file << electrical << ", ";

            cout << "\nEnter Signal and Systems               : ";
            cin >> signal;
            file << signal << ", ";

            cout << "\nEnter Digital Circuit Designing        : ";
            cin >> digital;
            file << digital << ", ";

            cout << "\nEnter Probability and Random Processes : ";
            cin >> probability;
            file << probability << ", ";

            cout << "\nEnter Economics                        : ";
            cin >> economics;
            file << economics;
            file.close();
            cout<<"\n\nDATA UPLOADING";
            dots();
        }
    }
    if(branch == "CSE" || branch == "cse"){
        fstream file("attendance_cse.csv", ios::out | ios::app);
        if (!file)
        {
            cout << "\nFailed to open, file not found!";
            dots();
        }

        else{
            cout << "\n\t\t\t\t|Enter Attendance Data|" << endl
                << endl;

            string electrical, data, database, cse, economics;
            file << "\n"
            << rollNumber << ", ";

            cout << "\n\t\t\t\tStudnet's Name : ";
            cout << name;
            file << name << ", ";

            cout << "\n\t\t\t\tBatch          : ";
            cout << batch;
            file << batch << ", ";

            cout << "\nEnter electrical science                         : ";
            cin >> electrical;
            file << electrical << ", ";

            cout << "\nEnter Data Structures                            : ";
            cin >> data;
            file << data << ", ";

            cout << "\nEnter Database System and Webs                   : ";
            cin >> database;
            file << database << ", ";

            cout << "\nEnter Theoretical Foundation of Computer Science : ";
            cin >> cse;
            file << cse << ", ";

            cout << "\nEnter Economics                                  : ";
            cin >> economics;
            file << economics;

            file.close();
            cout<<"\n\nDATA UPLOADING";
            dots();

        }
    }
    system("cls");
    int choice;
    cout<<"\n\t\t\t\t 1. Add another record.";
    cout<<"\n\t\t\t\t 2. Back to admin portal.\n\t\t\t\tENTER CHOICE: ";
    cin>>choice;
    if(choice==1)
        add_attendance();
    if(choice==2)
        adminportal();
}
void dots()
{
    for(int i=0; i<4; i++){
                Sleep(1000);//one second delay
                cout << ".";
            }
 }
void list_attendance_ece()
{
    fstream file("attendance_ece.csv");

    if (!file)
    {
        cout << "fail in opening the file";
    }
    cout << "\n\t\t\t\t\t\t|ECE Attendance Record| \n\n";

    cout << "\n-----------------------------------------------------------------------------------------------------------------------\n"
         << endl
         << endl;
    cout << "Roll \t\tName \t\t batch \t  electrical \t  signal \tdigi circuit \t probability \t  economics" << endl
         << endl;
    string rollNumber, name, batch, electrical , digital, probability, economics, signal;

    while (!file.eof()) // file.eof() = detects as how long the f
    {
        getline(file, rollNumber, ',');
        getline(file, name, ',');
        getline(file, batch, ',');
        getline(file, electrical, ',');
        getline(file, signal, ',');
        getline(file, digital, ',');
        getline(file, probability, ',');
        getline(file, economics, '\n');

        cout << rollNumber << "\t" << name << "\t\t" << batch << "\t\t" << electrical << "\t\t" << signal << "\t\t" << digital << "\t\t" << probability << "\t\t" << economics << endl;
        cout << endl;
    }

    cout << "\n-----------------------------------------------------------------------------------------------------------------------" << endl;
    file.close();

}
void list_attendance_cse()
{
    fstream file("attendance_cse.csv");

    if (!file)
    {
        cout << "fail in opening the file";
    }
    cout << "\n\t\t\t\t\t\t|CSE Attendance Record| \n\n";

    cout << "\n-----------------------------------------------------------------------------------------------------------------------\n"
         << endl
         << endl;
    cout << "Roll \t\t Name \t\t batch \t\telectrical \t  DSA \t    Database \t theory cse \t  economics" << endl
         << endl;
    string rollNumber , name , batch , electrical , data , database , cse , economics;

    while (!file.eof()) // file.eof() = detects as how long the f
    {
        getline(file, rollNumber, ',');
        getline(file, name, ',');
        getline(file, batch, ',');
        getline(file, electrical, ',');
        getline(file, data, ',');
        getline(file, database, ',');
        getline(file, cse, ',');
        getline(file, economics, '\n');

        cout << rollNumber << "\t" << name << "\t\t" << batch << "\t\t" << electrical << "\t\t" << data << "\t\t" << database << "\t\t" << cse << "\t\t" << economics << endl;
        cout << endl;
    }

    cout << "\n-----------------------------------------------------------------------------------------------------------------------" << endl;
    file.close();

}
void view_attendance(string str)
{
    system("cls");
    string search,enroll=str;
    string filename = enroll + ".txt";
    ifstream file(filename);
    string branch;

    int i=0;
    if(file.is_open()){
        while(i!=6){
            getline(file,branch,'\n');
            i++;
        }
    }

    int found=0;
    string name, batch, electrical, signal, digital, probability, economics, data, database, cse;
    if(branch=="ece"||branch=="ECE"){
		ifstream file;
		file.open("attendance_ece.csv", ios::binary| ios::out);
        while (!file.eof())
		{
            getline(file, search,',');
			if (search == enroll) {
				cout << "\n\n\t\t\t\t\tStudent Attendance\n\n\n" << endl;
				found=1;
                getline(file, name, ',');
                getline(file, batch, ',');
                getline(file, electrical, ',');
                getline(file, signal, ',');
                getline(file, digital, ',');
                getline(file, probability, ',');
                getline(file, economics, '\n');
                cout << "Roll \t\tName \t\t batch \t  electrical \t  signal \tdigi circuit \t probability \t  economics" << endl
                << endl;
                cout << enroll << "\t" << name << "\t\t" << batch << "\t\t" << electrical << "\t\t" << signal << "\t\t" << digital << "\t\t" << probability << "\t\t" << economics << endl;
                cout << endl;
			}
            else
            getline(file, economics,'\n');
		}
        if(!found){
            cout<<"\n\nDATA NOT FOUND! REDIRECTING";
            dots();
            studentportal(enroll);        }
		file.close();
    }

    if(branch=="cse"||branch=="CSE"){
		ifstream file;
		file.open("attendance_cse.csv", ios::binary| ios::out);
        while (!file.eof())
		{
            getline(file, search,',');
			if (search == enroll) {
				cout << "\n\n\t\t\t\t\tStudent Attendance\n\n\n" << endl;
				found=1;
                getline(file, name, ',');
                getline(file, batch, ',');
                getline(file, electrical, ',');
                getline(file, data, ',');
                getline(file, database, ',');
                getline(file, cse, ',');
                getline(file, economics, '\n');
                cout << "Roll \t\t Name \t\t batch \t\telectrical \t  DSA \t    Database \t theory cse \t  economics" << endl
         << endl;
                cout << enroll << "\t" << name << "\t\t" << batch << "\t\t" << electrical << "\t\t" << data << "\t\t" << database << "\t\t" << cse << "\t\t" << economics << endl;
        cout << endl;
			}
            else
            getline(file, economics,'\n');
		}
        if(!found){
            cout<<"\n\nDATA NOT FOUND! REDIRECTING";
            dots();
            studentportal(enroll);
        }
		file.close();
    }

}
void add_result(){
    system("cls");
    string rollNumber;
    cout << "\nEnter Student's roll Number : ";
    cin >> rollNumber;
    fflush(stdin);
    string filename=rollNumber+".txt";
    ifstream myfile(filename);
    if (!myfile)
        {
            cout << "\n\t\t\t\tstudent not found!";
            dots();
        }
    else {string name, batch, branch, str;
    int i=0;
    if(myfile.is_open()){
        while(!myfile.eof()){
            getline(myfile,str,'\n');
            getline(myfile,str,'\n');
            getline(myfile,name,'\n');
            getline(myfile,str,'\n');
            getline(myfile,str,'\n');
            getline(myfile,branch,'\n');
            getline(myfile,batch,'\n');
            fflush(stdin);
            i++;
        }
    }
    fstream file("result.csv", ios::out | ios::app);
    if (!file)
    {
        cout << "\nRecord not found!";
        dots();
    }

    else{
        cout << "\n\t\t\t\t|Result Data|" << endl
        << endl;

        string grade_points, sgpa, cgpa;

        file << "\n"
        << rollNumber << ", ";

        cout << "\n\t\t\t\tStudnet's Name : ";
        cout << name;
        file << name << ", ";

        cout << "\n\t\t\t\tBranch          : ";
        cout << branch;
        file << branch << ", ";

        cout << "\n\t\t\t\tBatch          : ";
        cout << batch;
        file << batch << ", ";

        cout << "\nEnter grade points earned : ";
        cin >> grade_points;
        file << grade_points << ", ";

        cout << "\nEnter SGPA                : ";
        cin >> sgpa;
        file << sgpa << ", ";

        cout << "\nEnter CGPA                : ";
        cin >> cgpa;
        file << cgpa << "\n";

        file.close();
        cout<<"\n\nDATA UPLOADING";
        dots();
    }
    }

    system("cls");
    int choice;
    cout<<"\n\t\t\t\t 1. Add another record.";
    cout<<"\n\t\t\t\t 2. Back to admin portal.\n\t\t\t\tENTER CHOICE: ";
    cin>>choice;
    if(choice==1)
        add_result();
    if(choice==2)
        adminportal();
}
void list_result(){
    fstream file("result.csv");

    if (!file)
    {
        cout << "fail in opening the file";
    }
    cout << "\n\t\t\t\t\t\t|RESULTS| \n\n";

    cout << "\n-----------------------------------------------------------------------------------------------------------------------\n"
         << endl
         << endl;
    cout << "Roll \t\tName \t branch  \tbatch \t    Grade Points \t\t  SGPA \t\t   CGPA" << endl
         << endl;
    string rollNumber, name, batch, branch , grade_point, cgpa, sgpa;

    while (!file.eof()) // file.eof() = detects as how long the f
    {
        getline(file, rollNumber, ',');
        getline(file, name, ',');
        getline(file, branch, ',');
        getline(file, batch, ',');
        getline(file, grade_point, ',');
        getline(file, sgpa, ',');
        getline(file, cgpa, '\n');
        fflush(stdin);
        cout << rollNumber << "\t" << name << "\t\t" << branch << "\t\t" << batch << "\t\t" << grade_point << "\t\t" << sgpa << "\t\t" << cgpa <<  endl;
        cout << endl;
    }

    cout << "\n-----------------------------------------------------------------------------------------------------------------------" << endl;
    file.close();

}
void view_result(string str){
    string enroll=str;
    system("cls");
    string search;
    int found=0;
    string rollNumber, name, batch, branch , grade_point, cgpa, sgpa;
    fstream file("result.csv");

    if (!file)
    {
        cout << "fail in opening the file";
    }
    cout << "\n\t\t\t\t\t\t|RESULTS| \n\n";

    cout << "\n-----------------------------------------------------------------------------------------------------------------------\n"
         << endl
         << endl;
    cout << "Name \t    branch  \t  batch \tGrade Points \t\t SGPA \t\t CGPA" << endl
         << endl;


    while (!file.eof()) // file.eof() = detects as how long the f
    {
        getline(file, search,',');
			if (search == enroll){
            found=1;
            getline(file, name, ',');
            getline(file, branch, ',');
            getline(file, batch, ',');
            getline(file, grade_point, ',');
            getline(file, sgpa, ',');
            getline(file, cgpa, '\n');
            fflush(stdin);
            cout << name << "\t\t" <<branch << "\t\t" <<   batch << "\t\t" << grade_point << "\t\t" <<   sgpa << "\t\t" <<  cgpa <<  endl;
            cout << endl;
            system("pause");

    }
    else
        {
            getline(file, cgpa,'\n');
        }
    }
    cout << "\n-----------------------------------------------------------------------------------------------------------------------" << endl;
    file.close();
        if(!found){
            cout<<"\n\nDATA NOT FOUND! REDIRECTING";
            dots();
            studentportal(enroll);
        }

    studentportal(enroll);
}
