#include <opencv2/opencv.hpp>
#include <opencv2/calib3d/calib3d.hpp>
using namespace std;
using namespace cv;

/**
 * @������
 */
int main()
{

	/// ��ȡһ��ͼƬ�����ı�ͼƬ�������ɫ���ͣ��ö�ȡ��ʽΪDOS����ģʽ��
		Mat src = imread("G:/Projects/pic/left02.jpg", 1 );
		Mat distortion = src.clone();
		Mat camera_matrix = Mat(3, 3, CV_32FC1);
		Mat distortion_coefficients;


		//��������ڲκͻ���ϵ������
		FileStorage file_storage("G:/Projects/Problem_6/Problem_6/out_camera_data.xml", FileStorage::READ);
		file_storage["Camera_Matrix"] >> camera_matrix;
		file_storage["Distortion_Coefficients"] >> distortion_coefficients;
		file_storage.release();

		//����
		undistort(src, distortion, camera_matrix, distortion_coefficients);

		imshow("img", src);
		imshow("undistort", distortion);
		imwrite("undistort.jpg", distortion);

		waitKey(0);
		return 0;
}