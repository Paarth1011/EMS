#include <iostream>
#include <windows.h>
#include <string.h>
#include <conio.h>
using namespace std;

/***************************** CLASSES DECLARATION **************************************/

class signup_admin
{
    public:
        string password;
        string codeName;
        int user_id;
} admin[3];

class signup_client
{
    public:
        string c_password;
        int c_user_id;
} client[20];

class signup_agent
{
    public:
        string user_id;
        int age;
        string codeName;
        string designation;
        int salary;
        string awards;
        string retire;
} agent[100];

int total = 0;

/***************************** FUNCTION DEFINITION **************************************/

void new_data()
{
    system("cls");
    int no = 0;
    cout << "\n\t\t\t\t\t\t\t------------------------------";
    cout << "\n\t\t\t\t\t\t\t    > REGISTER NEW DATA <<";
    cout << "\n\t\t\t\t\t\t\t------------------------------";

    cout << "\n\n\t\t\t\t\t\tHow Many RAW Agents Data You Want To Enter? : ";
    cin >> no;

    for (int i = total; i < total + no; i++)
    {
        system("cls");
        cout << "\n\t\t\t\t\t\t\t------------------------------";
        cout << "\n\t\t\t\t\t\t\t      > ENTERING DATA <<";
        cout << "\n\t\t\t\t\t\t\t------------------------------";

        cout << "\n\n\t\t\t\t\t\tEnter Data Of Agent " << i + 1 << endl;
        cout << "\n\n\t\t\t\t\t\t\tPlease Enter His/Her User Id: ";
        cin >> agent[i].user_id;
        cout << "\n\t\t\t\t\t\t\tPlease Enter His/Her Age: ";
        cin >> agent[i].age;
        cout << "\n\t\t\t\t\t\t\tPlease Enter His/Her Code Name: ";
        cin >> agent[i].codeName;
        cout << "\n\t\t\t\t\t\t\tPlease Enter His/Her Designation: ";
        cin >> agent[i].designation;
        cout << "\n\t\t\t\t\t\t\tPlease Enter The Salary: ";
        cin >> agent[i].salary;
        cout << "\n\t\t\t\t\t\t\tPlease Enter The Awards Won: ";
        cin >> agent[i].awards;
        cout << "\n\t\t\t\t\t\t\tPlease Enter No. Of Years Remaining For His/Her Retirement: ";
        cin >> agent[i].retire;
        cout << "\n\n\t\t\t\t\t\t Agent " << i+1 << " Registered Successfully..!!";
        Sleep(1500);
    }
    total = total + no;
    cout << "\n\n\t\t\t\t\t\t REGISTRATION SUCCESSFUL....!!!";
    Sleep(2000);
}

void show()
{
    if (total != 0)
    {
        cout << "\n\n       ------------------------------------------------------------------------------------------------------------------------------------------------------";
        cout << "\n         ||    USER ID    ||    AGE    ||     CODE NAME    ||       DESIGNATION       ||     SALARY     ||        AWARDS       ||       RETIREMENT       ||";
        cout << "\n       ------------------------------------------------------------------------------------------------------------------------------------------------------";
        for (int i = 0; i < total; i++)
        {
            cout << "\n\n\t\t " << agent[i].user_id << "\t\t " << agent[i].age << "\t     " << agent[i].codeName << "\t\t   " << agent[i].designation << "\t\t     " << agent[i].salary << "\t\t" << agent[i].awards << "\t\t    " << agent[i].retire;
        }
        
        cout<<"\n\n\n\n\n\t\t\t\t";
        system("PAUSE");
    }
    else
    {
        cout << "\n\n\t\t\t\t No Data Found..." << endl;
        Sleep(2000);
    }
}

