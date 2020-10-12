#include <QtTest>

#include "../../QContest/cty.h"

class test_cty : public QObject
{
    Q_OBJECT

public:
    test_cty();
    ~test_cty();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

test_cty::test_cty()
{

}

test_cty::~test_cty()
{

}

void test_cty::initTestCase()
{

}

void test_cty::cleanupTestCase()
{

}

void test_cty::test_case1()
{

}

QTEST_APPLESS_MAIN(test_cty)

#include "tst_test_cty.moc"
