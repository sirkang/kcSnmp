#include "kcsnmp.h"
#include "ui_kcsnmp.h"

#include <QDateTime>
#include <QFileInfo>
#include <QNetworkInterface>
#include <QProcess>

kcSnmp::kcSnmp(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::kcSnmp)
{
    ui->setupUi(this);
    init();
}

kcSnmp::~kcSnmp()
{
    delete ui;
}

void kcSnmp::init()
{
    //初始化设备图片
    QPixmap pixmap;
    pixmap.load(":/JL206-A.png");
    ui->label_Snmp_Machine->setPixmap(pixmap);
    ui->label_Snmp_Machine->setScaledContents(true);

    //按钮不可用
    ui->pushButton_Snmp_SNMP->setEnabled(false);
    ui->pushButton_Snmp_REBOOT->setEnabled(false);
    ui->pushButton_Snmp_Enter->setEnabled(false);
    ui->checkBox_Snmp->setEnabled(false);
    ui->comboBox_Snmp->setEnabled(false);

    //初始化命令
    QList<QString> row0 = { "Brand", ".1.3.6.1.4.1.765431.1.1.0" };
    QList<QString> row1 = { "Type", ".1.3.6.1.4.1.765431.1.2.0" };
    QList<QString> row2 = { "SoftVersion", ".1.3.6.1.4.1.765431.1.3.0" };
    QList<QString> row3 = { "LocalIP", ".1.3.6.1.4.1.765431.1.4.0" };
    QList<QString> row4 = { "SercerIP", ".1.3.6.1.4.1.765431.1.5.0" };
    QList<QString> row5 = { "SercerIPPort", ".1.3.6.1.4.1.765431.1.6.0" };
    QList<QString> row6 = { "MachineName", ".1.3.6.1.4.1.765431.1.7.0" };
    QList<QString> row7 = { "MACADDRESS", ".1.3.6.1.4.1.765431.1.8.0" };
    QList<QString> row8 = { "RunStatus", ".1.3.6.1.4.1.765431.2.1.0" };
    QList<QString> row9 = { "CommPar", ".1.3.6.1.4.1.765431.3.1.0" };
    QList<QString> row10 = { "Clearing1Par", ".1.3.6.1.4.1.765431.3.2.0" };
    QList<QString> row11 = { "Clearing2Par", ".1.3.6.1.4.1.765431.3.3.0" };
    QList<QString> row12 = { "ClearingData", ".1.3.6.1.4.1.765431.4.1.0" };
    QList<QString> row13 = { "MixData", ".1.3.6.1.4.1.765431.4.2.0" };
    QList<QString> row14 = { "TotalCount", ".1.3.6.1.4.1.765431.5.1.0" };
    QList<QString> row15 = { "JamCount", ".1.3.6.1.4.1.765431.5.2.0" };
    QList<QString> row16 = { "ErrorCount", ".1.3.6.1.4.1.765431.5.3.0" };
    QList<QString> row17 = { "Sensor", ".1.3.6.1.4.1.765431.5.4.0" };
    QList<QString> row18 = { "PTNumber", ".1.3.6.1.4.1.765431.6.1.0" };
    QList<QString> row19 = { "OSVERSION", ".1.3.6.1.4.1.765431.6.2.0" };
    QList<QString> row20 = { "DATATIME", ".1.3.6.1.4.1.765431.6.3.0" };
    QList<QString> row21 = { "DST", ".1.3.6.1.4.1.765431.6.4.0" };
    QList<QString> row22 = { "ConnectServerTime", ".1.3.6.1.4.1.765431.6.5.0" };
    QList<QString> row23 = { "ConnectServerSuccess", ".1.3.6.1.4.1.765431.6.6.0" };
    QList<QString> row24 = { "totaldayReport", ".1.3.6.1.4.1.765431.6.7.0" };
    QList<QString> row25 = { "atmIDdayReport", ".1.3.6.1.4.1.765431.6.8.0" };
    QList<QString> row26 = { "machineRunStopTime", ".1.3.6.1.4.1.765431.6.9.0" };
    QList<QString> row27 = { "machineStartTimer", ".1.3.6.1.4.1.765432.7.1.0" };
    QList<QString> row28 = { "machineStopTimer", ".1.3.6.1.4.1.765432.7.2.0" };
    QList<QString> row29 = { "machineReboot", ".1.3.6.1.4.1.765432.7.3.0" };
    QList<QString> row30 = { "setMachineComParm", ".1.3.6.1.4.1.765432.8.1.0" };
    QList<QString> row31 = { "setMachineIPParm", ".1.3.6.1.4.1.765432.8.2.0" };
    QList<QString> row32 = { "setMachineATMParm", ".1.3.6.1.4.1.765432.8.3.0" };
    QList<QString> row33 = { "setMachineCFParm", ".1.3.6.1.4.1.765432.8.4.0" };
    QList<QString> row34 = { "setMachineCISParm", ".1.3.6.1.4.1.765432.8.5.0" };
    matrix.append(row0);
    matrix.append(row1);
    matrix.append(row2);
    matrix.append(row3);
    matrix.append(row4);
    matrix.append(row5);
    matrix.append(row6);
    matrix.append(row7);
    matrix.append(row8);
    matrix.append(row9);
    matrix.append(row10);
    matrix.append(row11);
    matrix.append(row12);
    matrix.append(row13);
    matrix.append(row14);
    matrix.append(row15);
    matrix.append(row16);
    matrix.append(row17);
    matrix.append(row18);
    matrix.append(row19);
    matrix.append(row20);
    matrix.append(row21);
    matrix.append(row22);
    matrix.append(row23);
    matrix.append(row24);
    matrix.append(row25);
    matrix.append(row26);
    matrix.append(row27);
    matrix.append(row28);
    matrix.append(row29);
    matrix.append(row30);
    matrix.append(row31);
    matrix.append(row32);
    matrix.append(row33);
    matrix.append(row34);
    //qDebug() << matrix[0][0] + ":" + matrix[0][1]; // 输出 1

    //初始化comboBox_Snmp中的数据
    for (int i = 0; i < matrix.size(); i++) {
        ui->comboBox_Snmp->addItem(QString(matrix[i][0] + ":" + matrix[i][1]));
    }

    //copy SnmpGet应用
    SnmpGet = QCoreApplication::applicationDirPath() + "/SnmpGet.exe";
    QFileInfo fileInfo(SnmpGet);
    if (!fileInfo.exists()) {
        QFile::copy(":/SnmpGet.exe", SnmpGet);
    }
}

