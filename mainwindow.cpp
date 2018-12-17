#include "mainwindow.h"
#include "ui_mainwindow.h"

// #include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initialisiereGUI();
    clearInput();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_Berechnen_clicked()
{
    if (ui->lineEdit_Name->text().isEmpty() || ui->spinBox_Size->value() == 0 || ui->doubleSpinBox_Weight->value() == 0.0)
    {
        // Messagebox bauen:
        QMessageBox fehler;
        fehler.setIcon(QMessageBox::Critical);
        fehler.setWindowTitle(trUtf8("Erfassung Kundengewichte und BMI"));
        fehler.setWindowIcon(QIcon(QPixmap(":Icons/img/personenwaage.png")));
        fehler.setText(trUtf8("Fehler: Ungenügende Angaben."));
        fehler.setInformativeText(trUtf8("Bitte vervollständigen Sie Kundenname, Körpergröße und Gewicht!"));
        fehler.setStandardButtons(QMessageBox::Ok);
        fehler.setButtonText(QMessageBox::Ok, trUtf8("Geht klar!"));
        fehler.setDefaultButton(QMessageBox::Ok);
        fehler.exec();

        // Focus auf das nächste zu bearbeitende Feld setzen:
        if(ui->lineEdit_Name->text().isEmpty())
            ui->lineEdit_Name->setFocus();
        else if (ui->spinBox_Size->value() == 0)
            ui->spinBox_Size->setFocus();
        else if (ui->doubleSpinBox_Weight->value() == 0.0)
            ui->doubleSpinBox_Weight->setFocus();
    }
    else
    {
        // Werte initialisieren:
        groesse = 0;
        gewicht = 0.0;
        realgewicht = 0.0;

        // Werte erfassen:
        gewicht = ui->doubleSpinBox_Weight->value();
        rolligewicht = ui->doubleSpinBox_RolliWeight->value();
        groesse = (ui->spinBox_Size->value() / 100.0);

        // BMI berechnen:
        realgewicht = gewicht - rolligewicht;
        bmi = realgewicht / (groesse * groesse);

       // qDebug() << "Gewicht: " << gewicht << " | " << "Größe" << groesse << " | " << "Realgewicht:" << realgewicht << " | " << "BMI:" << bmi ;

        // Wert in LCD anzeigen:
        ui->lcdNumber->display(bmi);

        // Warnung bei Unterschreitung des geforderten Mindest-BMI erzeugen:
        if (ui->lcdNumber->value()<= 18)
            ui->label_warnung->setVisible(true);
        else
            ui->label_warnung->setVisible(false);

        // Übernahme in den Report freischalten:
        ui->btn_Neu->setEnabled(true);
        ui->actionNeu->setDisabled(false);
        ui->btn_Neu->setFocus();
    }
}

// Werte in den Report übertragen:
void MainWindow::on_btn_Neu_clicked()
{
    QString str;

    if (gewicht != 0.0 && groesse != 0.0)
    {
        str.append("<b>" + ui->lineEdit_Name->text() + "</b>");
        str.append("\t");
        str.append("  |  ");
        str.append("Gewicht: ");
        str.append("<b>" + QString::number(realgewicht, 'f', 2) + "</b>");
        str.append(" kg");
        str.append("  \t|  ");
        str.append("BMI: ");
        str.append("<b>" + QString::number(bmi, 'f', 2) + "</b>" );
        str.append("  \t|  ");
        str.append("erfasst am ");
        str.append(ui->dateEdit->date().toString("dd.MM.yyyy"));
        if (bmi <= 18)
        {
            str.append("\t - <i><b><font color=\"Red\">Ernährungszustand kritisch!</b></i><font color=\"Black\"");
        }

        // Werte eintragen:
        ui->textEdit_Report->append ( str );
        ui->textEdit_Report->append("<font color=\"Blue\">------------------------------------------------------------------------------------------------------------------------------------------------------------------");

        clearInput();

        ui->btn_Report_verwerfen->setEnabled(true);
        ui->actionReport_verwerfen_und_neu_erfassen->setEnabled(true);
        ui->btn_Print->setEnabled(true);
        ui->actionDrucken->setDisabled(false);
        ui->btn_Save->setEnabled(true);
        ui->actionSpeichern->setDisabled(false);
        ui->actionReport_speichern_unter->setDisabled(false);
    }
}

