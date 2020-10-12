#include <QtTest>

// add necessary includes here

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

QTEST_APPLESS_MAIN(TestCty)

#include "tst_testcty.moc"