void kcSnmp::on_pushButton_Snmp_PING_clicked()
{
    ui->textEdit_Snmp_INFO->clear();
    ui->textEdit_Snmp_INFO->append(QDateTime::currentDateTime().toString("MM-dd hh:mm:ss.zzz") + " -> 测试中……");
    ui->textEdit_Snmp_INFO->moveCursor(QTextCursor::End);
    qApp->processEvents();
    QProcess process;
    QString program = "ping";
    QStringList arguments;
    // 这里以 Windows 系统为例，-n 1 表示只发送一个数据包
    // clang-format off
    arguments << "-n"<< "1" << ui->lineEdit_Snmp_IP->text();
    // clang-format on
    process.start(program, arguments);
    process.waitForFinished();

    // 获取命令执行结果
    QString output = process.readAllStandardOutput();
    if (output.contains("TTL=")) {
        //更换设备图片
        QPixmap pixmap;
        pixmap.load(":/JL206-B.png");
        ui->label_Snmp_Machine->setPixmap(pixmap);
        ui->label_Snmp_Machine->setScaledContents(true);
        //按钮设置可用状态
        ui->pushButton_Snmp_SNMP->setEnabled(true);
        ui->pushButton_Snmp_REBOOT->setEnabled(true);
        ui->pushButton_Snmp_Enter->setEnabled(true);
        ui->checkBox_Snmp->setEnabled(true);
        ui->comboBox_Snmp->setEnabled(true);
        //输出当前状态信息
        ui->textEdit_Snmp_INFO->append(QDateTime::currentDateTime().toString("MM-dd hh:mm:ss.zzz") + " -> 网络测试成功！");
        ui->textEdit_Snmp_INFO->moveCursor(QTextCursor::End);
        qApp->processEvents();
    } else {
        //更换设备图片
        QPixmap pixmap;
        pixmap.load(":/JL206-C.png");
        ui->label_Snmp_Machine->setPixmap(pixmap);
        ui->label_Snmp_Machine->setScaledContents(true);
        //按钮不可用
        ui->pushButton_Snmp_SNMP->setEnabled(false);
        ui->pushButton_Snmp_REBOOT->setEnabled(false);
        ui->pushButton_Snmp_Enter->setEnabled(false);
        ui->checkBox_Snmp->setEnabled(false);
        ui->comboBox_Snmp->setEnabled(false);
        //输出当前状态信息
        ui->textEdit_Snmp_INFO->append(QDateTime::currentDateTime().toString("MM-dd hh:mm:ss.zzz") + " -> 网络测试失败！");
        ui->textEdit_Snmp_INFO->moveCursor(QTextCursor::End);
        qApp->processEvents();
        ui->textEdit_Snmp_INFO->append(QDateTime::currentDateTime().toString("MM-dd hh:mm:ss.zzz") + " -> 确定设备IP是否正确！");
        ui->textEdit_Snmp_INFO->moveCursor(QTextCursor::End);
        qApp->processEvents();
        ui->textEdit_Snmp_INFO->append(QDateTime::currentDateTime().toString("MM-dd hh:mm:ss.zzz") + " -> 检查网线连接是否正常！");
        ui->textEdit_Snmp_INFO->moveCursor(QTextCursor::End);
        qApp->processEvents();
        ui->textEdit_Snmp_INFO->append(QDateTime::currentDateTime().toString("MM-dd hh:mm:ss.zzz") + " -> " + printLocalIPs());
        ui->textEdit_Snmp_INFO->moveCursor(QTextCursor::End);
        qApp->processEvents();
    }
}

