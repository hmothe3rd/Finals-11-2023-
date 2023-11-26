#include <iostream>
#include <string>
#include <limits>
#include <fstream>
#include <sstream>
#include <cctype> // Include the cctype header for isdigit
#include <algorithm>


using namespace std;

const int maxrow = 20;

bool isValidEmail(const string& email) {
    bool atFound = false;
    bool dotFound = false;

    for (char ch : email) {
        if (ch == '@') {
            atFound = true;
        } else if (ch == '.') {
            dotFound = true;
        }
    }

    return atFound && dotFound;
}

class ANSIFormatter {
public:
    // Text colors
    static const string COLOR_RESET;
    static const string COLOR_BLACK;
    static const string COLOR_RED;
    static const string COLOR_GREEN;
    static const string COLOR_YELLOW;
    static const string COLOR_BLUE;
    static const string COLOR_MAGENTA;
    static const string COLOR_CYAN;
    static const string COLOR_WHITE;
    static const string COLOR_BROWN;
    static const string COLOR_DARK_GRAY;
    static const string COLOR_DARK_BLUE;

    // Background colors
    static const string BG_RESET;
    static const string BG_BLACK;
    static const string BG_RED;
    static const string BG_GREEN;
    static const string BG_YELLOW;
    static const string BG_BLUE;
    static const string BG_MAGENTA;
    static const string BG_CYAN;
    static const string BG_WHITE;
    static const string BG_BROWN;
    static const string BG_DEFAULT;
    static const string BG_DARK_GRAY;
    static const string BG_DARK_BLUE;

    // Apply text color formatting
    static void applyTextColor(const std::string& color) {
        std::cout << color;
    }

    // Apply background color formatting
    static void applyBackgroundColor(const std::string& color) {
        std::cout << color;
    }

    // Reset text and background colors
    static void resetFormatting() {
        std::cout << COLOR_RESET << BG_RESET;
    }
};

// Initialize text color constants
const string ANSIFormatter::COLOR_RESET = "\033[0m";
const string ANSIFormatter::COLOR_BLACK = "\033[30m";
const string ANSIFormatter::COLOR_RED = "\033[31m";
const string ANSIFormatter::COLOR_GREEN = "\033[32m";
const string ANSIFormatter::COLOR_YELLOW = "\033[33m";
const string ANSIFormatter::COLOR_BLUE = "\033[34m";
const string ANSIFormatter::COLOR_MAGENTA = "\033[35m";
const string ANSIFormatter::COLOR_CYAN = "\033[36m";
const string ANSIFormatter::COLOR_WHITE = "\033[37m";
const string ANSIFormatter::COLOR_BROWN = "\033[0;33m"; 
const string ANSIFormatter::COLOR_DARK_GRAY = "\033[90m";
const string ANSIFormatter::COLOR_DARK_BLUE = "\033[34m"; 

// Initialize background color constants
const string ANSIFormatter::BG_RESET = "\033[49m";
const string ANSIFormatter::BG_BLACK = "\033[40m";
const string ANSIFormatter::BG_RED = "\033[41m";
const string ANSIFormatter::BG_GREEN = "\033[42m";
const string ANSIFormatter::BG_YELLOW = "\033[43m";
const string ANSIFormatter::BG_BLUE = "\033[44m";
const string ANSIFormatter::BG_MAGENTA = "\033[45m";
const string ANSIFormatter::BG_CYAN = "\033[46m";
const string ANSIFormatter::BG_WHITE = "\033[47m";
const string ANSIFormatter::BG_BROWN = "\033[48;2;139;69;19m"; 
const string ANSIFormatter::BG_DEFAULT = "\033[49m";
const string ANSIFormatter::BG_DARK_GRAY = "\033[100m"; 
const string ANSIFormatter::BG_DARK_BLUE = "\033[44m";


struct User { // struc for
    string userName;
    string userPass;
    string FnamE;
    string LnamE;
    string emaiL;
    string gendeR;
    string phone;
};

string EmpName[maxrow] = {};
string EmpCP[maxrow] = {};
string EmpPhone[maxrow] = {};
string EmpSkill[maxrow] = {};
string EmpStatus[maxrow] = {};
string EmpGender[maxrow] = {};

void RegisterHead() {
    
    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_GREEN);

    cout << "\t\t\t\t\t\t\t  8888888b.  8888888888 .d8888b.  8888888 .d8888b. 88888888888 8888888888 8888888b.  \n";
    cout << "\t\t\t\t\t\t\t  888   Y88b 888       d88P  Y88b   888  d88P  Y88b    888     888        888   Y88b \n";
    cout << "\t\t\t\t\t\t\t  888    888 888       888    888   888  Y88b.         888     888        888    888 \n";
    cout << "\t\t\t\t\t\t\t  888   d88P 8888888   888          888   \"Y888b.      888     8888888    888   d88P \n";
    cout << "\t\t\t\t\t\t\t  8888888P\"  888       888  88888   888      \"Y88b.    888     888        8888888P\"  \n";
    cout << "\t\t\t\t\t\t\t  888 T88b   888       888    888   888        \"888    888     888        888 T88b   \n";
    cout << "\t\t\t\t\t\t\t  888  T88b  888       Y88b  d88P   888  Y88b  d88P    888     888        888  T88b  \n";
    cout << "\t\t\t\t\t\t\t  888   T88b 8888888888 \"Y8888P88 8888888 \"Y8888P\"     888     8888888888 888   T88b \n";
    cout << "\t\t\t\t\t\t\t                                                                                     \n";
    cout << "\t\t\t\t\t\t\t                                                                                     \n";
    cout << "\t\t\t\t\t\t\t                                                                                     \n" << ANSIFormatter::COLOR_RESET;
}

