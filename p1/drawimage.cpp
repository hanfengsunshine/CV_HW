#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
/*
* Draw the image on the label widget.
*/
void MainWindow::draw_image()
{
<<<<<<< HEAD

	if(workstates == image_only||workstates ==image_only_contour)
    {

		QImage * img_tmp;
		img_tmp = pimg;
		pimg = new QImage(pimg->scaled(img->width() * size, img->height() * size, Qt::KeepAspectRatio));
		delete img_tmp;
		
        ui->ShowImage->resize(pimg->width(), pimg->height());
        ui->ShowImage->setPixmap(QPixmap::fromImage(*pimg));
		ui->centralWidget->resize(pimg->width(), pimg->height());
		this->resize(pimg->width(), pimg->height());
=======
	//this->resize(img->width(), img->height());
    //ui->ShowImage->resize(img->width(), img->height());
	//ui->centralWidget->resize(img->width(), img->height());
    if(workstates ==image_only||workstates ==image_only_contour)
    {
        ui->ShowImage->resize(img->width(), img->height());
        ui->ShowImage->setPixmap(QPixmap::fromImage(*img));
>>>>>>> 3636f17478f45c645b5db5a062bdf6bf2e58ede9
    }
    else if(workstates ==cost_graph)
    {
        QImage cg=ics->drawCostGraph();
        ui->ShowImage->resize(cg.width(), cg.height());
        ui->ShowImage->setPixmap(QPixmap::fromImage(cg));
<<<<<<< HEAD
		ui->centralWidget->resize(cg.width(), cg.height());
		this->resize(cg.width(), cg.height());
=======
>>>>>>> 3636f17478f45c645b5db5a062bdf6bf2e58ede9
    }
    else if(workstates==path_tree)
    {
        QImage cg=ics->drawPathTree();
        ui->ShowImage->resize(cg.width(), cg.height());
        ui->ShowImage->setPixmap(QPixmap::fromImage(cg));
<<<<<<< HEAD
		ui->centralWidget->resize(cg.width(), cg.height());
		this->resize(cg.width(), cg.height());
    }

}

=======
    }
}
>>>>>>> 3636f17478f45c645b5db5a062bdf6bf2e58ede9
