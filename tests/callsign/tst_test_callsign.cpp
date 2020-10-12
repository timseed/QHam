#include <QtTest>
#include "../../QContest/callsign.h"
// add necessary includes here

class Test_callsign : public QObject
{
    Q_OBJECT

public:
    Test_callsign();
    ~Test_callsign();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

Test_callsign::Test_callsign()
{

}

Test_callsign::~Test_callsign()
{

}

void Test_callsign::initTestCase()
{

}

void Test_callsign::cleanupTestCase()
{

}

void Test_callsign::test_case1()
{

}

QTEST_APPLESS_MAIN(Test_callsign)

#include "tst_test_callsign.moc"