void printBarangay() {
    
    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_GREEN);

    cout << "\t\t\t\t\t\t         ____                                                    _____  _                _ \n";
    cout << "\t\t\t\t\t\t        |  _ \\                                                  / ____|(_)              (_)\n";
    cout << "\t\t\t\t\t\t        | |_) |  __ _  _ __  __ _  _ __    __ _   __ _  _   _  | (___   _  _ __    __ _  _ \n";
    cout << "\t\t\t\t\t\t        |  _ <  / _` || '__|/ _` || '_ \\  / _` | / _` || | | |  \\___ \\ | || '_ \\  / _` || |\n";
    cout << "\t\t\t\t\t\t        | |_) || (_| || |  | (_| || | | || (_| || (_| || |_| |  ____) || || | | || (_| || |\n";
    cout << "\t\t\t\t\t\t        |____/  \\__,_||_|   \\__,_||_| |_| \\__, | \\__,_| \\__, | |_____/ |_||_| |_| \\__,_||_|\n";
    cout << "\t\t\t\t\t\t                                          __/ |         __/ |                             \n";
    cout << "\t\t\t\t\t\t                                         |___/         |___/                              \n" << ANSIFormatter::COLOR_RESET;
}

void printNAME() {

    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_GREEN);

    cout << "\t\t\t\t\t\t         _    _  ______  _       _____  _____  _   _   _____   _    _            _   _  _____  \n";
    cout << "\t\t\t\t\t\t        | |  | ||  ____|| |     |  __ \\|_   _|| \\ | | / ____| | |  | |    /\\    | \\ | ||  __ \\ \n";
    cout << "\t\t\t\t\t\t        | |__| || |__   | |     | |__) | | |  |  \\| || |  __  | |__| |   /  \\   |  \\| || |  | |\n";
    cout << "\t\t\t\t\t\t        |  __  ||  __|  | |     |  ___/  | |  | . ` || | |_ | |  __  |  / /\\ \\  | . ` || |  | |\n";
    cout << "\t\t\t\t\t\t        | |  | || |____ | |____ | |     _| |_ | |\\  || |__| | | |  | | / ____ \\ | |\\  || |__| |\n";
    cout << "\t\t\t\t\t\t        |_|  |_||______||______||_|    |_____||_| \\_| \\_____| |_|  |_|/_/    \\_\\|_| \\_||_____/ \n" << ANSIFormatter::COLOR_RESET;
}

void CompleteList() {
    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_GREEN);

    cout << "\t\t\t\t\t\t==================================================================================================" << endl;
    cout << "\t\t\t\t\t\t|                                        Infomation                                              |" << endl;
    cout << "\t\t\t\t\t\t==================================================================================================" << endl;
    int counter = 0;
    
    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_BROWN);

    cout << "\t\t\t\t\t\t==============================================================================================================" << endl;
    cout << "\t\t\t\t\t\t|------------------------------------------------------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t\t|    NO   |  BARANGAY NUM  |  GENDER  |            NAME           |       SKILLS        |       CONTACT      |" << endl;
    cout << "\t\t\t\t\t============================================================================================================================" << ANSIFormatter::COLOR_RESET << endl;
    for (int x = 0; x < maxrow; x++) {
        if (EmpCP[x] != "") {
            counter++;
            cout << "\t\t\t\t\t|    " << counter << "    |       " << EmpCP[x] << "       |      " << EmpGender[x]   <<   "        |        " << EmpName[x] << "        |       " << EmpSkill[x] << "        |    " << EmpPhone[x] << "   |" << endl;
        }
    }
}

void SearchSkill(string search) {
    system("CLS");
    
    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_GREEN);

    cout << "\t\t\t\t\t\t============================================================================================================" << endl;
    cout << "\t\t\t\t\t\t|                                            Infomation                                                    |" << endl;
    cout << "\t\t\t\t\t\t============================================================================================================" << endl;
    int counter = 0;

    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_BROWN);

    cout << "\t\t\t\t\t\t============================================================================================================" << endl;
    cout << "\t\t\t\t\t\t|----------------------------------------------------------------------------------------------------------|" << endl;
    cout << "\t\t\t\t\t\t|   NO   |        SKILL         |   BARANGGAY NUM  |             NAME             |         CONTACT        |" << endl;
    cout << "\t\t\t\t\t============================================================================================================================" << ANSIFormatter::COLOR_RESET << endl;
    
    for (int x = 0; x < maxrow; x++) 
    {
        if (EmpCP[x] != "" && EmpSkill[x] == search) 
        {
            counter++;
            cout << "\t\t\t\t\t|    " << counter << "    |       " << EmpCP[x] << "       |      " << EmpGender[x]   <<   "        |        " << EmpName[x] << "        |       " << EmpSkill[x] << "        |    " << EmpPhone[x] << "   |" << endl;
        }
    }

    if (counter == 0) 
    {
        cout << "\n\t==================================================================================================" << endl;
        cout << "\t|                                  SORRY NO SKILL FOUND!!!                                       |" << endl;
        cout << "\t==================================================================================================" << endl;
        
    }
}

void UpdateEmployeeInfo(string search) {
    int index = -1;

    for (int x = 0; x < maxrow; x++) {
        if (EmpCP[x] == search) {
            index = x;
            break;
        }
    }

    if (index == -1) {
        cout << "\t\t\t\t\t\t  Employee with ID " << search << " doesn't exist!" << endl;
        return;
    }

    while (true) {
        int choice;

        
        cout << ANSIFormatter::COLOR_WHITE <<"\t\t\t\t\t\t  **************************************************************************************************" << ANSIFormatter::COLOR_RESET << endl; 
        
        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_BLACK);
        
        cout << "\t\t\t\t\t\t  Enter the field to update for employee with ID " << search << ":" << endl;
        cout << "\t\t\t\t\t\t  1. Name" << endl;
        cout << "\t\t\t\t\t\t  2. Phone" << endl;
        cout << "\t\t\t\t\t\t  3. Skill" << endl;
        cout << "\t\t\t\t\t\t  4. Status" << endl;
        cout << "\t\t\t\t\t\t  5. Gender" << endl;
        cout << "\t\t\t\t\t\t  6. Finish updating" << endl;

        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_BLUE);


        cout << "\t\t\t\t\t\t  Enter your choice (1-6): ";
        cin >> choice;

        cin.ignore(); // Clear the newline character from the input buffer

        switch (choice) {
        case 1:
            cout << "\t\t\t\t\t\t  Enter new Name: ";
            getline(cin, EmpName[index]);
            break;
        case 2:
            cout << "\t\t\t\t\t\t  Enter new Phone: ";
            getline(cin, EmpPhone[index]);
            break;
        case 3:
            cout << "\t\t\t\t\t\t  Enter new Skill: ";
            getline(cin, EmpSkill[index]);
            break;
        case 4:
            cout << "\t\t\t\t\t\t  Enter new Status: ";
            getline(cin, EmpStatus[index]);
            break;
        case 5:
            cout << "\t\t\t\t\t\t  Enter new Gender: ";
            getline(cin, EmpGender[index]);
            break;
        case 6:
            cout << "\t\t\t\t\t\t  Update Successful!" << endl;
            return;
        default:
            cout << "\t\t\t\t\t\t  Invalid choice!" << endl;
            break;
        }

        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_GREEN);

        cout << "\t\t\t\t\t\t  n\t\t\t Confirm\n1. Confirm\n2. Cancel \n\t\t\t";
        int confirmChoice;
        cin >> confirmChoice;

        if (confirmChoice != 1) {
            // User chose to cancel, go back to field selection
            cin.ignore(); // Clear the newline character from the input buffer
            continue;
        }
    }
}

