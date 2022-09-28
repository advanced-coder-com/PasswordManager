#include <iostream>
#include "src/Model/Account.h"
#include "src/Controller/AccountController.h"

int main() {
    PM_Model::Account a;

    a.setId(1);
    a.setTitle("Google");
    a.setLogin("login@gmail.com");
    a.setPassword("fdgdf878787dfgf78");

    PM_Controller::AccountController homepage;

    homepage.printHead();

    std::cout << a.formatPrint() << std::endl;

    return 0;
}
