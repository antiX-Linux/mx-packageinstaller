/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabApps;
    QGridLayout *gridLayout;
    QTreeWidget *treePopularApps;
    QLineEdit *searchPopular;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QWidget *tabOtherRepos;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioStable;
    QRadioButton *radioMXtest;
    QRadioButton *radioBackports;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *icon;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboFilter;
    QLabel *label_3;
    QPushButton *buttonForceUpdate;
    QLineEdit *searchBox;
    QTreeWidget *treeOther;
    QLabel *label_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTotalApps;
    QLabel *labelNumApps;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelInstalled;
    QLabel *labelNumInst;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelUpgradable;
    QLabel *labelNumUpgr;
    QPushButton *buttonUpgradeAll;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *checkHideLibs;
    QGridLayout *buttonBar;
    QPushButton *buttonUninstall;
    QSpacerItem *horizontalSpacer1;
    QPushButton *buttonAbout;
    QPushButton *buttonHelp;
    QPushButton *buttonInstall;
    QSpacerItem *horizontalSpacer2;
    QPushButton *buttonCancel;
    QLabel *labelantiX;

    void setupUi(QDialog *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(942, 528);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setSizeGripEnabled(false);
        MainWindow->setModal(false);
        verticalLayout = new QVBoxLayout(MainWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(MainWindow);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabApps = new QWidget();
        tabApps->setObjectName(QStringLiteral("tabApps"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabApps->sizePolicy().hasHeightForWidth());
        tabApps->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(tabApps);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        treePopularApps = new QTreeWidget(tabApps);
        treePopularApps->headerItem()->setText(0, QString());
        treePopularApps->headerItem()->setText(1, QString());
        treePopularApps->setObjectName(QStringLiteral("treePopularApps"));
        treePopularApps->setFrameShadow(QFrame::Raised);
        treePopularApps->setTabKeyNavigation(true);
        treePopularApps->setSelectionMode(QAbstractItemView::SingleSelection);

        gridLayout->addWidget(treePopularApps, 3, 0, 1, 5);

        searchPopular = new QLineEdit(tabApps);
        searchPopular->setObjectName(QStringLiteral("searchPopular"));
        searchPopular->setMinimumSize(QSize(150, 0));
        searchPopular->setMaximumSize(QSize(200, 16777215));
        searchPopular->setClearButtonEnabled(true);

        gridLayout->addWidget(searchPopular, 2, 2, 1, 1);

        label = new QLabel(tabApps);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 2, 1);

        horizontalSpacer = new QSpacerItem(350, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        tabWidget->addTab(tabApps, QString());
        tabOtherRepos = new QWidget();
        tabOtherRepos->setObjectName(QStringLiteral("tabOtherRepos"));
        sizePolicy1.setHeightForWidth(tabOtherRepos->sizePolicy().hasHeightForWidth());
        tabOtherRepos->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(tabOtherRepos);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(tabOtherRepos);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioStable = new QRadioButton(groupBox);
        radioStable->setObjectName(QStringLiteral("radioStable"));
        radioStable->setChecked(true);

        horizontalLayout->addWidget(radioStable);

        radioMXtest = new QRadioButton(groupBox);
        radioMXtest->setObjectName(QStringLiteral("radioMXtest"));
        radioMXtest->setChecked(false);

        horizontalLayout->addWidget(radioMXtest);

        radioBackports = new QRadioButton(groupBox);
        radioBackports->setObjectName(QStringLiteral("radioBackports"));

        horizontalLayout->addWidget(radioBackports);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 4);

        icon = new QPushButton(tabOtherRepos);
        icon->setObjectName(QStringLiteral("icon"));
        icon->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(icon->sizePolicy().hasHeightForWidth());
        icon->setSizePolicy(sizePolicy2);
        icon->setMaximumSize(QSize(24, 16777215));
        icon->setIconSize(QSize(16, 16));
        icon->setShortcut(QStringLiteral(""));
        icon->setAutoDefault(false);
        icon->setFlat(true);

        gridLayout_2->addWidget(icon, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(109, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        comboFilter = new QComboBox(tabOtherRepos);
        comboFilter->setObjectName(QStringLiteral("comboFilter"));
        comboFilter->setEnabled(false);
        comboFilter->setMinimumSize(QSize(150, 0));
        comboFilter->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(comboFilter, 1, 5, 1, 1);

        label_3 = new QLabel(tabOtherRepos);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMargin(0);
        label_3->setIndent(4);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 4);

        buttonForceUpdate = new QPushButton(tabOtherRepos);
        buttonForceUpdate->setObjectName(QStringLiteral("buttonForceUpdate"));
        buttonForceUpdate->setMinimumSize(QSize(150, 0));
        buttonForceUpdate->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(buttonForceUpdate, 0, 5, 1, 1);

        searchBox = new QLineEdit(tabOtherRepos);
        searchBox->setObjectName(QStringLiteral("searchBox"));
        searchBox->setMinimumSize(QSize(150, 0));
        searchBox->setMaximumSize(QSize(200, 16777215));
        searchBox->setClearButtonEnabled(true);

        gridLayout_2->addWidget(searchBox, 2, 5, 1, 1);

        treeOther = new QTreeWidget(tabOtherRepos);
        treeOther->headerItem()->setText(0, QString());
        treeOther->headerItem()->setText(1, QString());
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(5, QStringLiteral("Status"));
        treeOther->setHeaderItem(__qtreewidgetitem);
        treeOther->setObjectName(QStringLiteral("treeOther"));

        gridLayout_2->addWidget(treeOther, 3, 0, 1, 6);

        label_2 = new QLabel(tabOtherRepos);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(false);
        label_2->setIndent(-1);

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        frame = new QFrame(tabOtherRepos);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelTotalApps = new QLabel(frame);
        labelTotalApps->setObjectName(QStringLiteral("labelTotalApps"));

        horizontalLayout_2->addWidget(labelTotalApps);

        labelNumApps = new QLabel(frame);
        labelNumApps->setObjectName(QStringLiteral("labelNumApps"));

        horizontalLayout_2->addWidget(labelNumApps);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        labelInstalled = new QLabel(frame);
        labelInstalled->setObjectName(QStringLiteral("labelInstalled"));

        horizontalLayout_2->addWidget(labelInstalled);

        labelNumInst = new QLabel(frame);
        labelNumInst->setObjectName(QStringLiteral("labelNumInst"));

        horizontalLayout_2->addWidget(labelNumInst);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        labelUpgradable = new QLabel(frame);
        labelUpgradable->setObjectName(QStringLiteral("labelUpgradable"));

        horizontalLayout_2->addWidget(labelUpgradable);

        labelNumUpgr = new QLabel(frame);
        labelNumUpgr->setObjectName(QStringLiteral("labelNumUpgr"));

        horizontalLayout_2->addWidget(labelNumUpgr);

        buttonUpgradeAll = new QPushButton(frame);
        buttonUpgradeAll->setObjectName(QStringLiteral("buttonUpgradeAll"));
        QIcon icon1;
        QString iconThemeName = QStringLiteral("system-upgrade");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        buttonUpgradeAll->setIcon(icon1);

        horizontalLayout_2->addWidget(buttonUpgradeAll);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        checkHideLibs = new QCheckBox(frame);
        checkHideLibs->setObjectName(QStringLiteral("checkHideLibs"));
        checkHideLibs->setChecked(true);

        horizontalLayout_2->addWidget(checkHideLibs);


        gridLayout_2->addWidget(frame, 4, 0, 1, 6);

        tabWidget->addTab(tabOtherRepos, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBar = new QGridLayout();
        buttonBar->setSpacing(5);
        buttonBar->setObjectName(QStringLiteral("buttonBar"));
        buttonBar->setSizeConstraint(QLayout::SetDefaultConstraint);
        buttonBar->setContentsMargins(0, 0, 0, 0);
        buttonUninstall = new QPushButton(MainWindow);
        buttonUninstall->setObjectName(QStringLiteral("buttonUninstall"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonUninstall->sizePolicy().hasHeightForWidth());
        buttonUninstall->setSizePolicy(sizePolicy3);
        QIcon icon2;
        iconThemeName = QStringLiteral("archive-remove");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        buttonUninstall->setIcon(icon2);

        buttonBar->addWidget(buttonUninstall, 0, 6, 1, 1);

        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonBar->addItem(horizontalSpacer1, 0, 2, 1, 1);

        buttonAbout = new QPushButton(MainWindow);
        buttonAbout->setObjectName(QStringLiteral("buttonAbout"));
        sizePolicy3.setHeightForWidth(buttonAbout->sizePolicy().hasHeightForWidth());
        buttonAbout->setSizePolicy(sizePolicy3);
        QIcon icon3;
        iconThemeName = QStringLiteral("help-about");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        buttonAbout->setIcon(icon3);
        buttonAbout->setAutoDefault(true);

        buttonBar->addWidget(buttonAbout, 0, 0, 1, 1);

        buttonHelp = new QPushButton(MainWindow);
        buttonHelp->setObjectName(QStringLiteral("buttonHelp"));
        sizePolicy3.setHeightForWidth(buttonHelp->sizePolicy().hasHeightForWidth());
        buttonHelp->setSizePolicy(sizePolicy3);
        QIcon icon4(QIcon::fromTheme(QStringLiteral("help-contents")));
        buttonHelp->setIcon(icon4);

        buttonBar->addWidget(buttonHelp, 0, 1, 1, 1);

        buttonInstall = new QPushButton(MainWindow);
        buttonInstall->setObjectName(QStringLiteral("buttonInstall"));
        sizePolicy3.setHeightForWidth(buttonInstall->sizePolicy().hasHeightForWidth());
        buttonInstall->setSizePolicy(sizePolicy3);
        QIcon icon5;
        iconThemeName = QStringLiteral("run-install");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        buttonInstall->setIcon(icon5);
        buttonInstall->setAutoDefault(true);

        buttonBar->addWidget(buttonInstall, 0, 7, 1, 1);

        horizontalSpacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonBar->addItem(horizontalSpacer2, 0, 5, 1, 1);

        buttonCancel = new QPushButton(MainWindow);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        sizePolicy3.setHeightForWidth(buttonCancel->sizePolicy().hasHeightForWidth());
        buttonCancel->setSizePolicy(sizePolicy3);
        QIcon icon6;
        iconThemeName = QStringLiteral("window-close");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        buttonCancel->setIcon(icon6);
        buttonCancel->setAutoDefault(true);

        buttonBar->addWidget(buttonCancel, 0, 9, 1, 1);

        labelantiX = new QLabel(MainWindow);
        labelantiX->setObjectName(QStringLiteral("labelantiX"));
        labelantiX->setMaximumSize(QSize(32, 32));
        labelantiX->setMidLineWidth(0);
        labelantiX->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/logo.png")));
        labelantiX->setScaledContents(true);

        buttonBar->addWidget(labelantiX, 0, 3, 1, 1);


        verticalLayout->addLayout(buttonBar);

        QWidget::setTabOrder(tabWidget, searchPopular);
        QWidget::setTabOrder(searchPopular, treePopularApps);
        QWidget::setTabOrder(treePopularApps, buttonAbout);
        QWidget::setTabOrder(buttonAbout, buttonHelp);
        QWidget::setTabOrder(buttonHelp, buttonInstall);
        QWidget::setTabOrder(buttonInstall, buttonCancel);

        retranslateUi(MainWindow);
        QObject::connect(buttonCancel, SIGNAL(pressed()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);
        buttonInstall->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QDialog *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Package Installer", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treePopularApps->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("MainWindow", "Info", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "Package", Q_NULLPTR));
        searchPopular->setPlaceholderText(QApplication::translate("MainWindow", "search", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">Manage popular packages</span></p><p>Greyed out items have already been installed.</p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabApps), QApplication::translate("MainWindow", "Popular Applications", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Select source", Q_NULLPTR));
        radioStable->setText(QApplication::translate("MainWindow", "Stable Repo", Q_NULLPTR));
        radioMXtest->setText(QApplication::translate("MainWindow", "MX Test Repo", Q_NULLPTR));
        radioBackports->setText(QApplication::translate("MainWindow", "Debian Backports Repo", Q_NULLPTR));
        icon->setText(QString());
        comboFilter->clear();
        comboFilter->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "All packages", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Installed", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Upgradable", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Not installed", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        comboFilter->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Filter packages according to their status.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        comboFilter->setCurrentText(QApplication::translate("MainWindow", "All packages", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Greyed out items have already been installed.", Q_NULLPTR));
        buttonForceUpdate->setText(QApplication::translate("MainWindow", "Refresh list", Q_NULLPTR));
        searchBox->setPlaceholderText(QApplication::translate("MainWindow", "search", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = treeOther->headerItem();
        ___qtreewidgetitem1->setText(6, QApplication::translate("MainWindow", "Displayed", Q_NULLPTR));
        ___qtreewidgetitem1->setText(4, QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        ___qtreewidgetitem1->setText(3, QApplication::translate("MainWindow", "Version", Q_NULLPTR));
        ___qtreewidgetitem1->setText(2, QApplication::translate("MainWindow", "Package Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p>= Upgradable package. Newer version available in selected repository.</p></body></html>", Q_NULLPTR));
        labelTotalApps->setText(QApplication::translate("MainWindow", "Total packages:", Q_NULLPTR));
        labelNumApps->setText(QString());
        labelInstalled->setText(QApplication::translate("MainWindow", "Installed:", Q_NULLPTR));
        labelNumInst->setText(QString());
        labelUpgradable->setText(QApplication::translate("MainWindow", "Upgradable:", Q_NULLPTR));
        labelNumUpgr->setText(QString());
        buttonUpgradeAll->setText(QApplication::translate("MainWindow", "Upgrade All", Q_NULLPTR));
        checkHideLibs->setText(QApplication::translate("MainWindow", "Hide library and developer packages", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabOtherRepos), QApplication::translate("MainWindow", "Full App Catalog", Q_NULLPTR));
        buttonUninstall->setText(QApplication::translate("MainWindow", "Uninstall", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonAbout->setToolTip(QApplication::translate("MainWindow", "About this application", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonAbout->setText(QApplication::translate("MainWindow", "About...", Q_NULLPTR));
        buttonAbout->setShortcut(QApplication::translate("MainWindow", "Alt+B", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonHelp->setToolTip(QApplication::translate("MainWindow", "Display help ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonHelp->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        buttonHelp->setShortcut(QApplication::translate("MainWindow", "Alt+H", Q_NULLPTR));
        buttonInstall->setText(QApplication::translate("MainWindow", "Install", Q_NULLPTR));
        buttonInstall->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        buttonCancel->setToolTip(QApplication::translate("MainWindow", "Quit application", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonCancel->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        buttonCancel->setShortcut(QApplication::translate("MainWindow", "Alt+N", Q_NULLPTR));
        labelantiX->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