void DeleteRecord(string search) {
    int counter = 0;
    for (int x = 0; x < maxrow; x++) {
        if (EmpCP[x] == search) {
            counter++;

            EmpCP[x] = "";
            EmpName[x] = "";
            EmpStatus[x] = "";
            cout << "Deleted user" << endl;
            break;
        }
    }
    if (counter == 0) {
        cout << "Skill worker does not exist!";
    }
}

void SaveFile() {
    ofstream myfile;
    myfile.open("C:\\Workings.txt");

    for (int x = 0; x < maxrow; x++) {
        if (EmpCP[x] != "") {
            myfile << EmpCP[x] << "|" << EmpGender[x] << "|" << EmpName[x] << "|" << EmpSkill[x] << "|" << EmpPhone[x] << endl;
        }
    }

    myfile.close();
}

void OpenFile() {
    
    string line;

    ifstream myfile("C:\\Workings.txt");
    if (myfile.is_open()) {
        int x = 0;
        while (getline(myfile, line)) 
        {
            stringstream ss(line);
            getline(ss, EmpCP[x], '|');
            getline(ss, EmpGender[x], '|');
            getline(ss, EmpName[x], '|');
            getline(ss, EmpSkill[x], '|');
            getline(ss, EmpPhone[x], '|');
            x++;
        }
    } else {
        cout << "Unable to open the file!" << endl;
    }
}

void AddRecord() {
    string name, empno, skill, contact, gender;

    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_GREEN);

    cout << "\t\t\t\t\t\t  ==================================================================================================" << endl;
    cout << "\t\t\t\t\t\t  |                                        HELPING HAND                                            |" << endl;
    cout << "\t\t\t\t\t\t  ==================================================================================================" << ANSIFormatter::COLOR_RESET << endl;
    cout << ANSIFormatter::COLOR_WHITE <<"\t\t\t\t\t\t  **************************************************************************************************" << ANSIFormatter::COLOR_RESET << endl; 

    
    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_CYAN);

    cout << "\t\t\t\t\t\t\t\t  Full Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "\t\t\t\t\t\t\t\t  Baranggay Provided Number: ";
    getline(cin, empno);

    cout << "\t\t\t\t\t\t\t\t  Gender: ";
    getline(cin, gender);

    cout << "\t\t\t\t\t\t\t\t  Cellphone Number: ";
    getline(cin, contact);

    cout << "\t\t\t\t\t\t\t\t  Skill: ";
    getline(cin, skill);

    for (int x = 0; x < maxrow; x++) {
        if (EmpCP[x] == "") {
            EmpCP[x] = empno;
            EmpName[x] = name;
            EmpSkill[x] = skill;
            EmpPhone[x] = contact;
           
            EmpGender[x] = gender;
            break;
        }
    }
}

void SaveUserRecord(const User& user) { // user login saver
    ofstream output("userRecord.txt", ios::app);
    if (output.is_open()) {
        output << user.userName << " " << user.userPass << " " << user.FnamE << " " << user.LnamE << " " << user.emaiL << " " << user.gendeR << " " << user.phone << endl;
        output.close();
    }
    else {
        cerr << "Error: Could not open record file for writing." << endl;
    }
}

void DisplayUserRecord(const string& email) { //showing record
    ifstream input("userRecord.txt", ios::app);
    if (input.is_open()) {
        string storedUserName, storedUserPass, storedFnamE, storedLnamE, storedEmaiL, storedGendeR;
        int storedPhone;

        while (input >> storedUserName >> storedUserPass >> storedFnamE >> storedLnamE >> storedEmaiL >> storedGendeR >> storedPhone) {
            if (email == storedEmaiL) {
                cout << "Username: " << storedUserName << endl;
                cout << "Password: " << storedUserPass << endl;
                cout << "First Name: " << storedFnamE << endl;
                cout << "Last Name: " << storedLnamE << endl;
                cout << "Email: " << storedEmaiL << endl;
                cout << "Gender: " << storedGendeR << endl;
                cout << "Phone Number: " << storedPhone << endl;
                break;
            }
        }
        input.close();
    }
    else {
        cerr << "Error: Could not open record file for reading." << endl;
    }
}