void search()
{
    system("cls");
    if (total != 0)
    {
        string id;

        cout << "\n\t\t\t\t\t\t\t-------------------------------";
        cout << "\n\t\t\t\t\t\t\t     >> SEARCHING DATA <<";
        cout << "\n\t\t\t\t\t\t\t-------------------------------";

        cout << "\n\n\t\t\t\t\t\tEnter The User ID Of The Employee Which You Want To Search: ";
        cin >> id;

        for (int i = 0; i < total; i++)
        {
            if (agent[i].user_id == id)
            {
                cout << "\n\n\n\t\t\t\t\t\t Data Of Agent " << i + 1 << endl;
                cout << "\t\t\t\t\t\t---------------------------------------------------\n";
                cout << "\n\t\t\t\t\t\t  User ID: " << agent[i].user_id << endl;
                cout << "\n\t\t\t\t\t\t  Age " << agent[i].age << endl;
                cout << "\n\t\t\t\t\t\t  Code Name " << agent[i].codeName << endl;
                cout << "\n\t\t\t\t\t\t  Designation: " << agent[i].designation << endl;
                cout << "\n\t\t\t\t\t\t  Salary: " << agent[i].salary << endl;
                cout << "\n\t\t\t\t\t\t  Awards Won: " << agent[i].awards << endl;
                cout << "\n\t\t\t\t\t\t  Years Remaining For Retirement: " << agent[i].retire << endl;
                cout << "\n\t\t\t\t\t\t---------------------------------------------------\n";

                cout<<"\n\n\n\n\t\t\t\t\t\t";
                system("PAUSE");

                break;
            }
            if (i == total - 1)
            {
                cout << "\n\n\t\t\t\t\t\t No Data Found..." << endl;
                Sleep(2000);
            }
        }
    }
    else
    {
        cout << "\n\n\t\t\t\t\t\t No Data Found..." << endl;
        Sleep(2000);
    }
}

void update()
{
    system("cls");
	if(total!=0)
    {
        system("cls");
        string id;
        cout << "\n\t\t\t\t\t\t\t-------------------------------";
        cout << "\n\t\t\t\t\t\t\t       >> UPDATE DATA <<";
        cout << "\n\t\t\t\t\t\t\t-------------------------------";
        cout << "\n\n\t\t\t\t\t\tEnter The User ID Of The Agent Whose Info. You Want To Update: ";
        cin >> id;

        for(int i=0;i<total;i++)
        {
            if(agent[i].user_id==id)
            {
                cout << "\n\n\t\t\t\t\t\t Old Data Of Agent " << i + 1 << endl;
                cout << "\t\t\t\t\t\t---------------------------------------------------\n";
                cout << "\n\t\t\t\t\t\t User ID: " << agent[i].user_id << endl;                    
                cout << "\n\t\t\t\t\t\t Age: " << agent[i].age << endl;
                cout << "\n\t\t\t\t\t\t Code Name: " << agent[i].codeName << endl;
                cout << "\n\t\t\t\t\t\t Designation: " << agent[i].designation << endl;
                cout << "\n\t\t\t\t\t\t Salary: " << agent[i].salary << endl;
                cout << "\n\t\t\t\t\t\t Awards Won: " << agent[i].awards << endl;
                cout << "\n\t\t\t\t\t\t Year Remaining For Retirement: " << agent[i].retire << endl;
                cout << "\n\t\t\t\t\t\t---------------------------------------------------\n";

                cout << "\n\n\t\t\t\t\t\t Enter New Data: "<<endl;
                cout << "\t\t\t\t\t\t---------------------------------------------------\n";
                cout << "\n\t\t\t\t\t\t User ID:: ";
                cin >> agent[i].user_id;
                cout << "\n\t\t\t\t\t\t Age: ";
                cin >> agent[i].age;
                cout << "\n\t\t\t\t\t\t Code Name: ";
                cin >> agent[i].codeName;
                cout << "\n\t\t\t\t\t\t Designation: ";
                cin >> agent[i].designation;
                cout << "\n\t\t\t\t\t\t Salary: ";
                cin >> agent[i].salary;
                cout << "\n\t\t\t\t\t\t Awards Won: ";
                cin >> agent[i].awards;
                cout << "\n\t\t\t\t\t\t Year Remaining For Retirement: ";
                cin >> agent[i].retire;
                cout << "\n\t\t\t\t\t\t---------------------------------------------------\n";
                cout<<"\n\n\t\t\t\t\t\t DATA UPDATED SUCCESSFULLY...!!"<<endl;
                Sleep(2500);
                break;
            }
            if(i==total-1)
            {
                cout << "\n\n\t\t\t\t\t\t No Such Data Found..." << endl;
                Sleep(2000);
            }
        }
    }
    else
    {
       cout << "\n\n\t\t\t\t\t\t No Data Found..." << endl;
        Sleep(2000);
    }
}

