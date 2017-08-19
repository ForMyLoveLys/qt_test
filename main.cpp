#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

    class A
    {
    public:
        A() {
            qDebug() << "A c";
        }

        A(const A &) = delete;

        ~A()
        {
            qDebug() << "A d";
        }
    };

    class B:public A
    {
    public:
        B() {
            qDebug() << "B c";
        }

        B(const B &){
            ;
        }

        ~B()
        {
            qDebug() << "B d";
        }

    };

    B b;
    B c(b);

        qDebug() << "[KCF] kcf_on_hololens_run() Failed, "
                 " Kcf From " << (1 ? "Local" : "Hololens")
                 << ", And Kcf is "
                 << (1 ? "Running" : "not Running");

//    return a.exec();
}