bool AdminLogin() {
    const string adminUsername = "1";
    const string adminPasswordHash = "12";  // Hashed password goes here
    string enteredUsername, enteredPassword;
    string empCP;
    string empSkill;
    string empName;
    string empStatus;
    int option;

    system("cls");

here:

    OpenFile();

    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_MAGENTA);

    cout << "\t\t\t\t\t\t  |================================================================================================|" << endl;
    cout << "\t\t\t\t\t\t  |                                      Enter admin username:                                      " << endl;
    cout << "\t\t\t\t\t\t  |================================================================================================|" << ANSIFormatter::COLOR_RESET << endl;
    cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t\t\t  >> ";
    cin >> enteredUsername;

    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_MAGENTA);

    cout << "\t\t\t\t\t\t  |================================================================================================|" << endl;
    cout << "\t\t\t\t\t\t  |                                      Enter admin password:                                      " << endl;
    cout << "\t\t\t\t\t\t  |================================================================================================|" << ANSIFormatter::COLOR_RESET << endl;
    cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t\t\t  >> ";
    cin >> enteredPassword;

    system("cls");

    // Check if entered username and password match the admin credentials
    if (enteredUsername == adminUsername && enteredPassword == adminPasswordHash) 
    {
        
        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_GREEN);

        cout << "\t\t\t\t\t\t  ==================================================================================================" << endl;
        cout << "\t\t\t\t\t\t  |                                                                                                |" << endl;
        cout << "\t\t\t\t\t\t  |                                   ADMIN LOGIN SUCCESSFUL !!                                    |" << endl;
        cout << "\t\t\t\t\t\t  |                                                                                                |" << endl;
        cout << "\t\t\t\t\t\t  ==================================================================================================" << ANSIFormatter::COLOR_RESET << endl;
        cout << ANSIFormatter::COLOR_WHITE <<"\t\t\t\t\t\t  **************************************************************************************************" << ANSIFormatter::COLOR_RESET << endl; 

        // Display admin-specific options

        
        do 
        {
                        
            ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_GREEN);

            cout << "\t\t\t\t\t\t  ==================================================================================================" << endl;
            cout << "\t\t\t\t\t\t  |                                        HELPING HAND                                            |" << endl;
            cout << "\t\t\t\t\t\t  ==================================================================================================" << ANSIFormatter::COLOR_RESET << endl;
            
            ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_BROWN);
            cout << "\t\t\t\t\t\t  ==================================================================================================" << endl;
            cout << "\t\t\t\t\t\t  |\t\t\t\t[1] Add a Skilled Worker \t\t\t\t\t   |" << endl;
            cout << "\t\t\t\t\t\t  |\t\t\t\t[2] Update the Status \t\t\t\t\t\t   |" << endl;
            cout << "\t\t\t\t\t\t  |\t\t\t\t[3] Delete Record \t\t\t\t\t\t   |" << endl;
            cout << "\t\t\t\t\t\t  |\t\t\t\t[4] Show Complete Record \t\t\t\t\t   |" << endl;
            cout << "\t\t\t\t\t\t  |\t\t\t\t[5] Save and Exit \t\t\t\t\t\t   |" << endl;
            cout << "\t\t\t\t\t\t  ==================================================================================================" << ANSIFormatter::COLOR_RESET << endl;
            cout << ANSIFormatter::COLOR_WHITE <<"\t\t\t\t\t\t  **************************************************************************************************" << ANSIFormatter::COLOR_RESET << endl; 

            ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_BROWN);
            cout << "\t\t\t\t\t  \t \t\t\t\tChoose option: "; //        cout << ANSIFormatter::COLOR_YELLOW << "\t>> ";
            cin >> option;

            switch (option) 
            {
                case 1:
                AddRecord();
                system("CLS");
                break;
                
                case 2:
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
                cout << "\t\t\t\t\t\t  Enter baranggay number to update status: ";
                getline(cin, empCP);
                UpdateEmployeeInfo(empCP);
                system("CLS");
                break;
                
                case 3:
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
                cout << ANSIFormatter::COLOR_RED<< "\t\t\t\t\t\t  Enter baranggay number to delete record: ";
                getline(cin, empCP);
                DeleteRecord(empCP);
                system("CLS");
                break;
                
                case 4:
                system("CLS");
                CompleteList();
                continue;
                
                case 5:
                system("CLS");
                SaveFile();
                return true; // Go back
                
                default: // put color
                if (cin.fail()) 
                {
                    // Handle invalid input
                    cin.clear(); // Clear the fail state
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                    system("CLS");

                    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_RED);

                    cout << "\t\t\t\t\t\t  _________________________________________" << endl;
                    cout << "\t\t\t\t\t\t  |                                       |" << endl;
                    cout << "\t\t\t\t\t\t  |  Invalid option. Please choose again. |" << endl;
                    cout << "\t\t\t\t\t\t  |_______________________________________|" << endl;
                }       
                continue; // Restart the loop
            }   
        }while (true);
    }
    while (enteredUsername != adminUsername || enteredPassword != adminPasswordHash)
    {
        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_RED);

        cout << "\t\t\t\t\t\t       _________________________________________" << endl;
        cout << "\t\t\t\t\t\t       |                                       |" << endl;
        cout << "\t\t\t\t\t\t       |           Admin login failed!         |" << endl;
        cout << "\t\t\t\t\t\t       |_______________________________________|" << endl;
        goto here;
    }


    return true; 
}

bool UserLogin(const string& userName, const string& userPass) {
    ifstream input("userRecord.txt", ios::app);
    if (input.is_open()) {
        string storedUserName, storedUserPass;
        while (input >> storedUserName >> storedUserPass) {
            if (userName == storedUserName && userPass == storedUserPass) {
                input.close();
                return true;
            }
        }
        input.close();
    }
    return false;
}