void MainWindow::on_spinBox_Size_valueChanged(int arg1)
{
    ui->label_warnung->setVisible(false);
}

void MainWindow::on_doubleSpinBox_Weight_valueChanged(double arg1)
{
    ui->label_warnung->setVisible(false);
}

// neue Eingabe:
void MainWindow::clearInput()
{
    ui->lineEdit_Name->setText("");
    ui->spinBox_Size->setValue(0);
    ui->doubleSpinBox_Weight->setValue(0.0);
    ui->doubleSpinBox_RolliWeight->setValue(0.0);
    ui->lcdNumber->display(0.0);
    ui->btn_Neu->setEnabled(false);
    ui->lineEdit_Name->setFocus();
    ui->actionDrucken->setDisabled(true);
    ui->actionNeu->setDisabled(true);
    ui->actionReport_verwerfen_und_neu_erfassen->setDisabled(true);
    ui->actionSpeichern->setDisabled(true);
    ui->actionReport_speichern_unter->setDisabled(true);
}

// GUI initialisieren:
void MainWindow::initialisiereGUI()
{
    //this->setWindowIcon(QIcon("://img/Icon.ico"));
    ui->actionDrucken->setDisabled(true);
    ui->actionNeu->setDisabled(true);
    ui->actionReport_verwerfen_und_neu_erfassen->setDisabled(true);
    ui->actionSpeichern->setDisabled(true);
    ui->actionReport_speichern_unter->setDisabled(true);
    ui->dateEdit->setDate(QDate::currentDate());
    ui->label_warnung->setVisible(false);
    schreibeReportkopf();
}

void MainWindow::schreibeReportkopf()
{
    on_dateEdit_dateChanged();
    ui->textEdit_Report->append("=================================================================================<br>");
}

void MainWindow::on_btn_Report_verwerfen_clicked()
{
    // Messagebox bauen:
    QMessageBox warnung;
    warnung.setIcon(QMessageBox::Warning);
    warnung.setWindowTitle(trUtf8("Erfassung Kundengewichte und BMI"));
    warnung.setWindowIcon(QIcon(QPixmap(":Icons/img/personenwaage.png")));
    warnung.setText(trUtf8("WARNUNG: Alle ungespeicherten Daten gehen verloren."));
    warnung.setInformativeText(trUtf8("Möchten Sie den Inhalt des Reports wirklich verwerfen?"));
    warnung.setStandardButtons(QMessageBox::Cancel | QMessageBox::Yes);
    warnung.setButtonText(QMessageBox::Yes, trUtf8("Report verwerfen"));
    warnung.setButtonText(QMessageBox::Cancel, trUtf8("Abbruch"));
    warnung.setDefaultButton(QMessageBox::Cancel);

    // Messagebox auswerten:
    int auswahl = warnung.exec();
    switch (auswahl)
    {
      case QMessageBox::Yes:
        ui->textEdit_Report->clear();
        ui->btn_Report_verwerfen->setEnabled(false);
        ui->actionReport_verwerfen_und_neu_erfassen->setDisabled(true);
        ui->btn_Print->setEnabled(false);
        ui->actionDrucken->setDisabled(true);
        ui->btn_Save->setEnabled(false);
        ui->actionSpeichern->setDisabled(true);
        ui->actionReport_speichern_unter->setDisabled(true);
        schreibeReportkopf();
          break;
      case QMessageBox::Cancel:
          break;
      default:
          // so weit sollte es nicht kommen!
          break;
    }
}

void MainWindow::on_btn_Print_clicked()
{
    QPrinter printer(QPrinter::HighResolution);
    QPrintDialog printDialog(&printer, this);
    if (printDialog.exec() == QDialog::Accepted)
    {
        // print ...
        ui->textEdit_Report->print(&printer);
    }
}

