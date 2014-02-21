/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *SaveContour;
    QAction *SaveMask;
    QAction *actionWork_Mode;
    QAction *actionDebug_Mode;
    QAction *ImageOnly;
    QAction *actionWork_Mode_2;
    QAction *ImageContour;
    QAction *actionDebug_Mode_2;
    QAction *PixelNode;
    QAction *CostGraph;
    QAction *PathTree;
    QAction *MinPath;
    QAction *QuitButton;
    QAction *LoadImage;
    QAction *Load_Image;
    QWidget *centralWidget;
    QLabel *ShowImage;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTool;
    QMenu *menuScissor_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(512, 481);
        SaveContour = new QAction(MainWindow);
        SaveContour->setObjectName(QStringLiteral("SaveContour"));
        SaveMask = new QAction(MainWindow);
        SaveMask->setObjectName(QStringLiteral("SaveMask"));
        actionWork_Mode = new QAction(MainWindow);
        actionWork_Mode->setObjectName(QStringLiteral("actionWork_Mode"));
        actionDebug_Mode = new QAction(MainWindow);
        actionDebug_Mode->setObjectName(QStringLiteral("actionDebug_Mode"));
        ImageOnly = new QAction(MainWindow);
        ImageOnly->setObjectName(QStringLiteral("ImageOnly"));
        actionWork_Mode_2 = new QAction(MainWindow);
        actionWork_Mode_2->setObjectName(QStringLiteral("actionWork_Mode_2"));
        actionWork_Mode_2->setCheckable(false);
        actionWork_Mode_2->setEnabled(false);
        ImageContour = new QAction(MainWindow);
        ImageContour->setObjectName(QStringLiteral("ImageContour"));
        actionDebug_Mode_2 = new QAction(MainWindow);
        actionDebug_Mode_2->setObjectName(QStringLiteral("actionDebug_Mode_2"));
        actionDebug_Mode_2->setEnabled(false);
        PixelNode = new QAction(MainWindow);
        PixelNode->setObjectName(QStringLiteral("PixelNode"));
        CostGraph = new QAction(MainWindow);
        CostGraph->setObjectName(QStringLiteral("CostGraph"));
        PathTree = new QAction(MainWindow);
        PathTree->setObjectName(QStringLiteral("PathTree"));
        MinPath = new QAction(MainWindow);
        MinPath->setObjectName(QStringLiteral("MinPath"));
        QuitButton = new QAction(MainWindow);
        QuitButton->setObjectName(QStringLiteral("QuitButton"));
        LoadImage = new QAction(MainWindow);
        LoadImage->setObjectName(QStringLiteral("LoadImage"));
        Load_Image = new QAction(MainWindow);
        Load_Image->setObjectName(QStringLiteral("Load_Image"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ShowImage = new QLabel(centralWidget);
        ShowImage->setObjectName(QStringLiteral("ShowImage"));
        ShowImage->setGeometry(QRect(0, 0, 461, 301));
        ShowImage->setScaledContents(false);
        ShowImage->setIndent(0);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 512, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuTool = new QMenu(menuBar);
        menuTool->setObjectName(QStringLiteral("menuTool"));
        menuScissor_2 = new QMenu(menuTool);
        menuScissor_2->setObjectName(QStringLiteral("menuScissor_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTool->menuAction());
        menuFile->addAction(Load_Image);
        menuFile->addSeparator();
        menuFile->addAction(SaveContour);
        menuFile->addAction(SaveMask);
        menuFile->addSeparator();
        menuFile->addAction(QuitButton);
        menuTool->addAction(menuScissor_2->menuAction());
        menuScissor_2->addAction(actionWork_Mode_2);
        menuScissor_2->addAction(ImageOnly);
        menuScissor_2->addAction(ImageContour);
        menuScissor_2->addSeparator();
        menuScissor_2->addAction(actionDebug_Mode_2);
        menuScissor_2->addAction(PixelNode);
        menuScissor_2->addAction(CostGraph);
        menuScissor_2->addAction(PathTree);
        menuScissor_2->addAction(MinPath);

        retranslateUi(MainWindow);
        QObject::connect(QuitButton, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(Load_Image, SIGNAL(triggered()), MainWindow, SLOT(OpenImage()));
        QObject::connect(ImageOnly, SIGNAL(triggered()), MainWindow, SLOT(on_image_only()));
        QObject::connect(ImageContour, SIGNAL(triggered()), MainWindow, SLOT(on_image_contour()));
        QObject::connect(MinPath, SIGNAL(triggered()), MainWindow, SLOT(on_min_path()));
        QObject::connect(PathTree, SIGNAL(triggered()), MainWindow, SLOT(on_path_tree()));
        QObject::connect(PixelNode, SIGNAL(triggered()), MainWindow, SLOT(on_pixel_node()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        SaveContour->setText(QApplication::translate("MainWindow", "Save Contour", 0));
        SaveMask->setText(QApplication::translate("MainWindow", "Save Mask", 0));
        actionWork_Mode->setText(QApplication::translate("MainWindow", "Work Mode", 0));
        actionDebug_Mode->setText(QApplication::translate("MainWindow", "Debug Mode", 0));
        ImageOnly->setText(QApplication::translate("MainWindow", "Image Only", 0));
        actionWork_Mode_2->setText(QApplication::translate("MainWindow", "Work Mode", 0));
        ImageContour->setText(QApplication::translate("MainWindow", "Image with Contour", 0));
        actionDebug_Mode_2->setText(QApplication::translate("MainWindow", "Debug Mode", 0));
        PixelNode->setText(QApplication::translate("MainWindow", "Pixel Node", 0));
        CostGraph->setText(QApplication::translate("MainWindow", "Cost Graph", 0));
        PathTree->setText(QApplication::translate("MainWindow", "Path Tree", 0));
        MinPath->setText(QApplication::translate("MainWindow", "Min Path", 0));
        QuitButton->setText(QApplication::translate("MainWindow", "Quit", 0));
        LoadImage->setText(QApplication::translate("MainWindow", "Load Image", 0));
        Load_Image->setText(QApplication::translate("MainWindow", "Load Image", 0));
        ShowImage->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuTool->setTitle(QApplication::translate("MainWindow", "Tool", 0));
        menuScissor_2->setTitle(QApplication::translate("MainWindow", "Scissor", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