void EnDing() {
    
    system("cls");
    
    cout << ANSIFormatter::COLOR_RESET << " " << endl; // Make it bigger Like the opening

    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_CYAN);

    cout << "\t\t\t\t\t\t\t       _____     _   _       _        _   _        _  __          __   __    U  ___ u    _   _         \n";
    cout << "\t\t\t\t\t\t\t      |_ \" _|   |'| |'|  U  /\"\\  u   | \\ |\"|      |\"|/ /          \\ \\ / /     \\/\"_ \\/ U |\"|u| |        \n";
    cout << "\t\t\t\t\t\t\t        | |    /| |_| |\\  \\/ _ \\/   <|  \\| |>     | ' /            \\ V /      | | | |  \\| |\\| |        \n";
    cout << "\t\t\t\t\t\t\t       /| |\\   U|  _  |u  / ___ \\   U| |\\  |u   U/| . \\u         U_|\"|_u .-,_| |_| |   | |_| |        \n";
    cout << "\t\t\t\t\t\t\t      u |_|U    |_| |_|  /_/   \\_\\   |_| \\_|      |_|\u2022\\            |_|    \\_)-\\___/   <<\\___/         \n";
    cout << "\t\t\t\t\t\t\t      _// \\\\_   //   \\\\   \\\\    >>   ||   \\\\,-. ,-,>> \\\\,-.     .-,//|(_        \\\\    (__) )(          \n";
    cout << "\t\t\t\t\t\t\t     (__) (__) (_\") (\"_) (__)  (__)  (_\")  (_/   \\.)   (_/       \\_) (__)      (__)       (__)         \n";

    cout << "\t\t\t\t\t\t\t       _____     U  ___ u    ____            _   _    ____                     _   _        ____     \n";
    cout << "\t\t\t\t\t\t\t      |\" ___|     \\/\"_ \\/ U |  _\"\\ u      U |\"u| |  / __\"| u       ___       | \\ |\"|    U /\"___|u   \n";
    cout << "\t\t\t\t\t\t\t     U| |_  u     | | | |  \\| |_) |/       \\| |\\| | <\\___ \\/       |\"_|     <|  \\| |>   \\| |  _ /   \n";
    cout << "\t\t\t\t\t\t\t     \\|  _|/  .-,_| |_| |   |  _ <          | |_| |  u___) |        | |      U| |\\  |u    | |_| |    \n";
    cout << "\t\t\t\t\t\t\t      |_|      \\_)-\\___/    |_| \\_\\        <<\\___/   |____/>>     U/| |u     |_| \\_|      \\____|    \n";
    cout << "\t\t\t\t\t\t\t      )(\\,-        \\\\      //   \\\\_)     (__) )(     )(  (__) .-,_|___|_,-.  ||   \\,-.   _)(|_     \n";
    cout << "\t\t\t\t\t\t\t     (__)(_/       (__)    (__)  (__)         (__)   (__)       \\_)-' '-(_/   (_\")  (_/   (__)__)    \n";

    cout << "\t\t\t\t\t\t\t           ____                                                    _____  _                _ \n";
    cout << "\t\t\t\t\t\t\t          |  _ \\                                                  / ____|(_)              (_)\n";
    cout << "\t\t\t\t\t\t\t          | |_) |  __ _  _ __  __ _  _ __    __ _   __ _  _   _  | (___   _  _ __    __ _  _ \n";
    cout << "\t\t\t\t\t\t\t          |  _ <  / _` || '__|/ _` || '_ \\  / _` | / _` || | | |  \\___ \\ | || '_ \\  / _` || |\n";
    cout << "\t\t\t\t\t\t\t          | |_) || (_| || |  | (_| || | | || (_| || (_| || |_| |  ____) || || | | || (_| || |\n";
    cout << "\t\t\t\t\t\t\t          |____/  \\__,_||_|   \\__,_||_| |_| \\__, | \\__,_| \\__, | |_____/ |_||_| |_| \\__,_||_|\n";
    cout << "\t\t\t\t\t\t\t                                             __/ |         __/ |                             \n";
    cout << "\t\t\t\t\t\t\t                                            |___/         |___/                              \n" << ANSIFormatter::COLOR_RESET;
    exit(0);
}

void Login() {
    string response;
    string loginName, loginPass;
    int loginAttempts = 0;
    User user; // Assuming User is a class or struct representing user information

    // Assuming these variables are used for employee information
    string username, password, empCP, empSkill, empName, empStatus, storedUserName, storedUserPass;

    do {

        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_CYAN);

        cout << "\t\t\t\t\t\t\t\t\t       ________________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t\t       |                              |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t       |  Do you want to Login (Y/N): |" << endl; //login as user. Can you find a way so that number can be readed
        cout << "\t\t\t\t\t\t\t\t\t       |______________________________|" << ANSIFormatter::COLOR_RESET << endl;
        cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t\t>> ";
        cin >> response;

        if (response == "Y" || response == "y") 
        {
            ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_CYAN);

            cout << "\t\t\t\t\t\t\t\t\t       ___________________________" << endl;
            cout << "\t\t\t\t\t\t\t\t\t       |                         |" << endl;
            cout << "\t\t\t\t\t\t\t\t\t       |     Enter username:     |" << endl;
            cout << "\t\t\t\t\t\t\t\t\t       |_________________________|" << ANSIFormatter::COLOR_RESET << endl;
            cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t\t>> ";
            cin >> loginName;

            ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_CYAN);

            cout << "\t\t\t\t\t\t\t\t\t       ___________________________" << endl;
            cout << "\t\t\t\t\t\t\t\t\t       |                         |" << endl;
            cout << "\t\t\t\t\t\t\t\t\t       |      Enter password:    |" << endl;
            cout << "\t\t\t\t\t\t\t\t\t       |_________________________|" << ANSIFormatter::COLOR_RESET << endl;
            cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t\t>> ";
            cin >> loginPass;
            
            system("cls");
            
            if (UserLogin(loginName, loginPass))
            {
                ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_GREEN);

                cout << "\t\t\t\t\t\t      _______________________________" << endl;
                cout << "\t\t\t\t\t\t      |                             |" << endl;
                cout << "\t\t\t\t\t\t      |       Login successful:     |" << endl;
                cout << "\t\t\t\t\t\t      |_____________________________|" << ANSIFormatter::COLOR_RESET << endl;
                cout << ANSIFormatter::COLOR_WHITE <<"\t\t\t\t\t\t      ********************************" << ANSIFormatter::COLOR_RESET << endl; 


                user.userName = loginName;
                break;  
            }

            else
            {
                cout << " " << endl;
                cout << ANSIFormatter::COLOR_RED << "\t\t\t\t\t\t\t\t\tLogin failed!" << ANSIFormatter::COLOR_RESET << endl; // red color
                loginAttempts++;

                if (loginAttempts >= 4)
                {
                    cout << ANSIFormatter::COLOR_DARK_GRAY << "\t\t\t\t\t\t\t\t\tToo many login attempts. " << endl; // Gray

                    cout << "\t\t\t\t\t\t\t\t       _______________________________________________" << endl;
                    cout << "\t\t\t\t\t\t\t\t       |                                             |" << endl;
                    cout << "\t\t\t\t\t\t\t\t       |      Do you want to continue [Y] or [N]     |" << endl;
                    cout << "\t\t\t\t\t\t\t\t       |_____________________________________________|" << ANSIFormatter::COLOR_RESET << endl;
                    cout << ANSIFormatter::COLOR_BLUE << "\t\t\t\t\t\t\t\t\t(Y/N): ";
                    cin >> response;

                    system("cls");

                    if (response == "N" || response == "n") 
                    {
                        cout << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_DARK_GRAY << "\t\t\t\t\t\t\t\t       _________________________________________" << endl;
                        cout << "\t\t\t\t\t\t\t\t       |                                       |" << endl;
                        cout << "\t\t\t\t\t\t\t\t       |      Do you want to exit probram?     |" << endl;
                        cout << "\t\t\t\t\t\t\t\t       |_______________________________________|" << ANSIFormatter::COLOR_RESET << endl;
                        cout << ANSIFormatter::COLOR_BLUE << "\t\t\t\t\t\t\t\t\t(Y/N): ";
                        cin >> response;

                        if (response == "Y" || response == "y")
                        {
                            EnDing();
                        }

                        else(response == "N" || response == "n");
                        {
                           continue;
                           system("cls");
                        }
                    }
                    
                    else (response == "Y" || response == "y");
                    {
                        // Reset login attempts
                        loginAttempts = 0;
                    }
                }
            }

        } 
        
        else 
        {
            if (response == "N" || response == "n") {
                EnDing();
            }
            else
            {
            cout << " " << endl;
            cout << ANSIFormatter::COLOR_RED << "\t\t\t\t\t\t\t\t  \tInvalid response. Login failed! try again " << ANSIFormatter::COLOR_RESET << endl;
            }
            
        }
    } while (true);
}