void MainWindow::on_actionInfo_zu_Qt_triggered()
{
    QMessageBox::aboutQt(this, trUtf8("Über die Qt GUI-Bibliotheken"));
}

// Kopfzeile des Reports markieren, entfernen und mit neuem Datum ersetzen:
void MainWindow::on_dateEdit_dateChanged()
{
    int lineNumber = 0; // 1. Zeile!!!
    QString neuesDatum = "<font color=\"Blue\"><h3>Seniorenzentrum \"Alteisen\" - Gewichte und BMI der Kunden</h3>bearbeitet am " + ui->dateEdit->dateTime().toString("dddd, dd.MM.yyyy für <b>MMMM yyyy</b>");
    //neuesDatum.append("<br><font color=\"Blue\">=================================================================================");
    QTextCursor actCursor = ui->textEdit_Report->textCursor();  // den aktuellen Textcursor aus dem QTextEdit speichern
    //int iCurPos = actCursor.position();  // die aktuelle Cursorposition als Int speichern

    ui->textEdit_Report->setTextCursor(actCursor);  // und den geänderten TextCursor wieder an das QTextEdit weitergeben
    actCursor.movePosition(QTextCursor::Start);     // Cursor an den Anfang des Dokumentes...

    actCursor.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor, lineNumber); // ...Position merken und ans Dokumentenende...

    actCursor.select(QTextCursor::LineUnderCursor); // ...Zeile unter dem Cursor markieren, ...
    actCursor.removeSelectedText();                 // ...löschen, ...
    actCursor.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor, lineNumber + 1); // ...2. Zeile Position merken und ans Dokumentenende...

    actCursor.select(QTextCursor::LineUnderCursor); // ...Zeile unter dem Cursor markieren, ...
    actCursor.removeSelectedText();                 // ...löschen,
    actCursor.deletePreviousChar();                 // ..sonst gibt's einen ungewollten Zeilenversatz!

    actCursor.movePosition(QTextCursor::Start);     // zum Anfang des Dokumentes springen...

    ui->textEdit_Report->setTextCursor(actCursor);  // ...Cursor setzen...

    ui->textEdit_Report->insertHtml(neuesDatum);    // ...und neues Datum eintragen.
}

// close() Event abfangen:
void MainWindow::closeEvent( QCloseEvent *event )
{
    // Messagebox bauen:
    QMessageBox msgBox;
    msgBox.setWindowTitle(trUtf8("Erfassung Kundengewichte und BMI"));
    msgBox.setWindowIcon(QIcon(QPixmap(":Icons/img/personenwaage.png")));
    msgBox.setText(trUtf8("Programm beenden"));
    msgBox.setInformativeText(trUtf8("WARNUNG: Alle ungespeicherten Daten gehen verloren.<br>Möchten Sie das Programm wirklich verlassen?"));
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    msgBox.setButtonText(QMessageBox::Yes, trUtf8("Programm verlassen"));
    msgBox.setButtonText(QMessageBox::Cancel, trUtf8("zurück zum Programm"));
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Question);

    if (msgBox.exec() == QMessageBox::Yes)
        // Damit die Anwendung schließt muß das Event akzeptiert werden
        event->accept();

    else
    {
        // Damit die Anwendung nicht schließt muß das Event verworfen werden
        event->ignore();
    }
}

