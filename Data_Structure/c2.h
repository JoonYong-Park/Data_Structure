#pragma once

class USER {
private:
    char name[50];
    char gender[50];
    char age[50];
    char phone[50];

public:
    void setUser(USER* A, const char name[50], const char gender[50], const char age[50], const char phone[50]);
    void getUser();

};