void kcSnmp::on_pushButton_Snmp_SNMP_clicked()
{
    ui->textEdit_Snmp_INFO->append(QDateTime::currentDateTime().toString("MM-dd hh:mm:ss.zzz") + " -> 测试中……");
    ui->textEdit_Snmp_INFO->moveCursor(QTextCursor::End);
    qApp->processEvents();
    for (int i = 0; i < matrix.size(); i++) {
        if (i != 29) {
            getSnmpInfo(ui->lineEdit_Snmp_IP->text(), matrix[i][0], matrix[i][1]);
        }
    }
}

void kcSnmp::on_pushButton_Snmp_REBOOT_clicked()
{
    ui->textEdit_Snmp_INFO->append(QDateTime::currentDateTime().toString("MM-dd hh:mm:ss.zzz") + " -> 执行中……");
    ui->textEdit_Snmp_INFO->moveCursor(QTextCursor::End);
    qApp->processEvents();
    getSnmpInfo(ui->lineEdit_Snmp_IP->text(), matrix[29][0], matrix[29][1]);
}

void kcSnmp::on_pushButton_Snmp_Enter_clicked()
{
    ui->textEdit_Snmp_INFO->append(QDateTime::currentDateTime().toString("MM-dd hh:mm:ss.zzz") + " -> 执行中……");
    ui->textEdit_Snmp_INFO->moveCursor(QTextCursor::End);
    qApp->processEvents();
    int index = ui->comboBox_Snmp->currentIndex();
    getSnmpInfo(ui->lineEdit_Snmp_IP->text(), matrix[index][0], matrix[index][1]);
}