void MainWindow::on_actionProgramminformation_triggered()
{
    #define MY_APP_VERSION 1
    #define MY_APP_SUBVERSION 0
    QPalette palette;
    palette.setColor(QPalette::Background, Qt::cyan);


    QString sBoxTitel, sBoxMeldung, sBoxButton, sProgrammname, sAutor, sEmail, sCompiler, sCompilerDatum, sOS, sQtVersion, sProgrammversion;

    // Titel der MessageBox:
    sBoxTitel = "über das Programm";

    // Text der Schaltfläche der MessageBox:
    sBoxButton = tr("hab´s gelesen...");

    // Autor und Email:
    sAutor = "<p><hr>Copyright &copy; 09/2016 Michael Bergmann<br>staatl. exam. Krankenpfleger<br>Kaufmann im Gesundheitswesen (IHK)<br>";
    sEmail = "<br />Web: <a href=\"http://www.mbergmann-sh.de\">http://www.mbergmann-sh.de</a><br />Mail: <a href=\"mailto:mb@mbergmann-sh.de\">mb@mbergmann-sh.de<hr>";

    // Programmname:
    #ifdef __FILE__
        sProgrammname = "<br /> <br />Programmname: ";
        sProgrammname.append(__FILE__);
    #else
        sProgrammname = "Programmname: nicht ermittelt ";
    #endif

    // Programmversion:
    #ifdef MY_APP_VERSION
        sProgrammversion.append(QString::number(MY_APP_VERSION));
        #ifdef MY_APP_SUBVERSION
        sProgrammversion.append(".");
        sProgrammversion.append(QString::number(MY_APP_SUBVERSION));
        #endif
    #endif

    // Datum der Compilierung:
    #ifdef __DATE__
        sCompilerDatum = "<br />compiliert am ";
        sCompilerDatum.append(__DATE__);
    #else
        sCompilerDatum = "<br />Datum der Compilierung: unbekannt ";
    #endif
    // Uhrzeit der Compilierung:
    #ifdef __TIME__
        sCompilerDatum.append("<br />um ");
        sCompilerDatum.append(__TIME__);
        sCompilerDatum.append(" Uhr");
    #else
        sCompilerDatum.append("<br />Zeit der Compilierung: nicht ermittelt ");
    #endif

    // Qt Version bestimmen:
    sQtVersion = "Verwendete Qt-Version: ";
    sQtVersion.append(QT_VERSION_STR);

    // Datum der Compilierung:
    #ifdef __DATE__
        sCompilerDatum = "<br />compiliert am ";
        sCompilerDatum.append(__DATE__);
    #else
        sCompilerDatum = "<br />Datum der Compilierung: unbekannt ";
    #endif
    // Uhrzeit der Compilierung:
    #ifdef __TIME__
        sCompilerDatum.append("<br />um ");
        sCompilerDatum.append(__TIME__);
        sCompilerDatum.append(" Uhr");
    #else
        sCompilerDatum.append("<br />Zeit der Compilierung: nicht ermittelt ");
    #endif

    // Qt Version bestimmen:
    sQtVersion = "Verwendete Qt-Version: ";
    sQtVersion.append(QT_VERSION_STR);

    // Betriebssystem ermitteln:
    // Windows
    #ifdef __WIN32
            // 64-bit
            #ifdef __WIN64
                    sOS = "<br />Compiliert für Betriebssystem: Windows 64-Bit";

            // 32-bit
            #else
                    sOS = "<br />Compiliert für Betriebssystem: Windows 32-Bit";
            #endif
    #endif
    // Für VisualStudio
    #ifdef _WIN32
            // 64-bit
            #ifdef _WIN64
                    sOS = "<br />Compiliert für Betriebssystem: Windows 64-Bit";

            // 32-bit
            #else
                    sOS = "<br />Compiliert für Betriebssystem: Windows 32-Bit";
            #endif
    #endif
    // Mac OS X
    #ifdef __APPLE__
        #ifdef __MACH__
            sOS = "<br />Compiliert für Betriebssystem: Apple MacIntosh OS X";
        #endif
    #endif
    // NetBSD
    #ifdef __NetBSD__
            sOS = "<br />Compiliert für Betriebssystem: NetBSD";
    #endif
    // FreeBSD
    #ifdef __NetBSD__
            sOS = "<br /Compiliert für >Betriebssystem: FreeBSD";
    #endif
    // OpenBSD
    #ifdef __OpenBSD__
            sOS = "<br />Compiliert für Betriebssystem: NetBSD";
    #endif
    // Linux-Derivate
    #ifdef __linux__
            // Android
            #ifdef __ANDROID__
                    sOS = "<br />Compiliert für Betriebssystem: Android";
            #endif
            // GNU Linux
            #ifdef __gnu_linux__
                    sOS = "<br />Compiliert für Betriebssystem: GNU Linux";
            #endif
    #endif

    // Betriebssystem ermitteln:
    // Windows
    #ifdef __WIN32
            // 64-bit
            #ifdef __WIN64
                    sOS = "<br />Compiliert für Betriebssystem: Windows 64-Bit";

            // 32-bit
            #else
                    sOS = "<br />Compiliert für Betriebssystem: Windows 32-Bit";
            #endif
    #endif
    // Für VisualStudio
    #ifdef _WIN32
            // 64-bit
            #ifdef _WIN64
                    sOS = "<br />Compiliert für Betriebssystem: Windows 64-Bit";

            // 32-bit
            #else
                    sOS = "<br />Compiliert für Betriebssystem: Windows 32-Bit";
            #endif
    #endif
    // Mac OS X
    #ifdef __APPLE__
        #ifdef __MACH__
            sOS = "<br />Compiliert für Betriebssystem: Apple MacIntosh OS X";
        #endif
    #endif
    // NetBSD
    #ifdef __NetBSD__
            sOS = "<br />Compiliert für Betriebssystem: NetBSD";
    #endif
    // FreeBSD
    #ifdef __NetBSD__
            sOS = "<br /Compiliert für >Betriebssystem: FreeBSD";
    #endif
    // OpenBSD
    #ifdef __OpenBSD__
            sOS = "<br />Compiliert für Betriebssystem: NetBSD";
    #endif
    // Linux-Derivate
    #ifdef __linux__
            // Android
            #ifdef __ANDROID__
                    sOS = "<br />Compiliert für Betriebssystem: Android";
            #endif
            // GNU Linux
            #ifdef __gnu_linux__
                    sOS = "<br />Compiliert für Betriebssystem: GNU Linux";
            #endif
    #endif

    // Compiler ermitteln:
    // GCC/G++
    #ifdef __GNUG__
        sCompiler = "<br />Compiler: gcc/g++ <br />Version: ";
        #ifdef __VERSION__
        sCompiler.append(__VERSION__);
        // undefiniert
        #else
                sCompiler.append("unbekannte Version");
        #endif
    #endif
    // MinGW
    #ifdef __MINGW32__
        sCompiler = "<br />Compiler: MinGW gcc/g++ 32-Bit, <br />Version: ";
        #ifdef __VERSION__
        sCompiler.append(__VERSION__);
        // undefiniert
        #else
                sCompiler.append("unbekannte Version");
        #endif
    #endif
    #ifdef __MINGW64__
        sCompiler = "<br />Compiler: MinGW gcc/g++, 64-Bit <br />Version: ";
        #ifdef __VERSION__
        sCompiler.append(__VERSION__);
        // undefiniert
        #else
                sCompiler.append("unbekannte Version");
        #endif
    #endif
    // Intel C++
    #if defined (__ICC) || defined(__INTEL_COMPILER__)
        sCompiler = "<br />Compiler: Intel C/C++, <br />Kompatibilität: ";
        #ifdef __VERSION__
            sCompiler.append(__VERSION__);
        #endif
        #ifdef __INTEL_COMPILER
            sCompiler.append("<br /> Version: ");
            sCompiler.append(QString::number(__INTEL_COMPILER));
        #endif
        #ifdef __INTEL_COMPILER_UPDATE
            sCompiler.append("<br /> Update: ");
            sCompiler.append(QString::number(__INTEL_COMPILER_UPDATE));
        #endif
        #ifdef __INTEL_COMPILER_BUILD_DATE
            sCompiler.append("<br /> erstellt am: ");
            sCompiler.append(QString::number(__INTEL_COMPILER_BUILD_DATE));
        // undefiniert
        #else
                sCompiler.append("unbekannte Version");
        #endif
    #endif
    #ifdef _MSC_BUILD
                qDebug() << "BUILD: " << _MSC_BUILD;
                qDebug() << "Ver: " << _MSC_VER;
                qDebug() << "FullVer: " << _MSC_FULL_VER;

        sCompiler = "<br />Compiler: Microsoft Visual C++ <br />Version: ";
        #ifdef _MSC_VER
        sCompiler.append(QString::number(_MSC_VER));
        if(_MSC_VER <= 1600)
            sCompiler.append(", VisualStudio 2010");
        else
           sCompiler.append(", VisualStudio 2013");
        // undefiniert
        #else
                sCompiler.append("unbekannte Version");
        #endif
    #endif
    sBoxMeldung.append(sAutor);
    sBoxMeldung.append(sEmail);

    sBoxMeldung.append("<p>Body Mass Index ist ein Hilfsprogramm für Pflegeeinrichtungen ");
    sBoxMeldung.append("und dient zur Erfassung und Dokumentation von Gewichtsverläufen ");
    sBoxMeldung.append("für Kunden der Einrichtung. ");
    sBoxMeldung.append(" Monatsreports können archiviert, editiert und ausgedruckt werden.");
    sBoxMeldung.append(" Dieses Programm wird 'wie es ist' zur Verfügung gestellt. Es besteht keinerlei Rechtsanspruch");
    sBoxMeldung.append(" bezüglich seiner Funktionalität oder der Erfüllung geltender Normen.");

    sBoxMeldung.append("<h3>Programminterne Informationen:</h3>");
    sBoxMeldung.append(sQtVersion);
    sBoxMeldung.append(sCompiler);
    sBoxMeldung.append("<br />");
    sBoxMeldung.append(sOS);
    sBoxMeldung.append(sProgrammname);
    sBoxMeldung.append(sCompilerDatum);

    // Messagebox bauen:
    QMessageBox msgBox;
    msgBox.setPalette(palette);
    msgBox.setWindowTitle(trUtf8("Erfassung Kundengewichte und BMI"));
    msgBox.setWindowIcon(QIcon(QPixmap(":Icons/img/personenwaage.png")));
    msgBox.setText(trUtf8("<h2><i>Über das Programm...</i></h2>"));
    msgBox.setInformativeText(sBoxMeldung);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setButtonText(QMessageBox::Ok, trUtf8("Hab's gelesen..."));
    msgBox.setDefaultButton(QMessageBox::Ok);
    msgBox.setIconPixmap(QPixmap(":/Icons/img/Pfleger.png"));

    int ret = msgBox.exec();
}