void del()
{
    system("cls");
    if (total != 0)
    {
        cout << "\n\t\t\t\t\t\t-------------------------------";
        cout << "\n\t\t\t\t\t\t       >> DELETE DATA <<";
        cout << "\n\t\t\t\t\t\t-------------------------------";

        int press;

        cout << "\n\n\t\t\t\t\t\tPress 1 To Delete Specific Record" << endl;
        cout << "\n\t\t\t\t\t\tPress 2 to Delete Whole Database" << endl;
        cout << "\n\n\t\t\t\t\t Enter Your Choice: ";
        cin >> press;
        
        if (press == 1)
        {
            string id;

            cout << "\n\t\t\t\t\t\t-------------------------------";
            cout << "\n\t\t\t\t\t\t      >> DELETING DATA <<";
            cout << "\n\t\t\t\t\t\t-------------------------------";

            cout << "\n\n\t\t\t\t\tEnter ID Of The Agent Whose Data You Want To Delete: ";
            cin >> id;

            for (int i = 0; i < total; i++)
            {
                if (agent[i].user_id == id)
                {
                    agent[i].user_id = agent[i + 1].user_id;
                    agent[i].age = agent[i + 1].age;
                    agent[i].codeName = agent[i + 1].codeName;
                    agent[i].designation = agent[i + 1].designation;
                    agent[i].salary = agent[i + 1].salary;
                    agent[i].awards = agent[i + 1].awards;
                    agent[i].retire = agent[i + 1].retire;

                    total--;

                    cout << "\n\n\t\t\t\t\t Record Deleted Successfully..." << endl;
                    
                    cout<<"\n\n\n\n\t\t\t\t\t";
                    system("PAUSE");
                    
                    break;
                }

                if (i == total - 1)
                {
                    cout << "\n\n\t\t\t\t\t No Such Record Found..!" << endl;
                    Sleep(2500);
                }
            }
        }

        else if (press == 2)
        {
            total = 0;

            cout << "\n\n\t\t\t\t\t All Record Deleted Successfully..!" << endl;
            Sleep(2500);
        }

        else
        {
            cout << "\n\n\t\t\t\t Invalid Input" << endl;
            Sleep(2500);
        }
    }
    else
    {
        cout << "\n\n\t\t\t\t\t No Data Found" << endl;
        Sleep(2500);
    }
}

/***************************** MAIN FUNCTION **************************************/

