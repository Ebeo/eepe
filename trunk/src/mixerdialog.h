#ifndef MIXERDIALOG_H
#define MIXERDIALOG_H

#include <QDialog>
#include "pers.h"

namespace Ui {
    class MixerDialog;
}

class MixerDialog : public QDialog {
    Q_OBJECT
public:
    MixerDialog(QWidget *parent, MixData *mixdata, int stickMode);
    ~MixerDialog();

protected:
    void changeEvent(QEvent *e);

private:
    MixData *md;
    Ui::MixerDialog *ui;
};

#endif // MIXERDIALOG_H
