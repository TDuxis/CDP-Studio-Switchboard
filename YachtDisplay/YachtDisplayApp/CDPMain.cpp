#include <CDPStarter.h>
#include <Libraries.h>
#include <QApplication>

int main (int argc, char* argv[])
{
    int ret = 0;
    QApplication app(argc, argv);
    CDPStarter CDPMain(argc, argv);
    if (!CDPMain.hasArgument("--help"))
    {
        printf("This application is based in part on the work of the Qt framework licensed under LGPL v2.1 and LGPL v3.0.\n");
        printf("For full licenses, see files 'LICENSE.LGPLv21' and 'LICENSE.LGPLv3' in application directory.\n");
        ret = CDPMain.Start();
        printf("Good Bye!\n");
    }
    else
        CDPMain.PrintHelp();

    return ret;
}
