#include <string>
using namespace std;

namespace PM_Model {
    class Account {
    public:
        int getId();
        void setId(int id);
        string getTitle();
        void setTitle(string title);
        string getLogin();
        void setLogin(string login);
        string getPassword();
        void setPassword(string password);
        string formatPrint();

    private:
        int id;
        string title;
        string login;
        string password;
    };

}