void kcSnmp::on_pushButton_Snmp_CLEAR_clicked()
{
    ui->textEdit_Snmp_INFO->clear();
}

//获取设备SNMP消息
void kcSnmp::getSnmpInfo(QString ip, QString type, QString oid)
{
    //SnmpGet -r:172.16.3.235 -v:3 -sn:snmpgesel -ap:md5 -pp:DES -aw:auth123456 -pw:JL@Poste/206 -o:.1.3.6.1.4.1.765431.1.3.0
    QString snmpIp = "-r:" + ip;
    QString snmpOid = "-o:" + oid;

    QProcess process;
    QStringList arguments;
    // clang-format off
    arguments << snmpIp<< "-v:3"<< "-sn:snmpgesel"<<"-ap:md5"<<"-pp:DES"<<"-aw:auth123456"<<"-pw:JL@Poste/206" << snmpOid;
    // clang-format on
    //    qDebug() << arguments;
    process.start(SnmpGet, arguments);
    process.waitForFinished();

    QString output = process.readAllStandardOutput(); // 获取标准输出

    if (!output.isEmpty()) {
        if (ui->checkBox_Snmp->isChecked()) {
            ui->textEdit_Snmp_INFO->append(QDateTime::currentDateTime().toString("MM-dd hh:mm:ss.zzz") + " -> " + output);
        } else {

            QString ct_1 = "Value=";
            QString ct_2 = "Failed to get value of SNMP variable";

            if (output.contains(ct_1)) {
                output = output.split("Value=").at(1);
                output = output.remove("\r\n");
                if (output.mid(0, 2) == "  ") { //判断是都以"  "开头，如果是换行显示
                    output = output.left(output.size() - 2); //删除最后面的"\r"
                    ui->textEdit_Snmp_INFO->append(QDateTime::currentDateTime().toString("MM-dd hh:mm:ss.zzz") + " -> " + type + ":" + "\n" + output);
                } else {
                    ui->textEdit_Snmp_INFO->append(QDateTime::currentDateTime().toString("MM-dd hh:mm:ss.zzz") + " -> " + type + ":" + output);
                }
            } else if (output.contains(ct_2)) {
                ui->textEdit_Snmp_INFO->append(QDateTime::currentDateTime().toString("MM-dd hh:mm:ss.zzz") + " -> 获取SNMP变量值失败，超时！");
            } else {
                ui->textEdit_Snmp_INFO->append(QDateTime::currentDateTime().toString("MM-dd hh:mm:ss.zzz") + " -> Error");
            }
        }
    } else {
        ui->textEdit_Snmp_INFO->append(QDateTime::currentDateTime().toString("MM-dd hh:mm:ss.zzz") + " -> Error");
    }
    ui->textEdit_Snmp_INFO->moveCursor(QTextCursor::End);
    qApp->processEvents();
}

//获取IP地址
QString kcSnmp::printLocalIPs()
{
    QList<QNetworkInterface> interfaces = QNetworkInterface::allInterfaces();
    QList<QHostAddress> ipAddressesList;

    // 遍历所有网络接口
    foreach (QNetworkInterface interface, interfaces) {
        // 检查接口是否激活并且不是环回接口
        if (interface.flags() & QNetworkInterface::IsUp && !(interface.flags() & QNetworkInterface::IsLoopBack)) {
            QList<QNetworkAddressEntry> addressEntries = interface.addressEntries();
            foreach (QNetworkAddressEntry entry, addressEntries) {
                // 只获取IPv4地址
                if (entry.ip().protocol() == QAbstractSocket::IPv4Protocol) {
                    ipAddressesList.append(entry.ip());
                }
            }
        }
    }

    // 打印所有IPv4地址
    QString ip = "电脑IP：";
    foreach (QHostAddress address, ipAddressesList) {
        ip.append("[" + address.toString() + "]");
    }
    return ip;
}
