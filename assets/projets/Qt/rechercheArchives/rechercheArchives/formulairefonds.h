#ifndef FORMULAIREFONDS_H
#define FORMULAIREFONDS_H

#include <QDialog>

namespace Ui {
class formulaireFonds;
}

class formulaireFonds : public QDialog
{
    Q_OBJECT

public:
    explicit formulaireFonds(QWidget *parent = nullptr);
    ~formulaireFonds();

private:
    Ui::formulaireFonds *ui;
};

#endif // FORMULAIREFONDS_H
