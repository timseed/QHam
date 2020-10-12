#include <QtTest>
#include "../QContest/cty.h"

class TestCty : public QObject
{
    Q_OBJECT

public:
    TestCty();
    ~TestCty();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

TestCty::TestCty()
{

}

TestCty::~TestCty()
{

}

void TestCty::initTestCase()
{

}

void TestCty::cleanupTestCase()
{

}

void TestCty::test_case1()
{

}

#include "tst_testcty.moc"


//QTEST_APPLESS_MAIN(TestCty)
// full Qt application
QTEST_MAIN(TestCty)
// core Qt application: no GUI, but event loop is available
//QTEST_GUILESS_MAIN(TestName)
// no Qt application: no GUI and no events
//QTEST_APPLESS_MAIN(TestName)
//#include "tst_testcty.moc"
