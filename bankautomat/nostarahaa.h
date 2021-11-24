#ifndef NOSTARAHAA_H
#define NOSTARAHAA_H

#include <QMainWindow>

namespace Ui {
class nostarahaa;
}

class nostarahaa : public QMainWindow
{
    Q_OBJECT

public:
    explicit nostarahaa(QWidget *parent = 0);
    ~nostarahaa();

private:
    Ui::nostarahaa *ui;
};

#endif // NOSTARAHAA_H