int main()
{
    admin[0].user_id = 2345;
    admin[1].user_id = 1109;
    admin[2].user_id = 1414;
    admin[0].password = "surya";
    admin[1].password = "dalvi";
    admin[2].password = "doshi";
    admin[0].codeName = "Hitman";
    admin[1].codeName = "Riot";
    admin[2].codeName = "SherShaah";

    client[0].c_user_id = 0000;
    client[0].c_password = "ABCD";

/***************************** LOGIN PAGE **************************************/

start:
    system("cls");
    cout << "\n\t\t\t\t\t\t          -------------------------------------------";
    cout << "\n\t\t\t\t\t\t                   ||  WELCOME TO R.A.W.  ||";
    cout << "\n\t\t\t\t\t\t          -------------------------------------------";
    cout<<"\n\n";
    cout << "\t\t\t\t\t\t ----------------------------------------------------------------";
    cout << "\n\t\t\t\t\t\t   >>> Press: [1] ADMIN LOGIN | [2] CLIENT LOGIN | [3] EXIT <<<" << endl;
    cout << "\t\t\t\t\t\t ----------------------------------------------------------------" << endl;
    cout << "\n\n\t\t\t\t\t\t Enter Your Choice: ";
    int ch;
    cin >> ch;

    if (ch == 1)
    {
        system("cls");
        Sleep(1000);

        string code, pass;
        int user;

        /***************************** ADMIN LOGIN **************************************/

        cout << "\n\t\t\t\t\t\t\t\t----------------------";
        cout << "\n\t\t\t\t\t\t\t\t  >> LOGIN ADMIN <<";
        cout << "\n\t\t\t\t\t\t\t\t----------------------";
        cout << "\n\n\t\t\t\t\t\t\t\tEnter Your User ID: ";
        cin >> user;
        cout << "\n\t\t\t\t\t\t\t\tEnter Your Password: ";
        cin >> pass;
        cout << "\n\t\t\t\t\t\t\t\tEnter Your Code Name: ";
        cin >> code;

        cout << "\n\n\t\t\t\t\t\tPlease Wait While We Verify Your Credentials.";
        for (int i = 0; i < 12; i++)
        {
            cout << ".";
            Sleep(200);
        }

        if (user == admin[0].user_id && pass == admin[0].password && code == admin[0].codeName || user == admin[1].user_id && pass == admin[1].password && code == admin[1].codeName || user == admin[2].user_id && pass == admin[2].password && code == admin[2].codeName)
        {
            cout << "\n\n\t\t\t\t\t\tAccess Granted..You Can Now Go Through As Well As Modify The Database..!! ";
            Sleep(1400);
            cout << "\n\n\t\t\t\t\t\tPlease Wait While We Redirect You To The Dashboard... ";
            Sleep(2000);

            while (true)
            {
                system("cls");
                cout << "\n\t\t\t\t\t\t  -------------------------------------------";
                cout << "\n\t\t\t\t\t\t              ||  DASHBOARD  ||";
                cout << "\n\t\t\t\t\t\t  -------------------------------------------";
                cout << "\n\n\t\t\t\t\t\t\tPress 1 To Register New Data" << endl;
                cout << "\n\t\t\t\t\t\t\tPress 2 to Display Entire Data" << endl;
                cout << "\n\t\t\t\t\t\t\tPress 3 to Search Data" << endl;
                cout << "\n\t\t\t\t\t\t\tPress 4 To Update Data" << endl;
                cout << "\n\t\t\t\t\t\t\tPress 5 To Delete Data" << endl;
                cout << "\n\t\t\t\t\t\t\tPress 6 To Logout" << endl;
                cout << "\n\t\t\t\t\t\t\tPress 7 To Exit" << endl;
                char ch1;
                cout << "\n\n\t\t\t\t\t\t Enter Your Choice: ";
                ch1 = getchar();
                switch (ch1)
                {
                    case '1':
                        new_data();
                        break;

                    case '2':
                        show();
                        break;

                    case '3':
                        system("cls");
                        search();
                        break;

                    case '4':
                        update();
                        break;

                    case '5':
                        del();
                        break;

                    case '6':
                        cout<<"\n\n\t\t\t\t\t\t Logging Out";
                        for (int i = 0; i < 10; i++)
                        {
                            cout << ".";
                            Sleep(200);
                        }
                        goto start;
                        break;

                    case '7':
                        cout<<"\n";
                        exit(0);
                }
            }
        }
        else if (user != admin[0].user_id && pass == admin[0].password && code == admin[0].codeName || user != admin[1].user_id && pass == admin[1].password && code == admin[1].codeName || user != admin[2].user_id && pass == admin[2].password && code == admin[2].codeName)
        {
            cout << "\n\n\t\t\t\t\t\tAccess Denied..!!!! ";
            Sleep(1400);
            cout << "\n\n\t\t\t\t\t\tThe User ID Entered Is Incorrect..! ";
            Sleep(2000);
            goto start;
        }

        else if (user == admin[0].user_id && pass != admin[0].password && code == admin[0].codeName || user == admin[1].user_id && pass != admin[1].password && code == admin[1].codeName || user == admin[2].user_id && pass != admin[2].password && code == admin[2].codeName)
        {
            cout << "\n\n\t\t\t\t\t\tAccess Denied..!!!! ";
            Sleep(1400);
            cout << "\n\n\t\t\t\t\t\tThe Password Entered Is Incorrect..!! ";
            Sleep(2000);
            goto start;
        }
        else if (user == admin[0].user_id && pass == admin[0].password && code != admin[0].codeName || user == admin[1].user_id && pass == admin[1].password && code != admin[1].codeName || user == admin[2].user_id && pass == admin[2].password && code != admin[2].codeName)
        {
            cout << "\n\n\t\t\t\t\t\tAccess Denied..!!!! ";
            Sleep(1400);
            cout << "\n\n\t\t\t\t\t\tThe Code Name Entered Is Incorrect..!! ";
            Sleep(2000);
            goto start;
        }
        else
        {
            cout << "\n\n\t\t\t\t\t\t Invalid Input..! Please Try Again. ";
            Sleep(2000);
            goto start;
        }
    }
    else if (ch == 2)
    {
        string code, pass;
        int user;
        system("cls");

        /***************************** CLIENT LOGIN **************************************/

        cout << "\n\t\t\t\t\t\t\t\t----------------------";
        cout << "\n\t\t\t\t\t\t\t\t  >> LOGIN CLIENT <<";
        cout << "\n\t\t\t\t\t\t\t\t----------------------";
        cout << "\n\n\t\t\t\t\t\t\t\tEnter Your User ID: ";
        cin >> user;
        cout << "\n\t\t\t\t\t\t\t\tEnter Your Password: ";
        cin >> pass;

        cout << "\n\n\t\t\t\t\t\tPlease Wait While We Verify Your Credentials.";
        for (int i = 0; i < 12; i++)
        {
            cout << ".";
            Sleep(200);
        }

        if (user == client[0].c_user_id && pass == client[0].c_password|| user == client[1].c_user_id && pass == client[1].c_password)
        {
            cout << "\n\n\t\t\t\t\t\tAccess Granted..You Can Have A Look Into The Database..!! ";
            Sleep(1400);
            cout << "\n\n\t\t\t\t\t\tPlease Wait While We Redirect You To The Dashboard... ";
            Sleep(2000);
            while (true)
            {
                system("cls");
                cout << "\n\t\t\t\t\t\t  -------------------------------------------";
                cout << "\n\t\t\t\t\t\t              ||  DASHBOARD  ||";
                cout << "\n\t\t\t\t\t\t  -------------------------------------------";
                cout << "\n\n\t\t\t\t\t\t\tPress 1 to Display Entire Data" << endl;
                cout << "\n\t\t\t\t\t\t\tPress 2 to Search Data" << endl;
                cout << "\n\t\t\t\t\t\t\tPress 3 To Logout" << endl;
                cout << "\n\t\t\t\t\t\t\tPress 4 To Exit" << endl;
                char ch1;
                cout << "\n\n\t\t\t\t\t\t Enter Your Choice: ";
                ch1 = getchar();
                switch (ch1)
                {

                case '1':
                    show();
                    break;

                case '2':
                    system("cls");
                    search();
                    break;

                case '3':
                    cout<<"\n\n\t\t\t\t\t\t Logging Out";
                    for (int i = 0; i < 10; i++)
                    {
                        cout << ".";
                        Sleep(200);
                    }
                    goto start;
                    break;

                case '4':
                    cout<<"\n";
                    exit(0);
                }
            }
        }
        else if (user != client[0].c_user_id && pass == client[0].c_password || user!= client[1].c_user_id && pass == client[1].c_password)
        {
            cout << "\n\n\t\t\t\t\t\tAccess Denied..!!!! ";
            Sleep(1400);
            cout << "\n\n\t\t\t\t\t\tThe User ID Entered Is Incorrect..! ";
            Sleep(2000);
            goto start;
        }

        else if (user == client[0].c_user_id && pass != client[0].c_password || user == client[1].c_user_id && pass != client[1].c_password)
        {
            cout << "\n\n\t\t\t\t\t\tAccess Denied..!!!! ";
            Sleep(1400);
            cout << "\n\n\t\t\t\t\t\tThe Password Entered Is Incorrect..!! ";
            Sleep(2000);
            goto start;
        }
        else
        {
            cout << "\n\n\t\t\t\t\t\t Invalid Input..! Please Try Again. ";
            Sleep(2000);
            goto start;
        }
    }
    else if(ch == 3)
    {
        cout<<"\n";
        exit(0);
    }
    else
    {
        cout << "\n\n\t\t\t\t\t\t Invalid Input..! Please Try Again. ";
        Sleep(2500);
        goto start;
    }
    getch();
    return 0;
}