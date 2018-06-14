



## Project_Stereo

Code for Project_Stereo.

#### Compiler Environment

- Visual Studio 2012
- OpenCV 2.4.13

#### Problem_6

1. Use Visual Studio to open Problem_6.sln in the folder problem_6.

2. You need to **modify the path to your own path** in the following files.

   * The Output_file_path in Problem_6.cpp

     ```
     const string inputSettingsFile =  "G:/Projects/Problem_6/Problem_6/default.xml";
     ```

   * The image path in VID5.xml

   * The input path and Write_outputFileName path in in_VID5.xml

   * The input path and Write_outputFileName path in default.xml

3. Run the code and you will get the result in **out_camera_data.xml** saved in the local path.

#### Problem_7

1. Use Visual Studio to open Problem_7.sln in the folder problem_7.

2. You need to **modify the path to your own path** in the following files.

   * Modify the pic path in Undistort.cpp.

     ```&#39;&#39;&#39;
     Mat src = imread("G:/Projects/pic/left02.jpg", 1 ); //change it to your own image path
     ```

   * Modify the path of **out_camera_data.xml** generated in Problem_6.

     ```
     FileStorage file_storage("G:/Projects/Problem_6/Problem_6/out_camera_data.xml", FileStorage::READ);
     ```

3. Run the code and you will get the undistorted result of the picture.

#### Problem_8

1. Use Visual Studio to open Problem_8.sln in the folder problem_8.

2. You need to **modify the path to your own path** in the following files.

   * Open the calibdata.txt, modify the image path to your own.

   * Open Zhang.cpp and modify the path of calibdata.txt and caliberation_result.txt 

     ```
     ifstream fin("G:/Projects/Problem_8/Problem_8/calibdata.txt"); /* 标定所用图像文件的路径 */
     ofstream fout("G:/Projects/Problem_8/Problem_8/caliberation_result.txt");  /* 保存标定结果的文件 */
     ```

3. Run the code and you will get the result in **caliberation_result.txt** saved in the local path.

#### Problem_12

1. Use Visual Studio to open Problem_12.sln in the folder problem_12.

2. Before running the code, you should **set the command line parameters** in the Visual Studio.

   ```
   StereoCalibration -w 9 -h 6 YourOwnPathTo/stereo_calib.xml
   ```

3. You need to **modify the path to your own path** in the following files.

   * Open the sterro_calib.xml, modify the image path to your own.

4. Run the code and will generate the extrinsics.yml and intrinsics.yml in the local path.