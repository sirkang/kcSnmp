#ifndef KCSNMP_H
#define KCSNMP_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class kcSnmp;
}
QT_END_NAMESPACE

class kcSnmp : public QWidget {
    Q_OBJECT

public:
    kcSnmp(QWidget* parent = nullptr);
    ~kcSnmp();
    void init();

    QString printLocalIPs();
    void getSnmpInfo(QString ip, QString type, QString oid);
private slots:
    void on_pushButton_Snmp_PING_clicked();

    void on_pushButton_Snmp_SNMP_clicked();

    void on_pushButton_Snmp_REBOOT_clicked();

    void on_pushButton_Snmp_Enter_clicked();

    void on_pushButton_Snmp_CLEAR_clicked();

private:
    Ui::kcSnmp* ui;
    QList<QList<QString>> matrix;
    QString SnmpGet;
};
#endif // KCSNMP_H
