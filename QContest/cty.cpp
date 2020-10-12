#include "cty.h"

Cty::Cty()
{
    QFile file("cty.dat");
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
    }


    QTextStream in(&file);

    while(!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        //model->appendRow(fields);
    }

    file.close();
}
