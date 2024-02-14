#include "Registration.h"
#include<iostream>
#include <string.h>
#include<conio.h>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;
using namespace System;
using namespace System::Windows::Forms;


sql::Statement* stmt;
sql::ResultSet* res;
void Registration::set_email(string email) {
    this->email = email;
}
void Registration::set_address(string address) {
    this->address = address;
}
void Registration::set_phone(string phone) {
    this->phone = phone;
}

void Registration::set_dob(string dob) {
    DOB = dob;
}

void Registration::set_name(string name) {
    fullName = name;
}



/*void Registration::get_data()
{
    cout << "enter your username:\t";
    cin >> username;
again:
    cout << "enter your age:\t";
    cin >> age;
    if (age > 0 && age < 100) // check to see for 2 digits
    {
        goto next;
    }
    else
    {
        cout << "age  must be of 2 digits!!\n";
        goto again;
    }
next:
    cout << "enter your email in abc@gmail.com format:\t";
    cin >> email;
    cout << "enter your password:\t";
    char ch = _getch();
    while (ch != 13)
    {//character 13 is enter
        if (ch == 8)
        {
            if (password.size() > 0) {
                password.erase(password.size() - 1, 1);
                cout << "\b \b";
            }
        }
        else {
            password.push_back(ch);
            cout << '*';

        }
        ch = _getch();
    }
    cout << "\n";


enteragain: //label
    cout << "enter your transcation pin(mpin) of four digits: \t";
    cin >> mpin;
    if (mpin > 999 && mpin < 10000) // check to see for 4 digits
    {
        goto pass;
    }
    else
    {
        cout << "mpin must be of 4 digits!!";
        goto enteragain;
    }
pass: //label
    string cage = to_string(age); //int to string cause of database issue
    string cmpin = to_string(mpin);

    string query = "INSERT INTO info (name,age,email,password,mpin) VALUES ('" + username + "','" + cage + "', '" + email + "', '" + password + "','" + cmpin + "')"; // inserts into database
    stmt->execute(query);
}

void Registration::get_user_id()
{

    // selects id from database
    res = stmt->executeQuery("select id  from info where name =  '" + username + "' ");

    while (res->next())
    {
        cout << "\n your ifunds Id is:\t" << res->getInt("id");
    }

}
*/
int Registration::confirm_registration() {
    try {
       
        
        sql::mysql::MySQL_Driver* driver;
        sql::Connection* con;
        sql::PreparedStatement* prep_stmt;

        driver = sql::mysql::get_mysql_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "root", "quoriumesh");
        con->setSchema("ifunds");

        // Create a table if it doesn't exist
       // stmt->execute("CREATE TABLE IF NOT EXISTS info(id int auto_increment, name text(255), DOB date,email varchar(255),addresss varchar(255),username varchar(50),password varchar(255),amount double,mpin int not null, unique KEY(ID), PRIMARY KEY(username)");

        // Prepare and execute SQL insert statement
        prep_stmt = con->prepareStatement("INSERT INTO info (name, DOB, email, address, username, password, mpin, amount) VALUES (?, ?, ?, ?, ?, ? ,? , 0)");
        prep_stmt->setString(1, username);
        prep_stmt->setString(2, DOB);
        prep_stmt->setString(3, email);
        prep_stmt->setString(4, address);
        prep_stmt->setString(5, password);
        prep_stmt->setInt(6, mpin);

        prep_stmt->execute();

        // Cleanup
        delete prep_stmt;
        delete con;

        return 0; // Successful registration
    }
    catch (sql::SQLException& ex) {
        std::cerr << "MySQL Error: " << ex.what() << std::endl;
        MessageBox::Show("A MySQL error occurred: " + gcnew System::String(ex.what()), "MySQL Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    catch (System::Exception^ ex) {
        MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

    return -1; // Error during registration
}