bool RegistrationProcess() 
{
    User user;

        RegisterHead();
        
        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_RED);

        cout << "\t\t\t\t\t\t\t\t       Note!!: Do not add Numbers and sysmbols." << endl; // see if this is true
        
        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_CYAN);

        cout << "\t\t\t\t\t\t\t\t       ___________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t       |                         |" << endl;
        cout << "\t\t\t\t\t\t\t\t       |     Enter username:     |" << endl;
        cout << "\t\t\t\t\t\t\t\t       |_________________________|" << ANSIFormatter::COLOR_RESET << endl;
        cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t>> ";
        
        cin >> user.userName;

        while (user.userName.length() < 6) 
        {
            system("cls");

            RegisterHead();

            ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_RED);
            
            cout << " " << endl;
            cout << "\t\t\t\t\t\t*******************************************************************************************\n";
            cout << "\t\t\t\t\t\t*                                   Invalid Input!!                                       *\n";
            cout << "\t\t\t\t\t\t*                                                                                         *\n";
            cout << "\t\t\t\t\t\t*" << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_GREEN << "\t\t\t    Username must be at least 6 characters." << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_RED << "\t\t\t  *\n";
            cout << "\t\t\t\t\t\t*" << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_GREEN << "\t\t\t   ========================================" << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_RED << "\t\t\t  *\n";                       
            cout << "\t\t\t\t\t\t*******************************************************************************************\n";

            ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_RED);

            cout << "\t\t\t\t\t\t\t\t       Note!!: Do not add Numbers and sysmbols." << endl; // see if this is true
            
            ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_CYAN);
 
            cout << "\t\t\t\t\t\t\t\t       ___________________________" << endl;
            cout << "\t\t\t\t\t\t\t\t       |                         |" << endl;
            cout << "\t\t\t\t\t\t\t\t       |     Enter username:     |" << endl;
            cout << "\t\t\t\t\t\t\t\t       |_________________________|" << ANSIFormatter::COLOR_RESET << endl;
            cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t>> ";
            
            cin >> user.userName;
        }
        
        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_RED);

        cout << "\t\t\t\t\t\t\t\t       Note!!: Do not add Numbers and sysmbols." << endl; // see if this is true
        
        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_CYAN);

        cout << "\t\t\t\t\t\t\t\t       ___________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t       |                         |" << endl;
        cout << "\t\t\t\t\t\t\t\t       |      Enter password:    |" << endl;
        cout << "\t\t\t\t\t\t\t\t       |_________________________|" << ANSIFormatter::COLOR_RESET << endl;
        cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t>> ";
        
        cin >> user.userPass;

        while (user.userPass.length() < 8) 
        {
            system("cls");
            
            RegisterHead();

            ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_RED);

            cout << " " << endl;
            cout << "\t\t\t\t\t\t*******************************************************************************************\n";
            cout << "\t\t\t\t\t\t*                                   Invalid Input!!                                       *\n";
            cout << "\t\t\t\t\t\t*                                                                                         *\n";
            cout << "\t\t\t\t\t\t*" << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_GREEN << "\t\t\t    Password must be at least 8 characters." << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_RED << "\t\t\t  *\n";
            cout << "\t\t\t\t\t\t*" << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_GREEN << "\t\t\t   ========================================" << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_RED << "\t\t\t  *\n";                       
            cout << "\t\t\t\t\t\t*******************************************************************************************\n";
            
            ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_RED);

            cout << "\t\t\t\t\t\t\t\t       Note!!: Do not add Numbers and sysmbols." << endl; // see if this is true
            
            ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_CYAN);

            cout << "\t\t\t\t\t\t\t\t       ___________________________" << endl;
            cout << "\t\t\t\t\t\t\t\t       |                         |" << endl;
            cout << "\t\t\t\t\t\t\t\t       |      Enter password:    |" << endl;
            cout << "\t\t\t\t\t\t\t\t       |_________________________|" << ANSIFormatter::COLOR_RESET << endl;
            cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t>> ";
            
            cin >> user.userPass;
        }
            
        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_CYAN);

        cout << "\t\t\t\t\t\t\t\t       ___________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t       |                         |" << endl;
        cout << "\t\t\t\t\t\t\t\t       |    Enter First name:    |" << endl;
        cout << "\t\t\t\t\t\t\t\t       |_________________________|" << ANSIFormatter::COLOR_RESET << endl;
        cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t>> ";
        
        cin >> user.FnamE;

        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_CYAN);

        cout << "\t\t\t\t\t\t\t\t       ___________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t       |                         |" << endl;
        cout << "\t\t\t\t\t\t\t\t       |     Enter Last name:    |" << endl;
        cout << "\t\t\t\t\t\t\t\t       |_________________________|" << ANSIFormatter::COLOR_RESET << endl;
        cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t>> ";
        
        cin >> user.LnamE;

        do
        {        
            ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_CYAN);

            cout << "\t\t\t\t\t\t\t\t       ___________________________" << endl;
            cout << "\t\t\t\t\t\t\t\t       |                         |" << endl;
            cout << "\t\t\t\t\t\t\t\t       |       Enter Email:      |" << endl;
            cout << "\t\t\t\t\t\t\t\t       |_________________________|" << ANSIFormatter::COLOR_RESET << endl;
            cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t>> ";
            
            cin >> user.emaiL;

            if (!isValidEmail(user.emaiL)) 
            {
                system("cls");

                RegisterHead();

                ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_RED);

                cout << " " << endl;
                cout << "\t\t\t\t\t\t*******************************************************************************************\n";
                cout << "\t\t\t\t\t\t*                                   Invalid Input!!                                       *\n";
                cout << "\t\t\t\t\t\t*                                                                                         *\n";
                cout << "\t\t\t\t\t\t*" << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_GREEN << "\t\t\t          Example:snaknak44@Gmail.com.     " << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_RED << "\t\t\t  *\n";
                cout << "\t\t\t\t\t\t*" << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_GREEN << "\t\t\t   ========================================" << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_RED << "\t\t\t  *\n";                       
                cout << "\t\t\t\t\t\t*******************************************************************************************\n";
            }

        } while (!isValidEmail(user.emaiL));

        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_CYAN);
        
        cout << "\t\t\t\t\t\t\t\t       ___________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t       |                         |" << endl;
        cout << "\t\t\t\t\t\t\t\t       |       Enter Gender:     |" << endl;
        cout << "\t\t\t\t\t\t\t\t       |_________________________|" << ANSIFormatter::COLOR_RESET << endl;
        cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t>> ";
        
        cin >> user.gendeR;

        while (user.gendeR != "Male" && user.gendeR != "male" && user.gendeR != "MALE" && user.gendeR != "Female" && user.gendeR != "female" && user.gendeR != "FEMALE") 
        {
            system("cls");

            RegisterHead();

            ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_RED);

            cout << " " << endl;
            cout << "\t\t\t\t\t\t*******************************************************************************************\n";
            cout << "\t\t\t\t\t\t*                                   Invalid Input!!                                       *\n";
            cout << "\t\t\t\t\t\t*                                                                                         *\n";
            cout << "\t\t\t\t\t\t*" << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_GREEN << "\t\t\t           Enter only Male or Female       " << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_RED << "\t\t\t  *\n";
            cout << "\t\t\t\t\t\t*" << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_GREEN << "\t\t\t   ========================================" << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_RED << "\t\t\t  *\n";                       
            cout << "\t\t\t\t\t\t*******************************************************************************************\n";
            
            ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_CYAN);

            cout << "\t\t\t\t\t\t\t\t       ___________________________" << endl;
            cout << "\t\t\t\t\t\t\t\t       |                         |" << endl;
            cout << "\t\t\t\t\t\t\t\t       |       Enter Gender:     |" << endl;
            cout << "\t\t\t\t\t\t\t\t       |_________________________|" << ANSIFormatter::COLOR_RESET << endl;
            cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t>> ";
            
            cin >> user.gendeR;
        }

    
   
    bool validPhoneNumber = false;

    while (!validPhoneNumber) {

        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_CYAN);

        cout << "\t\t\t\t\t\t\t\t       ___________________________________" << endl;
        cout << "\t\t\t\t\t\t\t\t       |                                 |" << endl;
        cout << "\t\t\t\t\t\t\t\t       |     Enter Phone Number (10):    |" << endl;
        cout << "\t\t\t\t\t\t\t\t       |_________________________________|" << ANSIFormatter::COLOR_RESET << endl;
        cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t>> ";

        cin >> user.phone;

        // Check if the input is a valid integer
        if (user.phone.length() != 10 || user.phone[0] != '9' || !std::all_of(user.phone.begin(), user.phone.end(), ::isdigit))
        {
            system("cls");
            
            RegisterHead();

            ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_RED);

            cout << " " << endl;
            cout << "\t\t\t\t\t\t*******************************************************************************************\n";
            cout << "\t\t\t\t\t\t*                                   Invalid Input!!                                       *\n";
            cout << "\t\t\t\t\t\t*                                                                                         *\n";
            cout << "\t\t\t\t\t\t*" << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_GREEN << "\t\t\t       Enter 10-digit starting with '9'    " << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_RED << "\t\t\t  *\n";
            cout << "\t\t\t\t\t\t*" << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_GREEN << "\t\t\t   ========================================" << ANSIFormatter::COLOR_RESET << ANSIFormatter::COLOR_RED << "\t\t\t  *\n";                       
            cout << "\t\t\t\t\t\t*******************************************************************************************\n";
        } 
       
        else 
        {
        validPhoneNumber = true;
        }

        SaveUserRecord(user);
    }
        
    return true;
} 

