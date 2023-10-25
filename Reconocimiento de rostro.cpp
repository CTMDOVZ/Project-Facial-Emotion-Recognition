#include <opencv2/opencv.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <iostream>
#include <fstream>
#include <sstream>
#include <filesystem> // C++17

// Use std::filesystem for directory operations
namespace fs = std::filesystem;

std::string emotionName = "Tristeza";
std::string dataPath = "C:\\Users\\thedo\\OneDrive\\EPET\\RECONOCIMIENTO FACIAL\\Data"; //TIENES Q CREAR UNA CARPETA "DATA"(VACIA)
std::string emotionsPath = dataPath + "\\" + emotionName;

int main(int argc, const char** argv)
{
    if (!fs::exists(emotionsPath)){
        std::cout << "Carpeta creada: " << emotionsPath << std::endl;
        fs::create_directories(emotionsPath);
    }

    cv::VideoCapture cap(0);
    if (!cap.isOpened())
    {
        std::cout << "Error: la cámara no se pudo abrir" << std::endl;
        return -1;
    }

    cv::CascadeClassifier faceClassif;
    if (!faceClassif.load(cv::samples::findFile("haarcascades/haarcascade_frontalface_default.xml")))
    {
        std::cout << "Error: no se pudo cargar el clasificador de cara" << std::endl;
        return -1;
    }

    cv::Mat frame;
    cv::Mat gray;
    int count = 0;
    
    while (true)
    {
        cap >> frame;
        if (frame.empty()) break;

        cv::resize(frame, frame, cv::Size(640, 480));
        cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);

        std::vector<cv::Rect> faces;
        faceClassif.detectMultiScale(gray, faces, 1.3, 5);

        for (size_t i = 0; i < faces.size(); i++)
        {
            cv::rectangle(frame, faces[i], cv::Scalar(0,255,0), 2);
            cv::Mat rostro = frame(faces[i]);
            cv::resize(rostro, rostro, cv::Size(150, 150), 0, 0, cv::INTER_CUBIC);

            std::stringstream ss;
            ss << emotionsPath << "\\rostro_" << count << ".jpg";
            cv::imwrite(ss.str(), rostro);
            count++;
        }

        cv::imshow("frame", frame);
        char c = (char)cv::waitKey(1);
        if( c == 27 || count >= 200) break;
    }

    cap.release();
    cv::destroyAllWindows();
    return 0;
}
