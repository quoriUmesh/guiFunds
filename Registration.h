#pragma once
#include "User.h"
class Registration :
    public User
{
    string email;
    string DOB, address, phone, fullName;
public:
    string get_email();
    string get_address();
    string gset_address();
    string get_fullname();
    void set_email(string email);
    void set_address(string address);
    void set_phone(string phone);

    void get_user_id();
    int confirm_registration();
};