void registrationComplete() {
    
    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_GREEN);

    cout << " " << endl;
    cout << "\t\t\t\t\t\t\t       ___________________________" << endl;
    cout << "\t\t\t\t\t\t\t       |                         |" << endl;
    cout << "\t\t\t\t\t\t\t       |  Registration complete! |" << endl;
    cout << "\t\t\t\t\t\t\t       |_________________________|" << ANSIFormatter::COLOR_RESET << endl;
    cout << ANSIFormatter::COLOR_WHITE << "\t\t\t\t\t\t\t      ***************************** " << ANSIFormatter::COLOR_RESET << endl;
}
    
void BrowseCategories() {
    cout << ANSIFormatter::COLOR_GREEN << "\t\t\t\t\t\t==================================================================================================" << endl;
    cout << "\t\t\t\t\t\t|                                        HELPING HAND                                            |" << endl;
    cout << "\t\t\t\t\t\t==================================================================================================" << endl;

    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_RED);

    cout << "\t\t\t\t\t\t==================================================================================================" << endl;
    cout << "\t\t\t\t\t\t|     SKILLS:      |                  (ISULAT ANG WASTONG BAYBAY NG KATEGORYA)                   |" << endl;
    cout << "\t\t\t\t\t\t|   CATEGORIES:    |                (WRITE THE RIGHT SPELLING OF THE CATEGORIES)                 |" << endl;
    cout << "\t\t\t\t\t\t==================================================================================================" << endl;

    cout << ANSIFormatter::COLOR_WHITE <<"\t\t\t\t\t\t**************************************************************************************************" << ANSIFormatter::COLOR_RESET << endl; 
    
    ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_BROWN);

    cout << "\t\t\t\t\t\t==================================================================================================" << endl;
    cout << "\t\t\t\t\t\t|                                                                                                |" << endl;
    cout << "\t\t\t\t\t\t|              CONSTRUCTION               PLUMBING                      MASONRY                  |" << endl;
    cout << "\t\t\t\t\t\t|                                                                                                |" << endl;
    cout << "\t\t\t\t\t\t|               CARPENTRY                ELECTRICIAN                ELECTRONIC REPAIR            |" << endl;
    cout << "\t\t\t\t\t\t|                                                                                                |" << endl;
    cout << "\t\t\t\t\t\t|                TAILOR                   MECHANIC                    SERVICE CREW               |" << endl;
    cout << "\t\t\t\t\t\t|                                                                                                |" << endl;
    cout << "\t\t\t\t\t\t|                DRIVER                   OPERATOR                     DESK JOB                  |" << endl;
    cout << "\t\t\t\t\t\t|                                                                                                |" << endl;
    cout << "\t\t\t\t\t\t|================================================================================================|" << endl;
    cout << ANSIFormatter::COLOR_WHITE <<"\t\t\t\t\t\t**************************************************************************************************" << ANSIFormatter::COLOR_RESET << endl; 
}

