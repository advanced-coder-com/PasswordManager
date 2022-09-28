#include <string>
using namespace std;

namespace PM_Controller {
    class AccountController {
    public:
        string minusLine(int quantity);
        string centerWord(string word, int cellWidth);
        void printHead();
        void printFooter();
    };
}