// Report laden
void MainWindow::on_actionReport_importieren_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, trUtf8("Datei öffnen"), "",
      trUtf8("Reportdatei (*.bmi)"));

     if (fileName != "") {
      QFile file(fileName);

      if (!file.open(QIODevice::ReadOnly)) {
       QMessageBox::critical(this, trUtf8("Fehler"),
       trUtf8("Report konnte nicht geöffnet werden"));
       return;
      }

      QString contents = QString::fromUtf8(file.readAll());
      ui->textEdit_Report->setHtml(contents);
      file.close();
     }

     // Schaltflächen freigeben:
     ui->btn_Print->setEnabled(true);
     ui->btn_Report_verwerfen->setEnabled(true);
     ui->btn_Save->setEnabled(true);
     ui->actionSpeichern->setEnabled(true);
     ui->actionReport_speichern_unter->setEnabled(true);
}

// Datei speichern
void MainWindow::on_actionSpeichern_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, trUtf8("Datei speichern"), "",
     trUtf8("Reportdatei (*.bmi)"));

    if (fileName != "")
    {
         QFile file(fileName);

         if (!file.open(QIODevice::WriteOnly))
         {
             // error message
             QMessageBox::critical(this, trUtf8("Fehler"),
             trUtf8("Report konnte nicht gespeichert werden"));
         }
         else
         {
            QByteArray data = ui->textEdit_Report->toHtml().toUtf8();
            file.write(data);
            file.close();
         }
    }
}

// Datei speichern unter...
void MainWindow::on_actionReport_speichern_unter_triggered()
{
    on_actionSpeichern_triggered();
}