int main() {
    string empCP;
    string empSkill;
    string empName;
    string empGender;
    char category;
   
    OpenFile(); // anable to open file is a nucience try to change location.
    char process;

    bool loggedIn = false;  // Flag to check if the user is logged in

    // Login Process
    do
    {   
        
        // center the typing area.
        printBarangay();
        printNAME();
        
        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_BROWN);
        
        cout << "\t\t\t\t\t\t  ==================================================================================================" << endl;
        cout << "\t\t\t\t\t\t  |                                                                                                |" << endl;
        cout << "\t\t\t\t\t\t  |                     Login: Press Letter/Pindutin ang Letrang [ A | a ]                         |" << endl;
        cout << "\t\t\t\t\t\t  |                                                                                                |" << endl;
        cout << "\t\t\t\t\t\t  |                   Register: Press Letter/Pindutin ang Letrang [ B | b ]                        |" << endl;
        cout << "\t\t\t\t\t\t  |                                                                                                |" << endl;
        cout << "\t\t\t\t\t\t  |                                  To Login as ADMIN [ C | c ]                                   |" << endl;
        cout << "\t\t\t\t\t\t  |                                                                                                |" << endl;
        cout << "\t\t\t\t\t\t  |                                       To exit  [ D | d ]                                       |" << endl;
        cout << "\t\t\t\t\t\t  |                                                                                                |" << endl;
        cout << "\t\t\t\t\t\t  ==================================================================================================" << ANSIFormatter::COLOR_RESET << endl;

        cout << ANSIFormatter::COLOR_WHITE <<"\t\t\t\t\t\t  **************************************************************************************************" << ANSIFormatter::COLOR_RESET << endl; 

        cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\t\t\t  >> ";
        cin >> process; 

        switch (process)
        {
        case 'A':
        case 'a':
            system("CLS");
            Login();
            loggedIn = true;  // Set the flag to true after successful login
            break;
        
        case 'B':
        case 'b':
            system("CLS");
            RegistrationProcess();
            system("cls");
            registrationComplete();
            continue;
        
        case 'C':
        case 'c':
            system("CLS");
            AdminLogin();
            system("CLS");
            continue;
        
        case 'D':
        case 'd':
            EnDing();
            continue;
        
        default:
            system("CLS");
            
            cout << ANSIFormatter::COLOR_RED << "\t\t\t\t\t\tInvalid input. Please enter Only [R] [L] [C] [D]." << ANSIFormatter::COLOR_RESET << endl; 
            continue;

        }
    } while (!loggedIn);  // Continue the loop until the user is logged in


    // Main Program

    do {
        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_GREEN);

        cout << "\t\t\t\t\t============================================================================================================================" << endl;
        cout << "\t\t\t\t\t|                                                    HELPING HAND                                                          |" << endl;
        cout << "\t\t\t\t\t============================================================================================================================" << endl;

        ANSIFormatter::applyTextColor(ANSIFormatter::COLOR_BROWN);

        cout << "\t\t\t\t\t\t==================================================================================================" << endl;
        cout << "\t\t\t\t\t\t| \t\t\t\t\t\t\t\t\t\t\t\t |\n\t\t\t\t\t\t|           Browse Categories click [A/a]" << "     Display all Freelance Skilled Workers [B/b]        |" << "\n\t\t\t\t\t\t| \t\t\t\t\t  \t\t\t\t\t\t\t |" << "\n\t\t\t\t\t\t| \t\t\t\t\t    Menu [E/e] \t\t\t\t\t\t |" << endl;
        cout << "\t\t\t\t\t\t==================================================================================================\n" << ANSIFormatter::COLOR_RESET;
        cout << ANSIFormatter::COLOR_WHITE <<"\t\t\t\t\t\t**************************************************************************************************" << ANSIFormatter::COLOR_RESET << endl; 

        cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\t\tChoose option >> ";
        cin >> category;

        switch (category) 
        {
        case 'A':
        case 'a':
            system("CLS");
            BrowseCategories();
            cin.ignore();
            cout << ANSIFormatter::COLOR_YELLOW << "\t\t\t\t\t\t\t\tEnter skill to search: ";
            getline(cin, empSkill);
            SearchSkill(empSkill);
            continue;

        case 'B':
        case 'b':
            system("CLS");
            CompleteList(); // Assuming this function displays all freelance skilled workers
            continue;

        case 'E':
        case 'e':
            system("CLS");
            main();
            return 0;

        default:
            system("CLS");
            cout << ANSIFormatter::COLOR_RED << "\t\t\t\t\t\tInvalid option. Please enter Only [A] [B] [E]." << ANSIFormatter::COLOR_RESET << endl; 
            continue;
        }
    } while (true);

    return 0;
}   