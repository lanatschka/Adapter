#include <QCoreApplication>
#include "duck.h"
#include "turkey.h"
#include "mallardduck.h"
#include "turkeyadapter.h"
#include "wildturkey.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

        MallardDuck *duck = new MallardDuck();
        WildTurkey *turkey = new WildTurkey();
        Duck *turkeyAdapter = new TurkeyAdapter(turkey);
        cout <<"The Turkey says..." << endl;
        turkey->gobble();
        turkey->fly();
        cout <<endl << "The Duck says..."<< endl;
        duck->quack();
        duck->fly();
        cout << endl << "The TurkeyAdapter says..."<<endl;
        turkeyAdapter->quack();
        turkeyAdapter->fly();

    return a.exec();
}
