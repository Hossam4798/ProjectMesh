#ifndef NODEWINDOW_H
#define NODEWINDOW_H

#include <QMainWindow>

namespace Ui {
class NodeWindow;
}

class NodeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NodeWindow(QWidget *parent = nullptr);
    ~NodeWindow();

private:
    Ui::NodeWindow *ui;
};

#endif // NODEWINDOW_H
