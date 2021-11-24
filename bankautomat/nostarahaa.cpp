#include "nostarahaa.h"
#include "ui_nostarahaa.h"

nostarahaa::nostarahaa(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::nostarahaa)
{
    ui->setupUi(this);
}

nostarahaa::~nostarahaa()
{
    delete ui;
}
