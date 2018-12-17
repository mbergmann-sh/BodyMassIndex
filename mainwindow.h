#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGuiApplication>
#include <QMainWindow>
#include <QPalette>
#include <QFileDialog>
#include <QTextStream>
#include <QCloseEvent>
#include <QLocale>
#include <QTranslator>
#include <QLibrary>
#include <QLibraryInfo>
#include <QWindow>
#include <QIcon>
#include <QMessageBox>
#include <QDialogButtonBox>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport>
#include <QPrinter>
#include <QPrintDialog>
#include <QMimeType>
#include <QMimeData>
#include <QTextCodec>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_Berechnen_clicked();
    void on_btn_Neu_clicked();
    void on_spinBox_Size_valueChanged(int arg1);
    void on_doubleSpinBox_Weight_valueChanged(double arg1);
    void clearInput();
    void initialisiereGUI();
    void schreibeReportkopf();
    void on_btn_Report_verwerfen_clicked();
    void on_btn_Print_clicked();
    void on_actionInfo_zu_Qt_triggered();
    void on_dateEdit_dateChanged();
    void on_actionProgramminformation_triggered();
    void on_actionReport_importieren_triggered();
    void on_actionSpeichern_triggered();


    
    void on_actionReport_speichern_unter_triggered();

private:
    Ui::MainWindow *ui;
    float gewicht, rolligewicht, realgewicht, groesse, bmi;
    QString file_path;
    bool is_saved;
    const QString name_der_einrichtung;

protected:
        void closeEvent( QCloseEvent *event );
};

#endif // MAINWINDOW_H
