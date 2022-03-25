#include <QCoreApplication>
#include <QtGui/QImage>
#include<QDebug>

int main(int argc, char *argv[])
{
    int result = 0;
        if(argc > 2)
        {
            char * input = argv[1];
            int threshold = atoi(argv[2]);
            if(threshold >= 0 && threshold < 255)
            {
                QImage image;
                bool loaded = image.load(input);
                if(loaded)
                {
                    QSize sizeImage = image.size();
                    int width = sizeImage.width();
                    int height = sizeImage.height();

                    QRgb color;
                    for (int f1=0; f1<width; f1++) {
                        for (int f2=0; f2<height; f2++) {
                            color = image.pixel(f1, f2);
                            if(qGreen(color) > threshold)
                            {
                                image.setPixel(f1, f2, qRgba(0,0,0,0));
                            }
                            else
                            {
                                image.setPixel(f1, f2, qRgba(255,255,255,255));
                            }

                        }
                    }
                    QString outputPath = "output_";
                    outputPath += argv[2];
                    outputPath += ".png";
                    image.save(outputPath);
                }
                else
                {
                    qErrnoWarning("Please Provide an exitant image path");
                }
            }

            else
            {
                qErrnoWarning("Please Provide a Threshold between 0 and 255");
            }
        }
        else
        {
            const char helpmsg[] = "Usage\n"
                                   "\t Path to input image (eg: test.png )2\n"
                                   "\t Threshold of the green value (eg: 100)\n"
                                   "\t Example: ./green test.png 100 \n";
            qInfo( helpmsg);
            result = -1;
        }

        return result;
}
