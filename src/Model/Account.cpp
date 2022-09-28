#include "Account.h"

namespace PM_Model{
    const string SEPARATOR = " | ";

    int Account::getId() {
        return this->id;
    }

    void Account::setId(int id) {
        this->id = id;
    }

    string Account::getTitle() {
        return this->title;
    }

    void Account::setTitle(string title) {
        this->title = title;
    }

    string Account::getLogin() {
        return this->login;
    }

    void Account::setLogin(string login) {
        this->login = login;
    }

    string Account::getPassword() {
        return this->password;
    }

    void Account::setPassword(string password) {
        this->password = password;
    }

    string Account::formatPrint() {
        return to_string(this->getId()) + SEPARATOR + this->getTitle() + SEPARATOR + this->getLogin()
        + SEPARATOR + this->getPassword();
    }
}