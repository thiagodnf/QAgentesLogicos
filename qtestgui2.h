#ifndef QTESTGUI2_H
#define QTESTGUI2_H

#include <QDialog>

namespace Ui {
    class QTestGui2;
}

class QTestGui2 : public QDialog
{
    Q_OBJECT

public:
    explicit QTestGui2(QWidget *parent = 0);
    ~QTestGui2();
private slots:
    void run();

private:
    Ui::QTestGui2 *ui;
};

#endif // QTESTGUI2_H
